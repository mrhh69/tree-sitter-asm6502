const WS = choice(' ', '\t');
const NEWLINE = '\n';

module.exports = grammar({
  name: 'asm6502',



  extras: $ => [
    /\s/, // whitespace control
    //' ', '\t',
    $.comment,
  ],

  conflicts: $ => [
    // operation conflicts (ex: sta #0, or sta 5)
    [$._immediate_opcode, $._absolute_opcode, $._indirect_opcode],
    [$._immediate_opcode, $._absolute_opcode],
    [$._absolute_opcode, $._indirect_opcode],
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._operation,
      $.label,
      $.assignment,
      $._directive,
    ),


    /* grammar misc */
    comment: $ => /;.*/,

    _ws_sep: $ => token.immediate( repeat1(WS) ),
    _ws_end: $ => token.immediate( seq(repeat(WS), NEWLINE) ),




    _directive: $ => choice(
      $.include_directive,
      $.extern_directive,
      $.section_directive,
      $.imm_directive,
    ),

    include_directive: $ => seq(
      $._inc_name,
      $._ws_sep,
      alias(token.immediate(
        choice(
          repeat1(choice('.', '_', /[a-zA-Z0-9]/)),
          seq('"', repeat1(choice('.', '_', /[a-zA-Z0-9]/)), '"'),
        )
      ), $.file_name),
      $._ws_end,
    ),

    extern_directive: $ => seq(
      $._ext_name,
      $._ws_sep,
      alias(token.immediate(seq(
        /[a-zA-Z_]/,
        repeat(choice('.', '_', /[a-zA-Z0-9]/)),
      )), $.global_label),
      $._ws_end,
    ),

    section_directive: $ => seq(
      $._sec_name,
      $._ws_sep,
      alias(token.immediate(seq(
        choice('.', /[a-zA-Z_]/),
        repeat(choice('.', /[a-zA-Z0-9_]/)),
      )), $.section_name),
      $._ws_end,
    ),

    // directive w/ expr
    imm_directive: $ => seq(
      choice($._word_name, $._byte_name),
      $._expr,
      $._ws_end,
    ),

    _inc_name:  $ => alias(token( seq(optional('.'), 'include') ), $.directive),
    _ext_name:  $ => alias(token( seq(optional('.'), 'extern' ) ), $.directive),
    _sec_name:  $ => alias(token( seq(optional('.'), 'section') ), $.directive),
    _word_name: $ => alias(token( seq(optional('.'), 'word'   ) ), $.directive),
    _byte_name: $ => alias(token( seq(optional('.'), 'byte'   ) ), $.directive),



    assignment: $ => seq(
      $.global_label,
      '=',
      $._expr,
    ),

    /* labels */

    label: $ => seq(
      choice($.local_label, $.global_label),
      ':',
    ),


    /* expression definitions */

    _expr: $ => (choice(
      $.num_literal,
      $._identifier,
      seq('(', $._expr, ')'),
      $.binary_expr,
      $.unary_expr,
    )),

    _identifier: $ => seq(
      choice(
        $.local_label,
        $.global_label
      ),
    ),

    num_literal: $ => seq(
      token(choice(
        repeat1(/[0-9]/),
        seq('%', token.immediate(repeat1(/[01]/))),
        seq('$', token.immediate(repeat1(/[0-9a-fA-F]/)))
      )),
    ),

    binary_expr: $ => prec.left(seq(
      $._expr,
      alias(choice('+', '-', '*', '/', '<<', '>>', '&', "|"), $.operator),
      $._expr,
    )),
    unary_expr: $ => prec(2, seq(
      // TODO: should this be an operator? or just part of the literal?
      alias(/[-\+<>]/, $.operator),
      $._expr,
    )),




    /* operation definitions */

    _operation: $ => seq(
      choice(
        $.implied,
        $.relative,
        $.immediate,
        $.absolute,
        $.indirect
      ),
      //$._ws_end,
    ),

    implied: $ => seq( alias($._implied_opcode, $.opcode) ),
    relative: $ => seq(
      alias($._relative_opcode, $.opcode),
      $._ws_sep,
      $._expr
    ),

    immediate: $ => seq(
      alias($._immediate_opcode, $.opcode),
      $._ws_sep,
      token.immediate('#'),
      $._expr,
    ),
    absolute: $ => prec.dynamic(1, seq(
      alias($._absolute_opcode, $.opcode),
      $._ws_sep,
      $._expr,
      optional(choice($._reg_x, $._reg_y)),
    )),
    // indirect comes before absolute
    indirect: $ => prec.dynamic(2, seq(
      alias($._indirect_opcode, $.opcode),
      $._ws_sep,
      token.immediate('('),
        $._expr,
        optional($._reg_x),
      ')',
      optional($._reg_y),
    )),

    _reg_x: $ => seq(',', alias('x', $.register)),
    _reg_y: $ => seq(',', alias('y', $.register)),





    /* opcode definitions */
    _implied_opcode: $ => (choice(
      /[nN][oO][pP]/,
      /[cC][lL][cC]/,
      /[cC][lL][dD]/,
      /[cC][lL][iI]/,
      /[cC][lL][vV]/,
      /[dD][eE][xX]/,
      /[dD][eE][yY]/,
      /[iI][nN][xX]/,
      /[iI][nN][yY]/,
      /[sS][eE][cC]/,
      /[sS][eE][dD]/,
      /[sS][eE][iI]/,
      /[sS][tT][pP]/,
      /[tT][aA][xX]/,
      /[tT][aA][yY]/,
      /[tT][sS][xX]/,
      /[tT][xX][aA]/,
      /[tT][xX][sS]/,
      /[tT][yY][aA]/,
      /[wW][aA][iI]/,
      // a register
      /[aA][sS][lL]/,
      /[dD][eE][cC]/,
      /[iI][nN][cC]/,
      /[lL][sS][rR]/,
      /[rR][oO][lL]/,
      /[rR][oO][rR]/,
      // stack based
      /[bB][rR][kK]/,
      /[pP][hH][aA]/,
      /[pP][hH][pP]/,
      /[pP][hH][xX]/,
      /[pP][hH][yY]/,
      /[pP][lL][aA]/,
      /[pP][lL][pP]/,
      /[pP][lL][xX]/,
      /[pP][lL][yY]/,
      /[rR][tT][iI]/,
      /[rR][tT][sS]/,
    )),

    _relative_opcode: $ => (choice(
      /[bB][cC][cC]/,
      /[bB][cC][sS]/,
      /[bB][eE][qQ]/,
      /[bB][mM][iI]/,
      /[bB][nN][eE]/,
      /[bB][pP][lL]/,
      /[bB][rR][aA]/,
      /[bB][vV][cC]/,
      /[bB][vV][sS]/,
    )),

    _immediate_opcode: $ => (choice(
      /[aA][dD][cC]/,
      /[aA][nN][dD]/,
      /[bB][iI][tT]/,
      /[cC][mM][pP]/,
      /[cC][pP][xX]/,
      /[cC][pP][yY]/,
      /[eE][oO][rR]/,
      /[lL][dD][aA]/,
      /[lL][dD][xX]/,
      /[lL][dD][yY]/,
      /[oO][rR][aA]/,
      /[sS][bB][cC]/,
    )),

    _absolute_opcode: $ => (choice(
      /[aA][dD][cC]/,
      /[aA][nN][dD]/,
      /[aA][sS][lL]/,
      /[bB][iI][tT]/,
      /[cC][mM][pP]/,
      /[cC][pP][xX]/,
      /[cC][pP][yY]/,
      /[dD][eE][cC]/,
      /[eE][oO][rR]/,
      /[iI][nN][cC]/,
      /[jJ][mM][pP]/,
      /[jJ][sS][rR]/,
      /[lL][dD][aA]/,
      /[lL][dD][xX]/,
      /[lL][dD][yY]/,
      /[lL][sS][rR]/,
      /[oO][rR][aA]/,
      /[rR][oO][lL]/,
      /[rR][oO][rR]/,
      /[sS][bB][cC]/,
      /[sS][tT][aA]/,
      /[sS][tT][xX]/,
      /[sS][tT][yY]/,
      /[sS][tT][zZ]/,
      /[tT][rR][bB]/,
      /[tT][sS][bB]/,
    )),

    _indirect_opcode: $ => (choice(
      // ind abs
      /[jJ][mM][pP]/,
      // ind zp
      /[aA][dD][cC]/,
      /[aA][nN][dD]/,
      /[cC][mM][pP]/,
      /[eE][oO][rR]/,
      /[lL][dD][aA]/,
      /[oO][rR][aA]/,
      /[sS][bB][cC]/,
      /[sS][tT][aA]/,
    )),

    local_label:  $ => (/\.[a-zA-Z0-9_]+/),
    global_label: $ => (/[a-zA-Z_][a-zA-Z0-9_]+/),
  },
});
