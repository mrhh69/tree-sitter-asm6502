module.exports = grammar({
  name: 'asm6502',
  
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.operation
    ),

    operation: $ => choice(
      $.implied,
      $.stack,
      $.relative,
      $.immediate
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
      $._absolute_opcode,
      $._expr
    ),

    _expr: $ => choice(
      $.num_literal,
      seq('(', $._expr, ')'),
      $.binary_expr
    ),
    num_literal: $ => {
      const hex = /[0-9a-fA-F]/;
      const decimal = /[0-9]/;
      const hexDigits = seq(repeat1(hex));
      const decimalDigits = seq(repeat1(decimal));
      const binDigits = seq(repeat1(/[01]/));
      return token(seq(
        optional(/[-\+]/),
        optional(choice('$', '%')),
        choice(
          seq(
            choice(
              decimalDigits,
              seq('%', binDigits),
              seq('$', hexDigits)
            ),
          ),
        ),
      ))
    },

    binary_expr: $ => prec.left(seq(
      $._expr,
      choice('+', '-', '*', '/', '<<', '>>', '&', "|"),
      $._expr
    )),
    
    

    _implied_opcode: $ => choice(
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
    ),
    _stack_opcode: $ => choice(
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
    ),

    _relative_opcode: $ => choice(
      $._bcc,
      $._bcs,
      $._beq,
      $._bmi,
      $._bne,
      $._bpl,
      $._bra,
      $._bvc,
      $._bvs
    ),

    _immediate_opcode: $ => choice(
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
    ),

    _absolute_opcode: $ => choice(
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
    ),

    _nop: $ => /[nN][oO][pP]/,
    _clc: $ => /clc/,
    _cld: $ => /cld/,
    _cli: $ => /cli/,
    _clv: $ => /clv/,
    _dex: $ => /dex/,
    _dey: $ => /dey/,
    _inx: $ => /inx/,
    _iny: $ => /iny/,
    _sec: $ => /sec/,
    _sed: $ => /sed/,
    _sei: $ => /sei/,
    _stp: $ => /stp/,
    _tax: $ => /tax/,
    _tay: $ => /tay/,
    _tsx: $ => /tsx/,
    _txa: $ => /txa/,
    _txs: $ => /txs/,
    _tya: $ => /tya/,
    _wai: $ => /wai/,

    _brk: $ => /brk/,
    _pha: $ => /pha/,
    _php: $ => /php/,
    _phx: $ => /phx/,
    _phy: $ => /phy/,
    _pla: $ => /pla/,
    _plp: $ => /plp/,
    _plx: $ => /plx/,
    _ply: $ => /ply/,
    _rti: $ => /rti/,
    _rts: $ => /rts/,

    _bcc: $ => /bcc/,
    _bcs: $ => /bcs/,
    _beq: $ => /beq/,
    _bmi: $ => /bmi/,
    _bne: $ => /bne/,
    _bpl: $ => /bpl/,
    _bra: $ => /bra/,
    _bvc: $ => /bvc/,
    _bvs: $ => /bvs/,


    _adc: $ => /adc/,
    _and: $ => /and/,
    _bit: $ => /bit/,
    _cmp: $ => /cmp/,
    _cpx: $ => /cpx/,
    _cpy: $ => /cpy/,
    _eor: $ => /eor/,
    _lda: $ => /lda/,
    _ldx: $ => /ldx/,
    _ldy: $ => /ldy/,
    _ora: $ => /ora/,
    _sbc: $ => /sbc/,

    _asl: $ => /asl/,
    _lsr: $ => /lsr/
  }
});