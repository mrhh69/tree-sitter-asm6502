#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  sym_dec_const = 2,
  sym_bin_const = 3,
  sym_hex_const = 4,
  sym__nop = 5,
  sym__clc = 6,
  sym__cld = 7,
  sym__cli = 8,
  sym__clv = 9,
  sym__dex = 10,
  sym__dey = 11,
  sym__inx = 12,
  sym__iny = 13,
  sym__sec = 14,
  sym__sed = 15,
  sym__sei = 16,
  sym__stp = 17,
  sym__tax = 18,
  sym__tay = 19,
  sym__tsx = 20,
  sym__txa = 21,
  sym__txs = 22,
  sym__tya = 23,
  sym__wai = 24,
  sym__brk = 25,
  sym__pha = 26,
  sym__php = 27,
  sym__phx = 28,
  sym__phy = 29,
  sym__pla = 30,
  sym__plp = 31,
  sym__plx = 32,
  sym__ply = 33,
  sym__rti = 34,
  sym__rts = 35,
  sym__bcc = 36,
  sym__bcs = 37,
  sym__beq = 38,
  sym__bmi = 39,
  sym__bne = 40,
  sym__bpl = 41,
  sym__bra = 42,
  sym__bvc = 43,
  sym__bvs = 44,
  sym__adc = 45,
  sym__and = 46,
  sym__bit = 47,
  sym__cmp = 48,
  sym__cpx = 49,
  sym__cpy = 50,
  sym__eor = 51,
  sym__lda = 52,
  sym__ldx = 53,
  sym__ldy = 54,
  sym__ora = 55,
  sym__sbc = 56,
  sym_source_file = 57,
  sym__statement = 58,
  sym_operation = 59,
  sym_implied = 60,
  sym_stack = 61,
  sym_relative = 62,
  sym_immediate = 63,
  sym__expr = 64,
  sym__num_const = 65,
  sym__implied_opcode = 66,
  sym__stack_opcode = 67,
  sym__relative_opcode = 68,
  sym__immediate_opcode = 69,
  aux_sym_source_file_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [sym_dec_const] = "dec_const",
  [sym_bin_const] = "bin_const",
  [sym_hex_const] = "hex_const",
  [sym__nop] = "_nop",
  [sym__clc] = "_clc",
  [sym__cld] = "_cld",
  [sym__cli] = "_cli",
  [sym__clv] = "_clv",
  [sym__dex] = "_dex",
  [sym__dey] = "_dey",
  [sym__inx] = "_inx",
  [sym__iny] = "_iny",
  [sym__sec] = "_sec",
  [sym__sed] = "_sed",
  [sym__sei] = "_sei",
  [sym__stp] = "_stp",
  [sym__tax] = "_tax",
  [sym__tay] = "_tay",
  [sym__tsx] = "_tsx",
  [sym__txa] = "_txa",
  [sym__txs] = "_txs",
  [sym__tya] = "_tya",
  [sym__wai] = "_wai",
  [sym__brk] = "_brk",
  [sym__pha] = "_pha",
  [sym__php] = "_php",
  [sym__phx] = "_phx",
  [sym__phy] = "_phy",
  [sym__pla] = "_pla",
  [sym__plp] = "_plp",
  [sym__plx] = "_plx",
  [sym__ply] = "_ply",
  [sym__rti] = "_rti",
  [sym__rts] = "_rts",
  [sym__bcc] = "_bcc",
  [sym__bcs] = "_bcs",
  [sym__beq] = "_beq",
  [sym__bmi] = "_bmi",
  [sym__bne] = "_bne",
  [sym__bpl] = "_bpl",
  [sym__bra] = "_bra",
  [sym__bvc] = "_bvc",
  [sym__bvs] = "_bvs",
  [sym__adc] = "_adc",
  [sym__and] = "_and",
  [sym__bit] = "_bit",
  [sym__cmp] = "_cmp",
  [sym__cpx] = "_cpx",
  [sym__cpy] = "_cpy",
  [sym__eor] = "_eor",
  [sym__lda] = "_lda",
  [sym__ldx] = "_ldx",
  [sym__ldy] = "_ldy",
  [sym__ora] = "_ora",
  [sym__sbc] = "_sbc",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_operation] = "operation",
  [sym_implied] = "implied",
  [sym_stack] = "stack",
  [sym_relative] = "relative",
  [sym_immediate] = "immediate",
  [sym__expr] = "_expr",
  [sym__num_const] = "_num_const",
  [sym__implied_opcode] = "_implied_opcode",
  [sym__stack_opcode] = "_stack_opcode",
  [sym__relative_opcode] = "_relative_opcode",
  [sym__immediate_opcode] = "_immediate_opcode",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_dec_const] = sym_dec_const,
  [sym_bin_const] = sym_bin_const,
  [sym_hex_const] = sym_hex_const,
  [sym__nop] = sym__nop,
  [sym__clc] = sym__clc,
  [sym__cld] = sym__cld,
  [sym__cli] = sym__cli,
  [sym__clv] = sym__clv,
  [sym__dex] = sym__dex,
  [sym__dey] = sym__dey,
  [sym__inx] = sym__inx,
  [sym__iny] = sym__iny,
  [sym__sec] = sym__sec,
  [sym__sed] = sym__sed,
  [sym__sei] = sym__sei,
  [sym__stp] = sym__stp,
  [sym__tax] = sym__tax,
  [sym__tay] = sym__tay,
  [sym__tsx] = sym__tsx,
  [sym__txa] = sym__txa,
  [sym__txs] = sym__txs,
  [sym__tya] = sym__tya,
  [sym__wai] = sym__wai,
  [sym__brk] = sym__brk,
  [sym__pha] = sym__pha,
  [sym__php] = sym__php,
  [sym__phx] = sym__phx,
  [sym__phy] = sym__phy,
  [sym__pla] = sym__pla,
  [sym__plp] = sym__plp,
  [sym__plx] = sym__plx,
  [sym__ply] = sym__ply,
  [sym__rti] = sym__rti,
  [sym__rts] = sym__rts,
  [sym__bcc] = sym__bcc,
  [sym__bcs] = sym__bcs,
  [sym__beq] = sym__beq,
  [sym__bmi] = sym__bmi,
  [sym__bne] = sym__bne,
  [sym__bpl] = sym__bpl,
  [sym__bra] = sym__bra,
  [sym__bvc] = sym__bvc,
  [sym__bvs] = sym__bvs,
  [sym__adc] = sym__adc,
  [sym__and] = sym__and,
  [sym__bit] = sym__bit,
  [sym__cmp] = sym__cmp,
  [sym__cpx] = sym__cpx,
  [sym__cpy] = sym__cpy,
  [sym__eor] = sym__eor,
  [sym__lda] = sym__lda,
  [sym__ldx] = sym__ldx,
  [sym__ldy] = sym__ldy,
  [sym__ora] = sym__ora,
  [sym__sbc] = sym__sbc,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_operation] = sym_operation,
  [sym_implied] = sym_implied,
  [sym_stack] = sym_stack,
  [sym_relative] = sym_relative,
  [sym_immediate] = sym_immediate,
  [sym__expr] = sym__expr,
  [sym__num_const] = sym__num_const,
  [sym__implied_opcode] = sym__implied_opcode,
  [sym__stack_opcode] = sym__stack_opcode,
  [sym__relative_opcode] = sym__relative_opcode,
  [sym__immediate_opcode] = sym__immediate_opcode,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_dec_const] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_const] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_const] = {
    .visible = true,
    .named = true,
  },
  [sym__nop] = {
    .visible = false,
    .named = true,
  },
  [sym__clc] = {
    .visible = false,
    .named = true,
  },
  [sym__cld] = {
    .visible = false,
    .named = true,
  },
  [sym__cli] = {
    .visible = false,
    .named = true,
  },
  [sym__clv] = {
    .visible = false,
    .named = true,
  },
  [sym__dex] = {
    .visible = false,
    .named = true,
  },
  [sym__dey] = {
    .visible = false,
    .named = true,
  },
  [sym__inx] = {
    .visible = false,
    .named = true,
  },
  [sym__iny] = {
    .visible = false,
    .named = true,
  },
  [sym__sec] = {
    .visible = false,
    .named = true,
  },
  [sym__sed] = {
    .visible = false,
    .named = true,
  },
  [sym__sei] = {
    .visible = false,
    .named = true,
  },
  [sym__stp] = {
    .visible = false,
    .named = true,
  },
  [sym__tax] = {
    .visible = false,
    .named = true,
  },
  [sym__tay] = {
    .visible = false,
    .named = true,
  },
  [sym__tsx] = {
    .visible = false,
    .named = true,
  },
  [sym__txa] = {
    .visible = false,
    .named = true,
  },
  [sym__txs] = {
    .visible = false,
    .named = true,
  },
  [sym__tya] = {
    .visible = false,
    .named = true,
  },
  [sym__wai] = {
    .visible = false,
    .named = true,
  },
  [sym__brk] = {
    .visible = false,
    .named = true,
  },
  [sym__pha] = {
    .visible = false,
    .named = true,
  },
  [sym__php] = {
    .visible = false,
    .named = true,
  },
  [sym__phx] = {
    .visible = false,
    .named = true,
  },
  [sym__phy] = {
    .visible = false,
    .named = true,
  },
  [sym__pla] = {
    .visible = false,
    .named = true,
  },
  [sym__plp] = {
    .visible = false,
    .named = true,
  },
  [sym__plx] = {
    .visible = false,
    .named = true,
  },
  [sym__ply] = {
    .visible = false,
    .named = true,
  },
  [sym__rti] = {
    .visible = false,
    .named = true,
  },
  [sym__rts] = {
    .visible = false,
    .named = true,
  },
  [sym__bcc] = {
    .visible = false,
    .named = true,
  },
  [sym__bcs] = {
    .visible = false,
    .named = true,
  },
  [sym__beq] = {
    .visible = false,
    .named = true,
  },
  [sym__bmi] = {
    .visible = false,
    .named = true,
  },
  [sym__bne] = {
    .visible = false,
    .named = true,
  },
  [sym__bpl] = {
    .visible = false,
    .named = true,
  },
  [sym__bra] = {
    .visible = false,
    .named = true,
  },
  [sym__bvc] = {
    .visible = false,
    .named = true,
  },
  [sym__bvs] = {
    .visible = false,
    .named = true,
  },
  [sym__adc] = {
    .visible = false,
    .named = true,
  },
  [sym__and] = {
    .visible = false,
    .named = true,
  },
  [sym__bit] = {
    .visible = false,
    .named = true,
  },
  [sym__cmp] = {
    .visible = false,
    .named = true,
  },
  [sym__cpx] = {
    .visible = false,
    .named = true,
  },
  [sym__cpy] = {
    .visible = false,
    .named = true,
  },
  [sym__eor] = {
    .visible = false,
    .named = true,
  },
  [sym__lda] = {
    .visible = false,
    .named = true,
  },
  [sym__ldx] = {
    .visible = false,
    .named = true,
  },
  [sym__ldy] = {
    .visible = false,
    .named = true,
  },
  [sym__ora] = {
    .visible = false,
    .named = true,
  },
  [sym__sbc] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_implied] = {
    .visible = true,
    .named = true,
  },
  [sym_stack] = {
    .visible = true,
    .named = true,
  },
  [sym_relative] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__num_const] = {
    .visible = false,
    .named = true,
  },
  [sym__implied_opcode] = {
    .visible = false,
    .named = true,
  },
  [sym__stack_opcode] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_opcode] = {
    .visible = false,
    .named = true,
  },
  [sym__immediate_opcode] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(100);
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(6);
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1);
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'q') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_dec_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_bin_const);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__nop);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__clc);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__cld);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__cli);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__clv);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__dex);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__dey);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__inx);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__iny);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__sec);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__sed);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__sei);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__stp);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__tax);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__tay);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__tsx);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__txa);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__txs);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__tya);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__wai);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__brk);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__pha);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__php);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__phx);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__phy);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__pla);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__plp);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__plx);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__ply);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__rti);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__rts);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__bcc);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__bcs);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__beq);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__bmi);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__bne);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__bpl);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__bra);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__bvc);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__bvs);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__adc);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__and);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bit);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__cmp);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__cpx);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__cpy);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__eor);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__lda);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__ldx);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__ldy);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__ora);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__sbc);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_dec_const] = ACTIONS(1),
    [sym_bin_const] = ACTIONS(1),
    [sym_hex_const] = ACTIONS(1),
    [sym__nop] = ACTIONS(1),
    [sym__clc] = ACTIONS(1),
    [sym__cld] = ACTIONS(1),
    [sym__cli] = ACTIONS(1),
    [sym__clv] = ACTIONS(1),
    [sym__dex] = ACTIONS(1),
    [sym__dey] = ACTIONS(1),
    [sym__inx] = ACTIONS(1),
    [sym__iny] = ACTIONS(1),
    [sym__sec] = ACTIONS(1),
    [sym__sed] = ACTIONS(1),
    [sym__sei] = ACTIONS(1),
    [sym__stp] = ACTIONS(1),
    [sym__tax] = ACTIONS(1),
    [sym__tay] = ACTIONS(1),
    [sym__tsx] = ACTIONS(1),
    [sym__txa] = ACTIONS(1),
    [sym__txs] = ACTIONS(1),
    [sym__tya] = ACTIONS(1),
    [sym__wai] = ACTIONS(1),
    [sym__brk] = ACTIONS(1),
    [sym__pha] = ACTIONS(1),
    [sym__php] = ACTIONS(1),
    [sym__phx] = ACTIONS(1),
    [sym__phy] = ACTIONS(1),
    [sym__pla] = ACTIONS(1),
    [sym__plp] = ACTIONS(1),
    [sym__plx] = ACTIONS(1),
    [sym__ply] = ACTIONS(1),
    [sym__rti] = ACTIONS(1),
    [sym__rts] = ACTIONS(1),
    [sym__bcc] = ACTIONS(1),
    [sym__bcs] = ACTIONS(1),
    [sym__beq] = ACTIONS(1),
    [sym__bmi] = ACTIONS(1),
    [sym__bne] = ACTIONS(1),
    [sym__bpl] = ACTIONS(1),
    [sym__bra] = ACTIONS(1),
    [sym__bvc] = ACTIONS(1),
    [sym__bvs] = ACTIONS(1),
    [sym__adc] = ACTIONS(1),
    [sym__and] = ACTIONS(1),
    [sym__bit] = ACTIONS(1),
    [sym__cmp] = ACTIONS(1),
    [sym__cpx] = ACTIONS(1),
    [sym__cpy] = ACTIONS(1),
    [sym__eor] = ACTIONS(1),
    [sym__lda] = ACTIONS(1),
    [sym__ldx] = ACTIONS(1),
    [sym__ldy] = ACTIONS(1),
    [sym__ora] = ACTIONS(1),
    [sym__sbc] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__statement] = STATE(2),
    [sym_operation] = STATE(2),
    [sym_implied] = STATE(4),
    [sym_stack] = STATE(4),
    [sym_relative] = STATE(4),
    [sym_immediate] = STATE(4),
    [sym__implied_opcode] = STATE(5),
    [sym__stack_opcode] = STATE(6),
    [sym__relative_opcode] = STATE(7),
    [sym__immediate_opcode] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__nop] = ACTIONS(5),
    [sym__clc] = ACTIONS(5),
    [sym__cld] = ACTIONS(5),
    [sym__cli] = ACTIONS(5),
    [sym__clv] = ACTIONS(5),
    [sym__dex] = ACTIONS(5),
    [sym__dey] = ACTIONS(5),
    [sym__inx] = ACTIONS(5),
    [sym__iny] = ACTIONS(5),
    [sym__sec] = ACTIONS(5),
    [sym__sed] = ACTIONS(5),
    [sym__sei] = ACTIONS(5),
    [sym__stp] = ACTIONS(5),
    [sym__tax] = ACTIONS(5),
    [sym__tay] = ACTIONS(5),
    [sym__tsx] = ACTIONS(5),
    [sym__txa] = ACTIONS(5),
    [sym__txs] = ACTIONS(5),
    [sym__tya] = ACTIONS(5),
    [sym__wai] = ACTIONS(5),
    [sym__brk] = ACTIONS(7),
    [sym__pha] = ACTIONS(7),
    [sym__php] = ACTIONS(7),
    [sym__phx] = ACTIONS(7),
    [sym__phy] = ACTIONS(7),
    [sym__pla] = ACTIONS(7),
    [sym__plp] = ACTIONS(7),
    [sym__plx] = ACTIONS(7),
    [sym__ply] = ACTIONS(7),
    [sym__rti] = ACTIONS(7),
    [sym__rts] = ACTIONS(7),
    [sym__bcc] = ACTIONS(9),
    [sym__bcs] = ACTIONS(9),
    [sym__beq] = ACTIONS(9),
    [sym__bmi] = ACTIONS(9),
    [sym__bne] = ACTIONS(9),
    [sym__bpl] = ACTIONS(9),
    [sym__bra] = ACTIONS(9),
    [sym__bvc] = ACTIONS(9),
    [sym__bvs] = ACTIONS(9),
    [sym__adc] = ACTIONS(11),
    [sym__and] = ACTIONS(11),
    [sym__bit] = ACTIONS(11),
    [sym__cmp] = ACTIONS(11),
    [sym__cpx] = ACTIONS(11),
    [sym__cpy] = ACTIONS(11),
    [sym__eor] = ACTIONS(11),
    [sym__lda] = ACTIONS(11),
    [sym__ldx] = ACTIONS(11),
    [sym__ldy] = ACTIONS(11),
    [sym__ora] = ACTIONS(11),
    [sym__sbc] = ACTIONS(11),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_operation] = STATE(3),
    [sym_implied] = STATE(4),
    [sym_stack] = STATE(4),
    [sym_relative] = STATE(4),
    [sym_immediate] = STATE(4),
    [sym__implied_opcode] = STATE(5),
    [sym__stack_opcode] = STATE(6),
    [sym__relative_opcode] = STATE(7),
    [sym__immediate_opcode] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__nop] = ACTIONS(5),
    [sym__clc] = ACTIONS(5),
    [sym__cld] = ACTIONS(5),
    [sym__cli] = ACTIONS(5),
    [sym__clv] = ACTIONS(5),
    [sym__dex] = ACTIONS(5),
    [sym__dey] = ACTIONS(5),
    [sym__inx] = ACTIONS(5),
    [sym__iny] = ACTIONS(5),
    [sym__sec] = ACTIONS(5),
    [sym__sed] = ACTIONS(5),
    [sym__sei] = ACTIONS(5),
    [sym__stp] = ACTIONS(5),
    [sym__tax] = ACTIONS(5),
    [sym__tay] = ACTIONS(5),
    [sym__tsx] = ACTIONS(5),
    [sym__txa] = ACTIONS(5),
    [sym__txs] = ACTIONS(5),
    [sym__tya] = ACTIONS(5),
    [sym__wai] = ACTIONS(5),
    [sym__brk] = ACTIONS(7),
    [sym__pha] = ACTIONS(7),
    [sym__php] = ACTIONS(7),
    [sym__phx] = ACTIONS(7),
    [sym__phy] = ACTIONS(7),
    [sym__pla] = ACTIONS(7),
    [sym__plp] = ACTIONS(7),
    [sym__plx] = ACTIONS(7),
    [sym__ply] = ACTIONS(7),
    [sym__rti] = ACTIONS(7),
    [sym__rts] = ACTIONS(7),
    [sym__bcc] = ACTIONS(9),
    [sym__bcs] = ACTIONS(9),
    [sym__beq] = ACTIONS(9),
    [sym__bmi] = ACTIONS(9),
    [sym__bne] = ACTIONS(9),
    [sym__bpl] = ACTIONS(9),
    [sym__bra] = ACTIONS(9),
    [sym__bvc] = ACTIONS(9),
    [sym__bvs] = ACTIONS(9),
    [sym__adc] = ACTIONS(11),
    [sym__and] = ACTIONS(11),
    [sym__bit] = ACTIONS(11),
    [sym__cmp] = ACTIONS(11),
    [sym__cpx] = ACTIONS(11),
    [sym__cpy] = ACTIONS(11),
    [sym__eor] = ACTIONS(11),
    [sym__lda] = ACTIONS(11),
    [sym__ldx] = ACTIONS(11),
    [sym__ldy] = ACTIONS(11),
    [sym__ora] = ACTIONS(11),
    [sym__sbc] = ACTIONS(11),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_operation] = STATE(3),
    [sym_implied] = STATE(4),
    [sym_stack] = STATE(4),
    [sym_relative] = STATE(4),
    [sym_immediate] = STATE(4),
    [sym__implied_opcode] = STATE(5),
    [sym__stack_opcode] = STATE(6),
    [sym__relative_opcode] = STATE(7),
    [sym__immediate_opcode] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__nop] = ACTIONS(17),
    [sym__clc] = ACTIONS(17),
    [sym__cld] = ACTIONS(17),
    [sym__cli] = ACTIONS(17),
    [sym__clv] = ACTIONS(17),
    [sym__dex] = ACTIONS(17),
    [sym__dey] = ACTIONS(17),
    [sym__inx] = ACTIONS(17),
    [sym__iny] = ACTIONS(17),
    [sym__sec] = ACTIONS(17),
    [sym__sed] = ACTIONS(17),
    [sym__sei] = ACTIONS(17),
    [sym__stp] = ACTIONS(17),
    [sym__tax] = ACTIONS(17),
    [sym__tay] = ACTIONS(17),
    [sym__tsx] = ACTIONS(17),
    [sym__txa] = ACTIONS(17),
    [sym__txs] = ACTIONS(17),
    [sym__tya] = ACTIONS(17),
    [sym__wai] = ACTIONS(17),
    [sym__brk] = ACTIONS(20),
    [sym__pha] = ACTIONS(20),
    [sym__php] = ACTIONS(20),
    [sym__phx] = ACTIONS(20),
    [sym__phy] = ACTIONS(20),
    [sym__pla] = ACTIONS(20),
    [sym__plp] = ACTIONS(20),
    [sym__plx] = ACTIONS(20),
    [sym__ply] = ACTIONS(20),
    [sym__rti] = ACTIONS(20),
    [sym__rts] = ACTIONS(20),
    [sym__bcc] = ACTIONS(23),
    [sym__bcs] = ACTIONS(23),
    [sym__beq] = ACTIONS(23),
    [sym__bmi] = ACTIONS(23),
    [sym__bne] = ACTIONS(23),
    [sym__bpl] = ACTIONS(23),
    [sym__bra] = ACTIONS(23),
    [sym__bvc] = ACTIONS(23),
    [sym__bvs] = ACTIONS(23),
    [sym__adc] = ACTIONS(26),
    [sym__and] = ACTIONS(26),
    [sym__bit] = ACTIONS(26),
    [sym__cmp] = ACTIONS(26),
    [sym__cpx] = ACTIONS(26),
    [sym__cpy] = ACTIONS(26),
    [sym__eor] = ACTIONS(26),
    [sym__lda] = ACTIONS(26),
    [sym__ldx] = ACTIONS(26),
    [sym__ldy] = ACTIONS(26),
    [sym__ora] = ACTIONS(26),
    [sym__sbc] = ACTIONS(26),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__nop] = ACTIONS(29),
    [sym__clc] = ACTIONS(29),
    [sym__cld] = ACTIONS(29),
    [sym__cli] = ACTIONS(29),
    [sym__clv] = ACTIONS(29),
    [sym__dex] = ACTIONS(29),
    [sym__dey] = ACTIONS(29),
    [sym__inx] = ACTIONS(29),
    [sym__iny] = ACTIONS(29),
    [sym__sec] = ACTIONS(29),
    [sym__sed] = ACTIONS(29),
    [sym__sei] = ACTIONS(29),
    [sym__stp] = ACTIONS(29),
    [sym__tax] = ACTIONS(29),
    [sym__tay] = ACTIONS(29),
    [sym__tsx] = ACTIONS(29),
    [sym__txa] = ACTIONS(29),
    [sym__txs] = ACTIONS(29),
    [sym__tya] = ACTIONS(29),
    [sym__wai] = ACTIONS(29),
    [sym__brk] = ACTIONS(29),
    [sym__pha] = ACTIONS(29),
    [sym__php] = ACTIONS(29),
    [sym__phx] = ACTIONS(29),
    [sym__phy] = ACTIONS(29),
    [sym__pla] = ACTIONS(29),
    [sym__plp] = ACTIONS(29),
    [sym__plx] = ACTIONS(29),
    [sym__ply] = ACTIONS(29),
    [sym__rti] = ACTIONS(29),
    [sym__rts] = ACTIONS(29),
    [sym__bcc] = ACTIONS(29),
    [sym__bcs] = ACTIONS(29),
    [sym__beq] = ACTIONS(29),
    [sym__bmi] = ACTIONS(29),
    [sym__bne] = ACTIONS(29),
    [sym__bpl] = ACTIONS(29),
    [sym__bra] = ACTIONS(29),
    [sym__bvc] = ACTIONS(29),
    [sym__bvs] = ACTIONS(29),
    [sym__adc] = ACTIONS(29),
    [sym__and] = ACTIONS(29),
    [sym__bit] = ACTIONS(29),
    [sym__cmp] = ACTIONS(29),
    [sym__cpx] = ACTIONS(29),
    [sym__cpy] = ACTIONS(29),
    [sym__eor] = ACTIONS(29),
    [sym__lda] = ACTIONS(29),
    [sym__ldx] = ACTIONS(29),
    [sym__ldy] = ACTIONS(29),
    [sym__ora] = ACTIONS(29),
    [sym__sbc] = ACTIONS(29),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__nop] = ACTIONS(31),
    [sym__clc] = ACTIONS(31),
    [sym__cld] = ACTIONS(31),
    [sym__cli] = ACTIONS(31),
    [sym__clv] = ACTIONS(31),
    [sym__dex] = ACTIONS(31),
    [sym__dey] = ACTIONS(31),
    [sym__inx] = ACTIONS(31),
    [sym__iny] = ACTIONS(31),
    [sym__sec] = ACTIONS(31),
    [sym__sed] = ACTIONS(31),
    [sym__sei] = ACTIONS(31),
    [sym__stp] = ACTIONS(31),
    [sym__tax] = ACTIONS(31),
    [sym__tay] = ACTIONS(31),
    [sym__tsx] = ACTIONS(31),
    [sym__txa] = ACTIONS(31),
    [sym__txs] = ACTIONS(31),
    [sym__tya] = ACTIONS(31),
    [sym__wai] = ACTIONS(31),
    [sym__brk] = ACTIONS(31),
    [sym__pha] = ACTIONS(31),
    [sym__php] = ACTIONS(31),
    [sym__phx] = ACTIONS(31),
    [sym__phy] = ACTIONS(31),
    [sym__pla] = ACTIONS(31),
    [sym__plp] = ACTIONS(31),
    [sym__plx] = ACTIONS(31),
    [sym__ply] = ACTIONS(31),
    [sym__rti] = ACTIONS(31),
    [sym__rts] = ACTIONS(31),
    [sym__bcc] = ACTIONS(31),
    [sym__bcs] = ACTIONS(31),
    [sym__beq] = ACTIONS(31),
    [sym__bmi] = ACTIONS(31),
    [sym__bne] = ACTIONS(31),
    [sym__bpl] = ACTIONS(31),
    [sym__bra] = ACTIONS(31),
    [sym__bvc] = ACTIONS(31),
    [sym__bvs] = ACTIONS(31),
    [sym__adc] = ACTIONS(31),
    [sym__and] = ACTIONS(31),
    [sym__bit] = ACTIONS(31),
    [sym__cmp] = ACTIONS(31),
    [sym__cpx] = ACTIONS(31),
    [sym__cpy] = ACTIONS(31),
    [sym__eor] = ACTIONS(31),
    [sym__lda] = ACTIONS(31),
    [sym__ldx] = ACTIONS(31),
    [sym__ldy] = ACTIONS(31),
    [sym__ora] = ACTIONS(31),
    [sym__sbc] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__nop] = ACTIONS(33),
    [sym__clc] = ACTIONS(33),
    [sym__cld] = ACTIONS(33),
    [sym__cli] = ACTIONS(33),
    [sym__clv] = ACTIONS(33),
    [sym__dex] = ACTIONS(33),
    [sym__dey] = ACTIONS(33),
    [sym__inx] = ACTIONS(33),
    [sym__iny] = ACTIONS(33),
    [sym__sec] = ACTIONS(33),
    [sym__sed] = ACTIONS(33),
    [sym__sei] = ACTIONS(33),
    [sym__stp] = ACTIONS(33),
    [sym__tax] = ACTIONS(33),
    [sym__tay] = ACTIONS(33),
    [sym__tsx] = ACTIONS(33),
    [sym__txa] = ACTIONS(33),
    [sym__txs] = ACTIONS(33),
    [sym__tya] = ACTIONS(33),
    [sym__wai] = ACTIONS(33),
    [sym__brk] = ACTIONS(33),
    [sym__pha] = ACTIONS(33),
    [sym__php] = ACTIONS(33),
    [sym__phx] = ACTIONS(33),
    [sym__phy] = ACTIONS(33),
    [sym__pla] = ACTIONS(33),
    [sym__plp] = ACTIONS(33),
    [sym__plx] = ACTIONS(33),
    [sym__ply] = ACTIONS(33),
    [sym__rti] = ACTIONS(33),
    [sym__rts] = ACTIONS(33),
    [sym__bcc] = ACTIONS(33),
    [sym__bcs] = ACTIONS(33),
    [sym__beq] = ACTIONS(33),
    [sym__bmi] = ACTIONS(33),
    [sym__bne] = ACTIONS(33),
    [sym__bpl] = ACTIONS(33),
    [sym__bra] = ACTIONS(33),
    [sym__bvc] = ACTIONS(33),
    [sym__bvs] = ACTIONS(33),
    [sym__adc] = ACTIONS(33),
    [sym__and] = ACTIONS(33),
    [sym__bit] = ACTIONS(33),
    [sym__cmp] = ACTIONS(33),
    [sym__cpx] = ACTIONS(33),
    [sym__cpy] = ACTIONS(33),
    [sym__eor] = ACTIONS(33),
    [sym__lda] = ACTIONS(33),
    [sym__ldx] = ACTIONS(33),
    [sym__ldy] = ACTIONS(33),
    [sym__ora] = ACTIONS(33),
    [sym__sbc] = ACTIONS(33),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__nop] = ACTIONS(35),
    [sym__clc] = ACTIONS(35),
    [sym__cld] = ACTIONS(35),
    [sym__cli] = ACTIONS(35),
    [sym__clv] = ACTIONS(35),
    [sym__dex] = ACTIONS(35),
    [sym__dey] = ACTIONS(35),
    [sym__inx] = ACTIONS(35),
    [sym__iny] = ACTIONS(35),
    [sym__sec] = ACTIONS(35),
    [sym__sed] = ACTIONS(35),
    [sym__sei] = ACTIONS(35),
    [sym__stp] = ACTIONS(35),
    [sym__tax] = ACTIONS(35),
    [sym__tay] = ACTIONS(35),
    [sym__tsx] = ACTIONS(35),
    [sym__txa] = ACTIONS(35),
    [sym__txs] = ACTIONS(35),
    [sym__tya] = ACTIONS(35),
    [sym__wai] = ACTIONS(35),
    [sym__brk] = ACTIONS(35),
    [sym__pha] = ACTIONS(35),
    [sym__php] = ACTIONS(35),
    [sym__phx] = ACTIONS(35),
    [sym__phy] = ACTIONS(35),
    [sym__pla] = ACTIONS(35),
    [sym__plp] = ACTIONS(35),
    [sym__plx] = ACTIONS(35),
    [sym__ply] = ACTIONS(35),
    [sym__rti] = ACTIONS(35),
    [sym__rts] = ACTIONS(35),
    [sym__bcc] = ACTIONS(35),
    [sym__bcs] = ACTIONS(35),
    [sym__beq] = ACTIONS(35),
    [sym__bmi] = ACTIONS(35),
    [sym__bne] = ACTIONS(35),
    [sym__bpl] = ACTIONS(35),
    [sym__bra] = ACTIONS(35),
    [sym__bvc] = ACTIONS(35),
    [sym__bvs] = ACTIONS(35),
    [sym__adc] = ACTIONS(35),
    [sym__and] = ACTIONS(35),
    [sym__bit] = ACTIONS(35),
    [sym__cmp] = ACTIONS(35),
    [sym__cpx] = ACTIONS(35),
    [sym__cpy] = ACTIONS(35),
    [sym__eor] = ACTIONS(35),
    [sym__lda] = ACTIONS(35),
    [sym__ldx] = ACTIONS(35),
    [sym__ldy] = ACTIONS(35),
    [sym__ora] = ACTIONS(35),
    [sym__sbc] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__nop] = ACTIONS(37),
    [sym__clc] = ACTIONS(37),
    [sym__cld] = ACTIONS(37),
    [sym__cli] = ACTIONS(37),
    [sym__clv] = ACTIONS(37),
    [sym__dex] = ACTIONS(37),
    [sym__dey] = ACTIONS(37),
    [sym__inx] = ACTIONS(37),
    [sym__iny] = ACTIONS(37),
    [sym__sec] = ACTIONS(37),
    [sym__sed] = ACTIONS(37),
    [sym__sei] = ACTIONS(37),
    [sym__stp] = ACTIONS(37),
    [sym__tax] = ACTIONS(37),
    [sym__tay] = ACTIONS(37),
    [sym__tsx] = ACTIONS(37),
    [sym__txa] = ACTIONS(37),
    [sym__txs] = ACTIONS(37),
    [sym__tya] = ACTIONS(37),
    [sym__wai] = ACTIONS(37),
    [sym__brk] = ACTIONS(37),
    [sym__pha] = ACTIONS(37),
    [sym__php] = ACTIONS(37),
    [sym__phx] = ACTIONS(37),
    [sym__phy] = ACTIONS(37),
    [sym__pla] = ACTIONS(37),
    [sym__plp] = ACTIONS(37),
    [sym__plx] = ACTIONS(37),
    [sym__ply] = ACTIONS(37),
    [sym__rti] = ACTIONS(37),
    [sym__rts] = ACTIONS(37),
    [sym__bcc] = ACTIONS(37),
    [sym__bcs] = ACTIONS(37),
    [sym__beq] = ACTIONS(37),
    [sym__bmi] = ACTIONS(37),
    [sym__bne] = ACTIONS(37),
    [sym__bpl] = ACTIONS(37),
    [sym__bra] = ACTIONS(37),
    [sym__bvc] = ACTIONS(37),
    [sym__bvs] = ACTIONS(37),
    [sym__adc] = ACTIONS(37),
    [sym__and] = ACTIONS(37),
    [sym__bit] = ACTIONS(37),
    [sym__cmp] = ACTIONS(37),
    [sym__cpx] = ACTIONS(37),
    [sym__cpy] = ACTIONS(37),
    [sym__eor] = ACTIONS(37),
    [sym__lda] = ACTIONS(37),
    [sym__ldx] = ACTIONS(37),
    [sym__ldy] = ACTIONS(37),
    [sym__ora] = ACTIONS(37),
    [sym__sbc] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(8), 2,
      sym__expr,
      sym__num_const,
    ACTIONS(39), 3,
      sym_dec_const,
      sym_bin_const,
      sym_hex_const,
  [10] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [14] = 1,
    ACTIONS(43), 1,
      anon_sym_POUND,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 10,
  [SMALL_STATE(11)] = 14,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm6502(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
