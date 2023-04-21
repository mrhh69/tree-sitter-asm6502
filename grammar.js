module.exports = grammar({
  name: 'asm6502',



  extras: $ => [
    /\s|\\\r?\n/, // whitespace control
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    comment: $ => /;.*/,

    _statement: $ => choice(
      $._operation,
      $.label
    ),




    /* labels */

    label: $ => seq(
      choice($.local_label, $.global_label),
      ':'
    ),

    local_label:  $ => token(seq('.'), repeat1(/[a-zA-Z0-9.]/)),
    global_label: $ => token(/[a-zA-Z0-9]/, repeat1(/[a-zA-Z0-9.]/)),


    /* operation definitions */

    _operation: $ => choice(
      $.implied,
      $.stack,
      $.relative,
      $.immediate,
      $.absolute,
      $.indirect
    ),

    implied: $ => seq($._implied_opcode),
    stack: $ => seq($._stack_opcode),
    relative: $ => seq($._relative_opcode),

    immediate: $ => seq(
      $._immediate_opcode,
      '#',
      $._expr
    ),
    absolute: $ => seq(
      choice($._absolute_opcode, $._abs_x_opcode, $._abs_y_opcode),
      $._expr,
      optional(seq(
        ',',
        alias(choice('x', 'y'), $.register)
      ))
    ),
    // indirect comes before absolute
    indirect: $ => seq(
      choice($._indirect_opcode, $._x_ind_opcode, $._ind_y_opcode),
      '(',
        $._expr, optional(seq(
          ',',
          alias('x', $.register)
        )),
      ')',
      optional(seq(
        ',',
        alias('y', $.register)
      ))
    ),





    /* expression definitions */

    _expr: $ => (choice(
      $.num_literal,
      $.local_label,
      $.global_label,
      seq('(', $._expr, ')'),
      $.binary_expr
    )),

    num_literal: $ => seq(
      // should this be an operator? or just part of the literal?
      alias(optional(/[-\+]/), $.operator),
      token(choice(
        repeat1(/[0-9]/),
        seq('%', repeat1(/[01]/)),
        seq('$', repeat1(/[0-9a-fA-F]/))
      )),
    ),

    binary_expr: $ => prec.left(seq(
      $._expr,
      alias(choice('+', '-', '*', '/', '<<', '>>', '&', "|"), $.operator),
      $._expr
    )),







    /* opcode definitions */

    _implied_opcode: $ => alias(choice(
      $._nop,
      $._clc,
      $._cld,
      $._cli,
      $._clv,
      $._dex,
      $._dey,
      $._inx,
      $._iny,
      $._sec,
      $._sed,
      $._sei,
      $._stp,
      $._tax,
      $._tay,
      $._tsx,
      $._txa,
      $._txs,
      $._tya,
      $._wai,

      $._asl,
      $._dec,
      $._inc,
      $._lsr,
      $._rol,
      $._ror
    ), $.opcode),

    _stack_opcode: $ => alias(choice(
      $._brk,
      $._pha,
      $._php,
      $._phx,
      $._phy,
      $._pla,
      $._plp,
      $._plx,
      $._ply,
      $._rti,
      $._rts
    ), $.opcode),

    _relative_opcode: $ => alias(choice(
      $._bcc,
      $._bcs,
      $._beq,
      $._bmi,
      $._bne,
      $._bpl,
      $._bra,
      $._bvc,
      $._bvs
    ), $.opcode),

    _immediate_opcode: $ => alias(choice(
      $._adc,
      $._and,
      $._bit,
      $._cmp,
      $._cpx,
      $._cpy,
      $._eor,
      $._lda,
      $._ldx,
      $._ldy,
      $._ora,
      $._sbc
    ), $.opcode),

    _absolute_opcode: $ => alias(prec(1, choice(
      $._adc,
      $._and,
      $._asl,
      $._bit,
      $._cmp,
      $._cpx,
      $._cpy,
      $._dec,
      $._eor,
      $._inc,
      $._jmp,
      $._jsr,
      $._lda,
      $._ldx,
      $._ldy,
      $._lsr,
      $._ora,
      $._rol,
      $._ror,
      $._sbc,
      $._sta,
      $._stx,
      $._sty,
      $._stz,
      $._trb,
      $._tsb
    )), $.opcode),

    _abs_x_opcode: $ => alias(choice(
      $._adc,
      $._and,
      $._asl,
      $._bit,
      $._cmp,
      $._dec,
      $._eor,
      $._inc,
      $._lda,
      $._ldy,
      $._lsr,
      $._ora,
      $._rol,
      $._ror,
      $._sbc,
      $._sta,
      $._stz,

      $._sty
    ), $.opcode),

    _abs_y_opcode: $ => alias(choice(
      $._adc,
      $._and,
      $._cmp,
      $._eor,
      $._lda,
      $._ldx,
      $._ora,
      $._sbc,
      $._sta,

      $._stx
    ), $.opcode),

    _indirect_opcode: $ => alias(prec(2, choice(
      $._jmp,

      $._adc,
      $._and,
      $._cmp,
      $._eor,
      $._lda,
      $._ora,
      $._sbc,
      $._sta
    )), $.opcode),

    _x_ind_opcode: $ => alias(choice(
      $._jmp,

      $._adc,
      $._and,
      $._cmp,
      $._eor,
      $._lda,
      $._ora,
      $._sbc,
      $._sta
    ), $.opcode),

    _ind_y_opcode: $ => alias(choice(
      $._adc,
      $._and,
      $._cmp,
      $._eor,
      $._lda,
      $._ora,
      $._sbc,
      $._sta
    ), $.opcode),

    _adc: $ => /[aA][dD][cC]/,
    _and: $ => /[aA][nN][dD]/,
    _asl: $ => /[aA][sS][lL]/,
    //_bbr: $ => /[bB][bB][rR]/,
    //_bbs: $ => /[bB][bB][sS]/,
    _bcc: $ => /[bB][cC][cC]/,
    _bcs: $ => /[bB][cC][sS]/,
    _beq: $ => /[bB][eE][qQ]/,
    _bit: $ => /[bB][iI][tT]/,
    _bmi: $ => /[bB][mM][iI]/,
    _bne: $ => /[bB][nN][eE]/,
    _bpl: $ => /[bB][pP][lL]/,
    _bra: $ => /[bB][rR][aA]/,
    _brk: $ => /[bB][rR][kK]/,
    _bvc: $ => /[bB][vV][cC]/,
    _bvs: $ => /[bB][vV][sS]/,
    _clc: $ => /[cC][lL][cC]/,
    _cld: $ => /[cC][lL][dD]/,
    _cli: $ => /[cC][lL][iI]/,
    _clv: $ => /[cC][lL][vV]/,
    _cmp: $ => /[cC][mM][pP]/,
    _cpx: $ => /[cC][pP][xX]/,
    _cpy: $ => /[cC][pP][yY]/,
    _dec: $ => /[dD][eE][cC]/,
    _dex: $ => /[dD][eE][xX]/,
    _dey: $ => /[dD][eE][yY]/,
    _eor: $ => /[eE][oO][rR]/,
    _inc: $ => /[iI][nN][cC]/,
    _inx: $ => /[iI][nN][xX]/,
    _iny: $ => /[iI][nN][yY]/,
    _jmp: $ => /[jJ][mM][pP]/,
    _jsr: $ => /[jJ][sS][rR]/,
    _lda: $ => /[lL][dD][aA]/,
    _ldx: $ => /[lL][dD][xX]/,
    _ldy: $ => /[lL][dD][yY]/,
    _lsr: $ => /[lL][sS][rR]/,
    _nop: $ => /[nN][oO][pP]/,
    _ora: $ => /[oO][rR][aA]/,
    _pha: $ => /[pP][hH][aA]/,
    _php: $ => /[pP][hH][pP]/,
    _phx: $ => /[pP][hH][xX]/,
    _phy: $ => /[pP][hH][yY]/,
    _pla: $ => /[pP][lL][aA]/,
    _plp: $ => /[pP][lL][pP]/,
    _plx: $ => /[pP][lL][xX]/,
    _ply: $ => /[pP][lL][yY]/,
    _rmb: $ => /[rR][mM][bB]/,
    _rol: $ => /[rR][oO][lL]/,
    _ror: $ => /[rR][oO][rR]/,
    _rti: $ => /[rR][tT][iI]/,
    _rts: $ => /[rR][tT][sS]/,
    _sbc: $ => /[sS][bB][cC]/,
    _sec: $ => /[sS][eE][cC]/,
    _sed: $ => /[sS][eE][dD]/,
    _sei: $ => /[sS][eE][iI]/,
    _smb: $ => /[sS][mM][bB]/,
    _sta: $ => /[sS][tT][aA]/,
    _stp: $ => /[sS][tT][pP]/,
    _stx: $ => /[sS][tT][xX]/,
    _sty: $ => /[sS][tT][yY]/,
    _stz: $ => /[sS][tT][zZ]/,
    _tax: $ => /[tT][aA][xX]/,
    _tay: $ => /[tT][aA][yY]/,
    _trb: $ => /[tT][rR][bB]/,
    _tsb: $ => /[tT][sS][bB]/,
    _tsx: $ => /[tT][sS][xX]/,
    _txa: $ => /[tT][xX][aA]/,
    _txs: $ => /[tT][xX][sS]/,
    _tya: $ => /[tT][yY][aA]/,
    _wai: $ => /[wW][aA][iI]/

  },
});
