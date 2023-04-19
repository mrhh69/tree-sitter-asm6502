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

    _expr: $ => choice(
      $._num_const
    ),
    _num_const: $ => choice(
      $.dec_const,
      $.bin_const,
      $.hex_const
    ),
    dec_const: $ => token(repeat1(/[0-9]/)),
    bin_const: $ => token(seq('%', repeat1(/[01]/))),
    hex_const: $ => token(seq('$', repeat1(/[0-9a-fA-F]/))),
    
    

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
      $._wai
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
    _sbc: $ => /sbc/
  }
});