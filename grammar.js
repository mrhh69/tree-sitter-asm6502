const LETTERS = choice('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z');
// const LETTERS = choice(/[aA]/, /[bB]/, /[cC]/, /[dD]/, /[eE]/, /[fF]/, /[gG]/, /[hH]/, /[iI]/, /[jJ]/, /[kK]/, /[lL]/, /[mM]/, /[nN]/, /[oO]/, /[pP]/, /[qQ]/, /[rR]/, /[sS]/, /[tT]/, /[uU]/, /[vV]/, /[wW]/, /[xX]/, /[yY]/, /[zZ]/);
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
    /* NOTE: conflicts between a global_label and opcodes are handled like this:
     * each letter in an opcode and in a label are treated as individual tokens by the lexer
     * [see here](https://tree-sitter.github.io/tree-sitter/creating-parsers#lexical-precedence-vs-parse-precedence)
     * then when there is a conflict between a label or opcode
     * Ex: `stack:`
     * tree sitter tries both, until it finds which is the correct to use
     */
    [$._label_char, $._immediate_opcode, $._absolute_opcode, $._indirect_opcode],
    [$._label_char, $._absolute_opcode, $._implied_opcode],
    [$._label_char, $._relative_opcode],
    [$._label_char, $._immediate_opcode, $._absolute_opcode],
    [$._label_char, $._implied_opcode, $._relative_opcode],
    [$._label_char, $._implied_opcode],
    [$._label_char, $._absolute_opcode, $._indirect_opcode],
    [$._label_char, $._absolute_opcode],
    [$._label_char, $._implied_opcode, $._absolute_opcode, $._indirect_opcode],

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

    local_label:  $ => prec.right(seq(
      '.',
      repeat1($._ext_label_char),
    )),
    global_label: $ => prec.right(seq(
      choice($._label_char, '_'),
      repeat($._ext_label_char),
    )),
    _label_char: $ => choice(LETTERS),
    _ext_label_char: $ => choice($._label_char, /[-_0-9]/),


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
      $._ws_end,
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
      seq(choice('n','N'),choice('o','O'),choice('p','P')),
      seq(choice('c','C'),choice('l','L'),choice('c','C')),
      seq(choice('c','C'),choice('l','L'),choice('d','D')),
      seq(choice('c','C'),choice('l','L'),choice('i','I')),
      seq(choice('c','C'),choice('l','L'),choice('v','V')),
      seq(choice('d','D'),choice('e','E'),choice('x','X')),
      seq(choice('d','D'),choice('e','E'),choice('y','Y')),
      seq(choice('i','I'),choice('n','N'),choice('x','X')),
      seq(choice('i','I'),choice('n','N'),choice('y','Y')),
      seq(choice('s','S'),choice('e','E'),choice('c','C')),
      seq(choice('s','S'),choice('e','E'),choice('d','D')),
      seq(choice('s','S'),choice('e','E'),choice('i','I')),
      seq(choice('s','S'),choice('t','T'),choice('p','P')),
      seq(choice('t','T'),choice('a','A'),choice('x','X')),
      seq(choice('t','T'),choice('a','A'),choice('y','Y')),
      seq(choice('t','T'),choice('s','S'),choice('x','X')),
      seq(choice('t','T'),choice('x','X'),choice('a','A')),
      seq(choice('t','T'),choice('x','X'),choice('s','S')),
      seq(choice('t','T'),choice('y','Y'),choice('a','A')),
      seq(choice('w','W'),choice('a','A'),choice('i','I')),
      // a register
      seq(choice('a','A'),choice('s','S'),choice('l','L')),
      seq(choice('d','D'),choice('e','E'),choice('c','C')),
      seq(choice('i','I'),choice('n','N'),choice('c','C')),
      seq(choice('l','L'),choice('s','S'),choice('r','R')),
      seq(choice('r','R'),choice('o','O'),choice('l','L')),
      seq(choice('r','R'),choice('o','O'),choice('r','R')),
      // stack based
      seq(choice('b','B'),choice('r','R'),choice('k','K')),
      seq(choice('p','P'),choice('h','H'),choice('a','A')),
      seq(choice('p','P'),choice('h','H'),choice('p','P')),
      seq(choice('p','P'),choice('h','H'),choice('x','X')),
      seq(choice('p','P'),choice('h','H'),choice('y','Y')),
      seq(choice('p','P'),choice('l','L'),choice('a','A')),
      seq(choice('p','P'),choice('l','L'),choice('p','P')),
      seq(choice('p','P'),choice('l','L'),choice('x','X')),
      seq(choice('p','P'),choice('l','L'),choice('y','Y')),
      seq(choice('r','R'),choice('t','T'),choice('i','I')),
      seq(choice('r','R'),choice('t','T'),choice('s','S')),
    )),

    _relative_opcode: $ => (choice(
      seq(choice('b','B'),choice('c','C'),choice('c','C')),
      seq(choice('b','B'),choice('c','C'),choice('s','S')),
      seq(choice('b','B'),choice('e','E'),choice('q','Q')),
      seq(choice('b','B'),choice('m','M'),choice('i','I')),
      seq(choice('b','B'),choice('n','N'),choice('e','E')),
      seq(choice('b','B'),choice('p','P'),choice('l','L')),
      seq(choice('b','B'),choice('r','R'),choice('a','A')),
      seq(choice('b','B'),choice('v','V'),choice('c','C')),
      seq(choice('b','B'),choice('v','V'),choice('s','S')),
    )),

    _immediate_opcode: $ => (choice(
      seq(choice('a','A'),choice('d','D'),choice('c','C')),
      seq(choice('a','A'),choice('n','N'),choice('d','D')),
      seq(choice('b','B'),choice('i','I'),choice('t','T')),
      seq(choice('c','C'),choice('m','M'),choice('p','P')),
      seq(choice('c','C'),choice('p','P'),choice('x','X')),
      seq(choice('c','C'),choice('p','P'),choice('y','Y')),
      seq(choice('e','E'),choice('o','O'),choice('r','R')),
      seq(choice('l','L'),choice('d','D'),choice('a','A')),
      seq(choice('l','L'),choice('d','D'),choice('x','X')),
      seq(choice('l','L'),choice('d','D'),choice('y','Y')),
      seq(choice('o','O'),choice('r','R'),choice('a','A')),
      seq(choice('s','S'),choice('b','B'),choice('c','C')),
    )),

    _absolute_opcode: $ => (choice(
      seq(choice('a','A'),choice('d','D'),choice('c','C')),
      seq(choice('a','A'),choice('n','N'),choice('d','D')),
      seq(choice('a','A'),choice('s','S'),choice('l','L')),
      seq(choice('b','B'),choice('i','I'),choice('t','T')),
      seq(choice('c','C'),choice('m','M'),choice('p','P')),
      seq(choice('c','C'),choice('p','P'),choice('x','X')),
      seq(choice('c','C'),choice('p','P'),choice('y','Y')),
      seq(choice('d','D'),choice('e','E'),choice('c','C')),
      seq(choice('e','E'),choice('o','O'),choice('r','R')),
      seq(choice('i','I'),choice('n','N'),choice('c','C')),
      seq(choice('j','J'),choice('m','M'),choice('p','P')),
      seq(choice('j','J'),choice('s','S'),choice('r','R')),
      seq(choice('l','L'),choice('d','D'),choice('a','A')),
      seq(choice('l','L'),choice('d','D'),choice('x','X')),
      seq(choice('l','L'),choice('d','D'),choice('y','Y')),
      seq(choice('l','L'),choice('s','S'),choice('r','R')),
      seq(choice('o','O'),choice('r','R'),choice('a','A')),
      seq(choice('r','R'),choice('o','O'),choice('l','L')),
      seq(choice('r','R'),choice('o','O'),choice('r','R')),
      seq(choice('s','S'),choice('b','B'),choice('c','C')),
      seq(choice('s','S'),choice('t','T'),choice('a','A')),
      seq(choice('s','S'),choice('t','T'),choice('x','X')),
      seq(choice('s','S'),choice('t','T'),choice('y','Y')),
      seq(choice('s','S'),choice('t','T'),choice('z','Z')),
      seq(choice('t','T'),choice('r','R'),choice('b','B')),
      seq(choice('t','T'),choice('s','S'),choice('b','B')),
      // abs,x
      // zp,x
      // abs,y
      // zp, y
    )),

    _indirect_opcode: $ => (choice(
      // ind abs
      seq(choice('j','J'),choice('m','M'),choice('p','P')),
      // ind zp
      seq(choice('a','A'),choice('d','D'),choice('c','C')),
      seq(choice('a','A'),choice('n','N'),choice('d','D')),
      seq(choice('c','C'),choice('m','M'),choice('p','P')),
      seq(choice('e','E'),choice('o','O'),choice('r','R')),
      seq(choice('l','L'),choice('d','D'),choice('a','A')),
      seq(choice('o','O'),choice('r','R'),choice('a','A')),
      seq(choice('s','S'),choice('b','B'),choice('c','C')),
      seq(choice('s','S'),choice('t','T'),choice('a','A')),
      // abs,x ind
      // zp,x ind
      // zp ind, y
    )),
  },
});
