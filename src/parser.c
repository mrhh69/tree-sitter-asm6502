#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym__ws_sep = 2,
  aux_sym_file_directive_token1 = 3,
  aux_sym_file_directive_token2 = 4,
  aux_sym_section_directive_token1 = 5,
  aux_sym__inc_name_token1 = 6,
  aux_sym__ext_name_token1 = 7,
  aux_sym__sec_name_token1 = 8,
  aux_sym__word_name_token1 = 9,
  aux_sym__byte_name_token1 = 10,
  anon_sym_EQ = 11,
  anon_sym_COLON = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  sym_num_literal = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_LT_LT = 20,
  anon_sym_GT_GT = 21,
  anon_sym_AMP = 22,
  anon_sym_PIPE = 23,
  aux_sym_unary_expr_token1 = 24,
  anon_sym_POUND = 25,
  anon_sym_LPAREN2 = 26,
  anon_sym_COMMA = 27,
  anon_sym_x = 28,
  anon_sym_y = 29,
  aux_sym__implied_opcode_token1 = 30,
  aux_sym__implied_opcode_token2 = 31,
  aux_sym__implied_opcode_token3 = 32,
  aux_sym__implied_opcode_token4 = 33,
  aux_sym__implied_opcode_token5 = 34,
  aux_sym__implied_opcode_token6 = 35,
  aux_sym__implied_opcode_token7 = 36,
  aux_sym__implied_opcode_token8 = 37,
  aux_sym__implied_opcode_token9 = 38,
  aux_sym__implied_opcode_token10 = 39,
  aux_sym__implied_opcode_token11 = 40,
  aux_sym__implied_opcode_token12 = 41,
  aux_sym__implied_opcode_token13 = 42,
  aux_sym__implied_opcode_token14 = 43,
  aux_sym__implied_opcode_token15 = 44,
  aux_sym__implied_opcode_token16 = 45,
  aux_sym__implied_opcode_token17 = 46,
  aux_sym__implied_opcode_token18 = 47,
  aux_sym__implied_opcode_token19 = 48,
  aux_sym__implied_opcode_token20 = 49,
  aux_sym__implied_opcode_token21 = 50,
  aux_sym__implied_opcode_token22 = 51,
  aux_sym__implied_opcode_token23 = 52,
  aux_sym__implied_opcode_token24 = 53,
  aux_sym__implied_opcode_token25 = 54,
  aux_sym__implied_opcode_token26 = 55,
  aux_sym__implied_opcode_token27 = 56,
  aux_sym__implied_opcode_token28 = 57,
  aux_sym__implied_opcode_token29 = 58,
  aux_sym__implied_opcode_token30 = 59,
  aux_sym__implied_opcode_token31 = 60,
  aux_sym__implied_opcode_token32 = 61,
  aux_sym__implied_opcode_token33 = 62,
  aux_sym__implied_opcode_token34 = 63,
  aux_sym__implied_opcode_token35 = 64,
  aux_sym__implied_opcode_token36 = 65,
  aux_sym__implied_opcode_token37 = 66,
  aux_sym__relative_opcode_token1 = 67,
  aux_sym__relative_opcode_token2 = 68,
  aux_sym__relative_opcode_token3 = 69,
  aux_sym__relative_opcode_token4 = 70,
  aux_sym__relative_opcode_token5 = 71,
  aux_sym__relative_opcode_token6 = 72,
  aux_sym__relative_opcode_token7 = 73,
  aux_sym__relative_opcode_token8 = 74,
  aux_sym__relative_opcode_token9 = 75,
  aux_sym__immediate_opcode_token1 = 76,
  aux_sym__immediate_opcode_token2 = 77,
  aux_sym__immediate_opcode_token3 = 78,
  aux_sym__immediate_opcode_token4 = 79,
  aux_sym__immediate_opcode_token5 = 80,
  aux_sym__immediate_opcode_token6 = 81,
  aux_sym__immediate_opcode_token7 = 82,
  aux_sym__immediate_opcode_token8 = 83,
  aux_sym__immediate_opcode_token9 = 84,
  aux_sym__immediate_opcode_token10 = 85,
  aux_sym__immediate_opcode_token11 = 86,
  aux_sym__immediate_opcode_token12 = 87,
  aux_sym__absolute_opcode_token1 = 88,
  aux_sym__absolute_opcode_token2 = 89,
  aux_sym__absolute_opcode_token3 = 90,
  aux_sym__absolute_opcode_token4 = 91,
  aux_sym__absolute_opcode_token5 = 92,
  aux_sym__absolute_opcode_token6 = 93,
  aux_sym__absolute_opcode_token7 = 94,
  aux_sym__absolute_opcode_token8 = 95,
  sym_local_label = 96,
  sym_global_label = 97,
  sym_source_file = 98,
  sym__statement = 99,
  sym__directive = 100,
  sym_file_directive = 101,
  sym_label_directive = 102,
  sym_section_directive = 103,
  sym_imm_directive = 104,
  sym__inc_name = 105,
  sym__ext_name = 106,
  sym__sec_name = 107,
  sym__word_name = 108,
  sym__byte_name = 109,
  sym_assignment = 110,
  sym_label = 111,
  sym__expr = 112,
  sym__identifier = 113,
  sym_binary_expr = 114,
  sym_unary_expr = 115,
  sym__operation = 116,
  sym_implied = 117,
  sym_relative = 118,
  sym_immediate = 119,
  sym_absolute = 120,
  sym_indirect = 121,
  sym__reg_x = 122,
  sym__reg_y = 123,
  sym__implied_opcode = 124,
  sym__relative_opcode = 125,
  sym__immediate_opcode = 126,
  sym__absolute_opcode = 127,
  sym__indirect_opcode = 128,
  aux_sym_source_file_repeat1 = 129,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__ws_sep] = "_ws_sep",
  [aux_sym_file_directive_token1] = "file_name",
  [aux_sym_file_directive_token2] = "file_name",
  [aux_sym_section_directive_token1] = "section_name",
  [aux_sym__inc_name_token1] = "directive",
  [aux_sym__ext_name_token1] = "directive",
  [aux_sym__sec_name_token1] = "directive",
  [aux_sym__word_name_token1] = "directive",
  [aux_sym__byte_name_token1] = "directive",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_num_literal] = "num_literal",
  [anon_sym_PLUS] = "operator",
  [anon_sym_DASH] = "operator",
  [anon_sym_STAR] = "operator",
  [anon_sym_SLASH] = "operator",
  [anon_sym_LT_LT] = "operator",
  [anon_sym_GT_GT] = "operator",
  [anon_sym_AMP] = "operator",
  [anon_sym_PIPE] = "operator",
  [aux_sym_unary_expr_token1] = "operator",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_x] = "register",
  [anon_sym_y] = "register",
  [aux_sym__implied_opcode_token1] = "_implied_opcode_token1",
  [aux_sym__implied_opcode_token2] = "_implied_opcode_token2",
  [aux_sym__implied_opcode_token3] = "_implied_opcode_token3",
  [aux_sym__implied_opcode_token4] = "_implied_opcode_token4",
  [aux_sym__implied_opcode_token5] = "_implied_opcode_token5",
  [aux_sym__implied_opcode_token6] = "_implied_opcode_token6",
  [aux_sym__implied_opcode_token7] = "_implied_opcode_token7",
  [aux_sym__implied_opcode_token8] = "_implied_opcode_token8",
  [aux_sym__implied_opcode_token9] = "_implied_opcode_token9",
  [aux_sym__implied_opcode_token10] = "_implied_opcode_token10",
  [aux_sym__implied_opcode_token11] = "_implied_opcode_token11",
  [aux_sym__implied_opcode_token12] = "_implied_opcode_token12",
  [aux_sym__implied_opcode_token13] = "_implied_opcode_token13",
  [aux_sym__implied_opcode_token14] = "_implied_opcode_token14",
  [aux_sym__implied_opcode_token15] = "_implied_opcode_token15",
  [aux_sym__implied_opcode_token16] = "_implied_opcode_token16",
  [aux_sym__implied_opcode_token17] = "_implied_opcode_token17",
  [aux_sym__implied_opcode_token18] = "_implied_opcode_token18",
  [aux_sym__implied_opcode_token19] = "_implied_opcode_token19",
  [aux_sym__implied_opcode_token20] = "_implied_opcode_token20",
  [aux_sym__implied_opcode_token21] = "_implied_opcode_token21",
  [aux_sym__implied_opcode_token22] = "_implied_opcode_token22",
  [aux_sym__implied_opcode_token23] = "_implied_opcode_token23",
  [aux_sym__implied_opcode_token24] = "_implied_opcode_token24",
  [aux_sym__implied_opcode_token25] = "_implied_opcode_token25",
  [aux_sym__implied_opcode_token26] = "_implied_opcode_token26",
  [aux_sym__implied_opcode_token27] = "_implied_opcode_token27",
  [aux_sym__implied_opcode_token28] = "_implied_opcode_token28",
  [aux_sym__implied_opcode_token29] = "_implied_opcode_token29",
  [aux_sym__implied_opcode_token30] = "_implied_opcode_token30",
  [aux_sym__implied_opcode_token31] = "_implied_opcode_token31",
  [aux_sym__implied_opcode_token32] = "_implied_opcode_token32",
  [aux_sym__implied_opcode_token33] = "_implied_opcode_token33",
  [aux_sym__implied_opcode_token34] = "_implied_opcode_token34",
  [aux_sym__implied_opcode_token35] = "_implied_opcode_token35",
  [aux_sym__implied_opcode_token36] = "_implied_opcode_token36",
  [aux_sym__implied_opcode_token37] = "_implied_opcode_token37",
  [aux_sym__relative_opcode_token1] = "_relative_opcode_token1",
  [aux_sym__relative_opcode_token2] = "_relative_opcode_token2",
  [aux_sym__relative_opcode_token3] = "_relative_opcode_token3",
  [aux_sym__relative_opcode_token4] = "_relative_opcode_token4",
  [aux_sym__relative_opcode_token5] = "_relative_opcode_token5",
  [aux_sym__relative_opcode_token6] = "_relative_opcode_token6",
  [aux_sym__relative_opcode_token7] = "_relative_opcode_token7",
  [aux_sym__relative_opcode_token8] = "_relative_opcode_token8",
  [aux_sym__relative_opcode_token9] = "_relative_opcode_token9",
  [aux_sym__immediate_opcode_token1] = "_immediate_opcode_token1",
  [aux_sym__immediate_opcode_token2] = "_immediate_opcode_token2",
  [aux_sym__immediate_opcode_token3] = "_immediate_opcode_token3",
  [aux_sym__immediate_opcode_token4] = "_immediate_opcode_token4",
  [aux_sym__immediate_opcode_token5] = "_immediate_opcode_token5",
  [aux_sym__immediate_opcode_token6] = "_immediate_opcode_token6",
  [aux_sym__immediate_opcode_token7] = "_immediate_opcode_token7",
  [aux_sym__immediate_opcode_token8] = "_immediate_opcode_token8",
  [aux_sym__immediate_opcode_token9] = "_immediate_opcode_token9",
  [aux_sym__immediate_opcode_token10] = "_immediate_opcode_token10",
  [aux_sym__immediate_opcode_token11] = "_immediate_opcode_token11",
  [aux_sym__immediate_opcode_token12] = "_immediate_opcode_token12",
  [aux_sym__absolute_opcode_token1] = "_absolute_opcode_token1",
  [aux_sym__absolute_opcode_token2] = "_absolute_opcode_token2",
  [aux_sym__absolute_opcode_token3] = "_absolute_opcode_token3",
  [aux_sym__absolute_opcode_token4] = "_absolute_opcode_token4",
  [aux_sym__absolute_opcode_token5] = "_absolute_opcode_token5",
  [aux_sym__absolute_opcode_token6] = "_absolute_opcode_token6",
  [aux_sym__absolute_opcode_token7] = "_absolute_opcode_token7",
  [aux_sym__absolute_opcode_token8] = "_absolute_opcode_token8",
  [sym_local_label] = "local_label",
  [sym_global_label] = "global_label",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__directive] = "_directive",
  [sym_file_directive] = "file_directive",
  [sym_label_directive] = "label_directive",
  [sym_section_directive] = "section_directive",
  [sym_imm_directive] = "imm_directive",
  [sym__inc_name] = "_inc_name",
  [sym__ext_name] = "_ext_name",
  [sym__sec_name] = "_sec_name",
  [sym__word_name] = "_word_name",
  [sym__byte_name] = "_byte_name",
  [sym_assignment] = "assignment",
  [sym_label] = "label",
  [sym__expr] = "_expr",
  [sym__identifier] = "_identifier",
  [sym_binary_expr] = "binary_expr",
  [sym_unary_expr] = "unary_expr",
  [sym__operation] = "_operation",
  [sym_implied] = "implied",
  [sym_relative] = "relative",
  [sym_immediate] = "immediate",
  [sym_absolute] = "absolute",
  [sym_indirect] = "indirect",
  [sym__reg_x] = "_reg_x",
  [sym__reg_y] = "_reg_y",
  [sym__implied_opcode] = "opcode",
  [sym__relative_opcode] = "opcode",
  [sym__immediate_opcode] = "opcode",
  [sym__absolute_opcode] = "opcode",
  [sym__indirect_opcode] = "opcode",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__ws_sep] = sym__ws_sep,
  [aux_sym_file_directive_token1] = aux_sym_file_directive_token1,
  [aux_sym_file_directive_token2] = aux_sym_file_directive_token1,
  [aux_sym_section_directive_token1] = aux_sym_section_directive_token1,
  [aux_sym__inc_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__ext_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__sec_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__word_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__byte_name_token1] = aux_sym__inc_name_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_num_literal] = sym_num_literal,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_PLUS,
  [anon_sym_LT_LT] = anon_sym_PLUS,
  [anon_sym_GT_GT] = anon_sym_PLUS,
  [anon_sym_AMP] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PLUS,
  [aux_sym_unary_expr_token1] = anon_sym_PLUS,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_x,
  [aux_sym__implied_opcode_token1] = aux_sym__implied_opcode_token1,
  [aux_sym__implied_opcode_token2] = aux_sym__implied_opcode_token2,
  [aux_sym__implied_opcode_token3] = aux_sym__implied_opcode_token3,
  [aux_sym__implied_opcode_token4] = aux_sym__implied_opcode_token4,
  [aux_sym__implied_opcode_token5] = aux_sym__implied_opcode_token5,
  [aux_sym__implied_opcode_token6] = aux_sym__implied_opcode_token6,
  [aux_sym__implied_opcode_token7] = aux_sym__implied_opcode_token7,
  [aux_sym__implied_opcode_token8] = aux_sym__implied_opcode_token8,
  [aux_sym__implied_opcode_token9] = aux_sym__implied_opcode_token9,
  [aux_sym__implied_opcode_token10] = aux_sym__implied_opcode_token10,
  [aux_sym__implied_opcode_token11] = aux_sym__implied_opcode_token11,
  [aux_sym__implied_opcode_token12] = aux_sym__implied_opcode_token12,
  [aux_sym__implied_opcode_token13] = aux_sym__implied_opcode_token13,
  [aux_sym__implied_opcode_token14] = aux_sym__implied_opcode_token14,
  [aux_sym__implied_opcode_token15] = aux_sym__implied_opcode_token15,
  [aux_sym__implied_opcode_token16] = aux_sym__implied_opcode_token16,
  [aux_sym__implied_opcode_token17] = aux_sym__implied_opcode_token17,
  [aux_sym__implied_opcode_token18] = aux_sym__implied_opcode_token18,
  [aux_sym__implied_opcode_token19] = aux_sym__implied_opcode_token19,
  [aux_sym__implied_opcode_token20] = aux_sym__implied_opcode_token20,
  [aux_sym__implied_opcode_token21] = aux_sym__implied_opcode_token21,
  [aux_sym__implied_opcode_token22] = aux_sym__implied_opcode_token22,
  [aux_sym__implied_opcode_token23] = aux_sym__implied_opcode_token23,
  [aux_sym__implied_opcode_token24] = aux_sym__implied_opcode_token24,
  [aux_sym__implied_opcode_token25] = aux_sym__implied_opcode_token25,
  [aux_sym__implied_opcode_token26] = aux_sym__implied_opcode_token26,
  [aux_sym__implied_opcode_token27] = aux_sym__implied_opcode_token27,
  [aux_sym__implied_opcode_token28] = aux_sym__implied_opcode_token28,
  [aux_sym__implied_opcode_token29] = aux_sym__implied_opcode_token29,
  [aux_sym__implied_opcode_token30] = aux_sym__implied_opcode_token30,
  [aux_sym__implied_opcode_token31] = aux_sym__implied_opcode_token31,
  [aux_sym__implied_opcode_token32] = aux_sym__implied_opcode_token32,
  [aux_sym__implied_opcode_token33] = aux_sym__implied_opcode_token33,
  [aux_sym__implied_opcode_token34] = aux_sym__implied_opcode_token34,
  [aux_sym__implied_opcode_token35] = aux_sym__implied_opcode_token35,
  [aux_sym__implied_opcode_token36] = aux_sym__implied_opcode_token36,
  [aux_sym__implied_opcode_token37] = aux_sym__implied_opcode_token37,
  [aux_sym__relative_opcode_token1] = aux_sym__relative_opcode_token1,
  [aux_sym__relative_opcode_token2] = aux_sym__relative_opcode_token2,
  [aux_sym__relative_opcode_token3] = aux_sym__relative_opcode_token3,
  [aux_sym__relative_opcode_token4] = aux_sym__relative_opcode_token4,
  [aux_sym__relative_opcode_token5] = aux_sym__relative_opcode_token5,
  [aux_sym__relative_opcode_token6] = aux_sym__relative_opcode_token6,
  [aux_sym__relative_opcode_token7] = aux_sym__relative_opcode_token7,
  [aux_sym__relative_opcode_token8] = aux_sym__relative_opcode_token8,
  [aux_sym__relative_opcode_token9] = aux_sym__relative_opcode_token9,
  [aux_sym__immediate_opcode_token1] = aux_sym__immediate_opcode_token1,
  [aux_sym__immediate_opcode_token2] = aux_sym__immediate_opcode_token2,
  [aux_sym__immediate_opcode_token3] = aux_sym__immediate_opcode_token3,
  [aux_sym__immediate_opcode_token4] = aux_sym__immediate_opcode_token4,
  [aux_sym__immediate_opcode_token5] = aux_sym__immediate_opcode_token5,
  [aux_sym__immediate_opcode_token6] = aux_sym__immediate_opcode_token6,
  [aux_sym__immediate_opcode_token7] = aux_sym__immediate_opcode_token7,
  [aux_sym__immediate_opcode_token8] = aux_sym__immediate_opcode_token8,
  [aux_sym__immediate_opcode_token9] = aux_sym__immediate_opcode_token9,
  [aux_sym__immediate_opcode_token10] = aux_sym__immediate_opcode_token10,
  [aux_sym__immediate_opcode_token11] = aux_sym__immediate_opcode_token11,
  [aux_sym__immediate_opcode_token12] = aux_sym__immediate_opcode_token12,
  [aux_sym__absolute_opcode_token1] = aux_sym__absolute_opcode_token1,
  [aux_sym__absolute_opcode_token2] = aux_sym__absolute_opcode_token2,
  [aux_sym__absolute_opcode_token3] = aux_sym__absolute_opcode_token3,
  [aux_sym__absolute_opcode_token4] = aux_sym__absolute_opcode_token4,
  [aux_sym__absolute_opcode_token5] = aux_sym__absolute_opcode_token5,
  [aux_sym__absolute_opcode_token6] = aux_sym__absolute_opcode_token6,
  [aux_sym__absolute_opcode_token7] = aux_sym__absolute_opcode_token7,
  [aux_sym__absolute_opcode_token8] = aux_sym__absolute_opcode_token8,
  [sym_local_label] = sym_local_label,
  [sym_global_label] = sym_global_label,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__directive] = sym__directive,
  [sym_file_directive] = sym_file_directive,
  [sym_label_directive] = sym_label_directive,
  [sym_section_directive] = sym_section_directive,
  [sym_imm_directive] = sym_imm_directive,
  [sym__inc_name] = sym__inc_name,
  [sym__ext_name] = sym__ext_name,
  [sym__sec_name] = sym__sec_name,
  [sym__word_name] = sym__word_name,
  [sym__byte_name] = sym__byte_name,
  [sym_assignment] = sym_assignment,
  [sym_label] = sym_label,
  [sym__expr] = sym__expr,
  [sym__identifier] = sym__identifier,
  [sym_binary_expr] = sym_binary_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym__operation] = sym__operation,
  [sym_implied] = sym_implied,
  [sym_relative] = sym_relative,
  [sym_immediate] = sym_immediate,
  [sym_absolute] = sym_absolute,
  [sym_indirect] = sym_indirect,
  [sym__reg_x] = sym__reg_x,
  [sym__reg_y] = sym__reg_y,
  [sym__implied_opcode] = sym__implied_opcode,
  [sym__relative_opcode] = sym__implied_opcode,
  [sym__immediate_opcode] = sym__implied_opcode,
  [sym__absolute_opcode] = sym__implied_opcode,
  [sym__indirect_opcode] = sym__implied_opcode,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__ws_sep] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_directive_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inc_name_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__ext_name_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sec_name_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__word_name_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__byte_name_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_num_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unary_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__implied_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implied_opcode_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__relative_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_opcode_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [sym_local_label] = {
    .visible = true,
    .named = true,
  },
  [sym_global_label] = {
    .visible = true,
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
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_file_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_label_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_section_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__inc_name] = {
    .visible = false,
    .named = true,
  },
  [sym__ext_name] = {
    .visible = false,
    .named = true,
  },
  [sym__sec_name] = {
    .visible = false,
    .named = true,
  },
  [sym__word_name] = {
    .visible = false,
    .named = true,
  },
  [sym__byte_name] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__operation] = {
    .visible = false,
    .named = true,
  },
  [sym_implied] = {
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
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect] = {
    .visible = true,
    .named = true,
  },
  [sym__reg_x] = {
    .visible = false,
    .named = true,
  },
  [sym__reg_y] = {
    .visible = false,
    .named = true,
  },
  [sym__implied_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__relative_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__indirect_opcode] = {
    .visible = true,
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '$') ADVANCE(101);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'W') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(152);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '~') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(101);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '~') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(143);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(167);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 'w') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(327);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 32:
      if (lookahead == 'y') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(209);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(279);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(283);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(265);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(267);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(215);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(223);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(335);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      END_STATE();
    case 48:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(287);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(185);
      END_STATE();
    case 49:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(167);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(197);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(331);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 68:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(38);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(355);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 78:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(356);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 82:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 84:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 88:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 89:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 90:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 91:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(235);
      END_STATE();
    case 92:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 93:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 94:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 95:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 96:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 97:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 98:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(257);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 99:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 100:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 104:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 105:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 106:
      if (eof) ADVANCE(111);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(101);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'W') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(152);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '~') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 107:
      if (eof) ADVANCE(111);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 108:
      if (eof) ADVANCE(111);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 109:
      if (eof) ADVANCE(111);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 110:
      if (eof) ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(109)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__ws_sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_file_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_file_directive_token2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_section_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_unary_expr_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'u') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'x') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'y') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(202);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'o') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(282);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(365);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(266);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(214);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(216);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(222);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(224);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(288);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(164);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(258);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(182);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_global_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 107},
  [2] = {.lex_state = 107},
  [3] = {.lex_state = 107},
  [4] = {.lex_state = 107},
  [5] = {.lex_state = 107},
  [6] = {.lex_state = 107},
  [7] = {.lex_state = 107},
  [8] = {.lex_state = 107},
  [9] = {.lex_state = 107},
  [10] = {.lex_state = 107},
  [11] = {.lex_state = 107},
  [12] = {.lex_state = 107},
  [13] = {.lex_state = 110},
  [14] = {.lex_state = 107},
  [15] = {.lex_state = 107},
  [16] = {.lex_state = 107},
  [17] = {.lex_state = 107},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 107},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 107},
  [22] = {.lex_state = 107},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 107},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 107},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 110},
  [39] = {.lex_state = 110},
  [40] = {.lex_state = 110},
  [41] = {.lex_state = 110},
  [42] = {.lex_state = 110},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 110},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 110},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 110},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 110},
  [54] = {.lex_state = 110},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 110},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_file_directive_token2] = ACTIONS(1),
    [aux_sym__inc_name_token1] = ACTIONS(1),
    [aux_sym__ext_name_token1] = ACTIONS(1),
    [aux_sym__sec_name_token1] = ACTIONS(1),
    [aux_sym__word_name_token1] = ACTIONS(1),
    [aux_sym__byte_name_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_num_literal] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_unary_expr_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [aux_sym__implied_opcode_token1] = ACTIONS(1),
    [aux_sym__implied_opcode_token2] = ACTIONS(1),
    [aux_sym__implied_opcode_token3] = ACTIONS(1),
    [aux_sym__implied_opcode_token4] = ACTIONS(1),
    [aux_sym__implied_opcode_token5] = ACTIONS(1),
    [aux_sym__implied_opcode_token6] = ACTIONS(1),
    [aux_sym__implied_opcode_token7] = ACTIONS(1),
    [aux_sym__implied_opcode_token8] = ACTIONS(1),
    [aux_sym__implied_opcode_token9] = ACTIONS(1),
    [aux_sym__implied_opcode_token10] = ACTIONS(1),
    [aux_sym__implied_opcode_token11] = ACTIONS(1),
    [aux_sym__implied_opcode_token12] = ACTIONS(1),
    [aux_sym__implied_opcode_token13] = ACTIONS(1),
    [aux_sym__implied_opcode_token14] = ACTIONS(1),
    [aux_sym__implied_opcode_token15] = ACTIONS(1),
    [aux_sym__implied_opcode_token16] = ACTIONS(1),
    [aux_sym__implied_opcode_token17] = ACTIONS(1),
    [aux_sym__implied_opcode_token18] = ACTIONS(1),
    [aux_sym__implied_opcode_token19] = ACTIONS(1),
    [aux_sym__implied_opcode_token20] = ACTIONS(1),
    [aux_sym__implied_opcode_token21] = ACTIONS(1),
    [aux_sym__implied_opcode_token22] = ACTIONS(1),
    [aux_sym__implied_opcode_token23] = ACTIONS(1),
    [aux_sym__implied_opcode_token24] = ACTIONS(1),
    [aux_sym__implied_opcode_token25] = ACTIONS(1),
    [aux_sym__implied_opcode_token26] = ACTIONS(1),
    [aux_sym__implied_opcode_token27] = ACTIONS(1),
    [aux_sym__implied_opcode_token28] = ACTIONS(1),
    [aux_sym__implied_opcode_token29] = ACTIONS(1),
    [aux_sym__implied_opcode_token30] = ACTIONS(1),
    [aux_sym__implied_opcode_token31] = ACTIONS(1),
    [aux_sym__implied_opcode_token32] = ACTIONS(1),
    [aux_sym__implied_opcode_token33] = ACTIONS(1),
    [aux_sym__implied_opcode_token34] = ACTIONS(1),
    [aux_sym__implied_opcode_token35] = ACTIONS(1),
    [aux_sym__implied_opcode_token36] = ACTIONS(1),
    [aux_sym__implied_opcode_token37] = ACTIONS(1),
    [aux_sym__relative_opcode_token1] = ACTIONS(1),
    [aux_sym__relative_opcode_token2] = ACTIONS(1),
    [aux_sym__relative_opcode_token3] = ACTIONS(1),
    [aux_sym__relative_opcode_token4] = ACTIONS(1),
    [aux_sym__relative_opcode_token5] = ACTIONS(1),
    [aux_sym__relative_opcode_token6] = ACTIONS(1),
    [aux_sym__relative_opcode_token7] = ACTIONS(1),
    [aux_sym__relative_opcode_token8] = ACTIONS(1),
    [aux_sym__relative_opcode_token9] = ACTIONS(1),
    [aux_sym__immediate_opcode_token1] = ACTIONS(1),
    [aux_sym__immediate_opcode_token2] = ACTIONS(1),
    [aux_sym__immediate_opcode_token3] = ACTIONS(1),
    [aux_sym__immediate_opcode_token4] = ACTIONS(1),
    [aux_sym__immediate_opcode_token5] = ACTIONS(1),
    [aux_sym__immediate_opcode_token6] = ACTIONS(1),
    [aux_sym__immediate_opcode_token7] = ACTIONS(1),
    [aux_sym__immediate_opcode_token8] = ACTIONS(1),
    [aux_sym__immediate_opcode_token9] = ACTIONS(1),
    [aux_sym__immediate_opcode_token10] = ACTIONS(1),
    [aux_sym__immediate_opcode_token11] = ACTIONS(1),
    [aux_sym__immediate_opcode_token12] = ACTIONS(1),
    [aux_sym__absolute_opcode_token1] = ACTIONS(1),
    [aux_sym__absolute_opcode_token2] = ACTIONS(1),
    [aux_sym__absolute_opcode_token3] = ACTIONS(1),
    [aux_sym__absolute_opcode_token4] = ACTIONS(1),
    [aux_sym__absolute_opcode_token5] = ACTIONS(1),
    [aux_sym__absolute_opcode_token6] = ACTIONS(1),
    [aux_sym__absolute_opcode_token7] = ACTIONS(1),
    [aux_sym__absolute_opcode_token8] = ACTIONS(1),
    [sym_local_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__statement] = STATE(3),
    [sym__directive] = STATE(3),
    [sym_file_directive] = STATE(3),
    [sym_label_directive] = STATE(3),
    [sym_section_directive] = STATE(3),
    [sym_imm_directive] = STATE(3),
    [sym__inc_name] = STATE(47),
    [sym__ext_name] = STATE(38),
    [sym__sec_name] = STATE(44),
    [sym__word_name] = STATE(33),
    [sym__byte_name] = STATE(33),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(3),
    [sym_relative] = STATE(3),
    [sym_immediate] = STATE(3),
    [sym_absolute] = STATE(3),
    [sym_indirect] = STATE(3),
    [sym__implied_opcode] = STATE(16),
    [sym__relative_opcode] = STATE(41),
    [sym__immediate_opcode] = STATE(40),
    [sym__absolute_opcode] = STATE(39),
    [sym__indirect_opcode] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(7),
    [aux_sym__ext_name_token1] = ACTIONS(9),
    [aux_sym__sec_name_token1] = ACTIONS(11),
    [aux_sym__word_name_token1] = ACTIONS(13),
    [aux_sym__byte_name_token1] = ACTIONS(13),
    [aux_sym__implied_opcode_token1] = ACTIONS(15),
    [aux_sym__implied_opcode_token2] = ACTIONS(15),
    [aux_sym__implied_opcode_token3] = ACTIONS(15),
    [aux_sym__implied_opcode_token4] = ACTIONS(15),
    [aux_sym__implied_opcode_token5] = ACTIONS(15),
    [aux_sym__implied_opcode_token6] = ACTIONS(15),
    [aux_sym__implied_opcode_token7] = ACTIONS(15),
    [aux_sym__implied_opcode_token8] = ACTIONS(15),
    [aux_sym__implied_opcode_token9] = ACTIONS(15),
    [aux_sym__implied_opcode_token10] = ACTIONS(15),
    [aux_sym__implied_opcode_token11] = ACTIONS(15),
    [aux_sym__implied_opcode_token12] = ACTIONS(15),
    [aux_sym__implied_opcode_token13] = ACTIONS(15),
    [aux_sym__implied_opcode_token14] = ACTIONS(15),
    [aux_sym__implied_opcode_token15] = ACTIONS(15),
    [aux_sym__implied_opcode_token16] = ACTIONS(15),
    [aux_sym__implied_opcode_token17] = ACTIONS(15),
    [aux_sym__implied_opcode_token18] = ACTIONS(15),
    [aux_sym__implied_opcode_token19] = ACTIONS(15),
    [aux_sym__implied_opcode_token20] = ACTIONS(15),
    [aux_sym__implied_opcode_token21] = ACTIONS(17),
    [aux_sym__implied_opcode_token22] = ACTIONS(17),
    [aux_sym__implied_opcode_token23] = ACTIONS(17),
    [aux_sym__implied_opcode_token24] = ACTIONS(17),
    [aux_sym__implied_opcode_token25] = ACTIONS(17),
    [aux_sym__implied_opcode_token26] = ACTIONS(17),
    [aux_sym__implied_opcode_token27] = ACTIONS(15),
    [aux_sym__implied_opcode_token28] = ACTIONS(15),
    [aux_sym__implied_opcode_token29] = ACTIONS(15),
    [aux_sym__implied_opcode_token30] = ACTIONS(15),
    [aux_sym__implied_opcode_token31] = ACTIONS(15),
    [aux_sym__implied_opcode_token32] = ACTIONS(15),
    [aux_sym__implied_opcode_token33] = ACTIONS(15),
    [aux_sym__implied_opcode_token34] = ACTIONS(15),
    [aux_sym__implied_opcode_token35] = ACTIONS(15),
    [aux_sym__implied_opcode_token36] = ACTIONS(15),
    [aux_sym__implied_opcode_token37] = ACTIONS(15),
    [aux_sym__relative_opcode_token1] = ACTIONS(19),
    [aux_sym__relative_opcode_token2] = ACTIONS(19),
    [aux_sym__relative_opcode_token3] = ACTIONS(19),
    [aux_sym__relative_opcode_token4] = ACTIONS(19),
    [aux_sym__relative_opcode_token5] = ACTIONS(19),
    [aux_sym__relative_opcode_token6] = ACTIONS(19),
    [aux_sym__relative_opcode_token7] = ACTIONS(19),
    [aux_sym__relative_opcode_token8] = ACTIONS(19),
    [aux_sym__relative_opcode_token9] = ACTIONS(19),
    [aux_sym__immediate_opcode_token1] = ACTIONS(21),
    [aux_sym__immediate_opcode_token2] = ACTIONS(21),
    [aux_sym__immediate_opcode_token3] = ACTIONS(23),
    [aux_sym__immediate_opcode_token4] = ACTIONS(21),
    [aux_sym__immediate_opcode_token5] = ACTIONS(23),
    [aux_sym__immediate_opcode_token6] = ACTIONS(23),
    [aux_sym__immediate_opcode_token7] = ACTIONS(21),
    [aux_sym__immediate_opcode_token8] = ACTIONS(21),
    [aux_sym__immediate_opcode_token9] = ACTIONS(23),
    [aux_sym__immediate_opcode_token10] = ACTIONS(23),
    [aux_sym__immediate_opcode_token11] = ACTIONS(21),
    [aux_sym__immediate_opcode_token12] = ACTIONS(21),
    [aux_sym__absolute_opcode_token1] = ACTIONS(25),
    [aux_sym__absolute_opcode_token2] = ACTIONS(27),
    [aux_sym__absolute_opcode_token3] = ACTIONS(25),
    [aux_sym__absolute_opcode_token4] = ACTIONS(27),
    [aux_sym__absolute_opcode_token5] = ACTIONS(27),
    [aux_sym__absolute_opcode_token6] = ACTIONS(27),
    [aux_sym__absolute_opcode_token7] = ACTIONS(27),
    [aux_sym__absolute_opcode_token8] = ACTIONS(27),
    [sym_local_label] = ACTIONS(29),
    [sym_global_label] = ACTIONS(31),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__directive] = STATE(2),
    [sym_file_directive] = STATE(2),
    [sym_label_directive] = STATE(2),
    [sym_section_directive] = STATE(2),
    [sym_imm_directive] = STATE(2),
    [sym__inc_name] = STATE(47),
    [sym__ext_name] = STATE(38),
    [sym__sec_name] = STATE(44),
    [sym__word_name] = STATE(33),
    [sym__byte_name] = STATE(33),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(16),
    [sym__relative_opcode] = STATE(41),
    [sym__immediate_opcode] = STATE(40),
    [sym__absolute_opcode] = STATE(39),
    [sym__indirect_opcode] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(35),
    [aux_sym__ext_name_token1] = ACTIONS(38),
    [aux_sym__sec_name_token1] = ACTIONS(41),
    [aux_sym__word_name_token1] = ACTIONS(44),
    [aux_sym__byte_name_token1] = ACTIONS(44),
    [aux_sym__implied_opcode_token1] = ACTIONS(47),
    [aux_sym__implied_opcode_token2] = ACTIONS(47),
    [aux_sym__implied_opcode_token3] = ACTIONS(47),
    [aux_sym__implied_opcode_token4] = ACTIONS(47),
    [aux_sym__implied_opcode_token5] = ACTIONS(47),
    [aux_sym__implied_opcode_token6] = ACTIONS(47),
    [aux_sym__implied_opcode_token7] = ACTIONS(47),
    [aux_sym__implied_opcode_token8] = ACTIONS(47),
    [aux_sym__implied_opcode_token9] = ACTIONS(47),
    [aux_sym__implied_opcode_token10] = ACTIONS(47),
    [aux_sym__implied_opcode_token11] = ACTIONS(47),
    [aux_sym__implied_opcode_token12] = ACTIONS(47),
    [aux_sym__implied_opcode_token13] = ACTIONS(47),
    [aux_sym__implied_opcode_token14] = ACTIONS(47),
    [aux_sym__implied_opcode_token15] = ACTIONS(47),
    [aux_sym__implied_opcode_token16] = ACTIONS(47),
    [aux_sym__implied_opcode_token17] = ACTIONS(47),
    [aux_sym__implied_opcode_token18] = ACTIONS(47),
    [aux_sym__implied_opcode_token19] = ACTIONS(47),
    [aux_sym__implied_opcode_token20] = ACTIONS(47),
    [aux_sym__implied_opcode_token21] = ACTIONS(50),
    [aux_sym__implied_opcode_token22] = ACTIONS(50),
    [aux_sym__implied_opcode_token23] = ACTIONS(50),
    [aux_sym__implied_opcode_token24] = ACTIONS(50),
    [aux_sym__implied_opcode_token25] = ACTIONS(50),
    [aux_sym__implied_opcode_token26] = ACTIONS(50),
    [aux_sym__implied_opcode_token27] = ACTIONS(47),
    [aux_sym__implied_opcode_token28] = ACTIONS(47),
    [aux_sym__implied_opcode_token29] = ACTIONS(47),
    [aux_sym__implied_opcode_token30] = ACTIONS(47),
    [aux_sym__implied_opcode_token31] = ACTIONS(47),
    [aux_sym__implied_opcode_token32] = ACTIONS(47),
    [aux_sym__implied_opcode_token33] = ACTIONS(47),
    [aux_sym__implied_opcode_token34] = ACTIONS(47),
    [aux_sym__implied_opcode_token35] = ACTIONS(47),
    [aux_sym__implied_opcode_token36] = ACTIONS(47),
    [aux_sym__implied_opcode_token37] = ACTIONS(47),
    [aux_sym__relative_opcode_token1] = ACTIONS(53),
    [aux_sym__relative_opcode_token2] = ACTIONS(53),
    [aux_sym__relative_opcode_token3] = ACTIONS(53),
    [aux_sym__relative_opcode_token4] = ACTIONS(53),
    [aux_sym__relative_opcode_token5] = ACTIONS(53),
    [aux_sym__relative_opcode_token6] = ACTIONS(53),
    [aux_sym__relative_opcode_token7] = ACTIONS(53),
    [aux_sym__relative_opcode_token8] = ACTIONS(53),
    [aux_sym__relative_opcode_token9] = ACTIONS(53),
    [aux_sym__immediate_opcode_token1] = ACTIONS(56),
    [aux_sym__immediate_opcode_token2] = ACTIONS(56),
    [aux_sym__immediate_opcode_token3] = ACTIONS(59),
    [aux_sym__immediate_opcode_token4] = ACTIONS(56),
    [aux_sym__immediate_opcode_token5] = ACTIONS(59),
    [aux_sym__immediate_opcode_token6] = ACTIONS(59),
    [aux_sym__immediate_opcode_token7] = ACTIONS(56),
    [aux_sym__immediate_opcode_token8] = ACTIONS(56),
    [aux_sym__immediate_opcode_token9] = ACTIONS(59),
    [aux_sym__immediate_opcode_token10] = ACTIONS(59),
    [aux_sym__immediate_opcode_token11] = ACTIONS(56),
    [aux_sym__immediate_opcode_token12] = ACTIONS(56),
    [aux_sym__absolute_opcode_token1] = ACTIONS(62),
    [aux_sym__absolute_opcode_token2] = ACTIONS(65),
    [aux_sym__absolute_opcode_token3] = ACTIONS(62),
    [aux_sym__absolute_opcode_token4] = ACTIONS(65),
    [aux_sym__absolute_opcode_token5] = ACTIONS(65),
    [aux_sym__absolute_opcode_token6] = ACTIONS(65),
    [aux_sym__absolute_opcode_token7] = ACTIONS(65),
    [aux_sym__absolute_opcode_token8] = ACTIONS(65),
    [sym_local_label] = ACTIONS(68),
    [sym_global_label] = ACTIONS(71),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__directive] = STATE(2),
    [sym_file_directive] = STATE(2),
    [sym_label_directive] = STATE(2),
    [sym_section_directive] = STATE(2),
    [sym_imm_directive] = STATE(2),
    [sym__inc_name] = STATE(47),
    [sym__ext_name] = STATE(38),
    [sym__sec_name] = STATE(44),
    [sym__word_name] = STATE(33),
    [sym__byte_name] = STATE(33),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(16),
    [sym__relative_opcode] = STATE(41),
    [sym__immediate_opcode] = STATE(40),
    [sym__absolute_opcode] = STATE(39),
    [sym__indirect_opcode] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(7),
    [aux_sym__ext_name_token1] = ACTIONS(9),
    [aux_sym__sec_name_token1] = ACTIONS(11),
    [aux_sym__word_name_token1] = ACTIONS(13),
    [aux_sym__byte_name_token1] = ACTIONS(13),
    [aux_sym__implied_opcode_token1] = ACTIONS(15),
    [aux_sym__implied_opcode_token2] = ACTIONS(15),
    [aux_sym__implied_opcode_token3] = ACTIONS(15),
    [aux_sym__implied_opcode_token4] = ACTIONS(15),
    [aux_sym__implied_opcode_token5] = ACTIONS(15),
    [aux_sym__implied_opcode_token6] = ACTIONS(15),
    [aux_sym__implied_opcode_token7] = ACTIONS(15),
    [aux_sym__implied_opcode_token8] = ACTIONS(15),
    [aux_sym__implied_opcode_token9] = ACTIONS(15),
    [aux_sym__implied_opcode_token10] = ACTIONS(15),
    [aux_sym__implied_opcode_token11] = ACTIONS(15),
    [aux_sym__implied_opcode_token12] = ACTIONS(15),
    [aux_sym__implied_opcode_token13] = ACTIONS(15),
    [aux_sym__implied_opcode_token14] = ACTIONS(15),
    [aux_sym__implied_opcode_token15] = ACTIONS(15),
    [aux_sym__implied_opcode_token16] = ACTIONS(15),
    [aux_sym__implied_opcode_token17] = ACTIONS(15),
    [aux_sym__implied_opcode_token18] = ACTIONS(15),
    [aux_sym__implied_opcode_token19] = ACTIONS(15),
    [aux_sym__implied_opcode_token20] = ACTIONS(15),
    [aux_sym__implied_opcode_token21] = ACTIONS(17),
    [aux_sym__implied_opcode_token22] = ACTIONS(17),
    [aux_sym__implied_opcode_token23] = ACTIONS(17),
    [aux_sym__implied_opcode_token24] = ACTIONS(17),
    [aux_sym__implied_opcode_token25] = ACTIONS(17),
    [aux_sym__implied_opcode_token26] = ACTIONS(17),
    [aux_sym__implied_opcode_token27] = ACTIONS(15),
    [aux_sym__implied_opcode_token28] = ACTIONS(15),
    [aux_sym__implied_opcode_token29] = ACTIONS(15),
    [aux_sym__implied_opcode_token30] = ACTIONS(15),
    [aux_sym__implied_opcode_token31] = ACTIONS(15),
    [aux_sym__implied_opcode_token32] = ACTIONS(15),
    [aux_sym__implied_opcode_token33] = ACTIONS(15),
    [aux_sym__implied_opcode_token34] = ACTIONS(15),
    [aux_sym__implied_opcode_token35] = ACTIONS(15),
    [aux_sym__implied_opcode_token36] = ACTIONS(15),
    [aux_sym__implied_opcode_token37] = ACTIONS(15),
    [aux_sym__relative_opcode_token1] = ACTIONS(19),
    [aux_sym__relative_opcode_token2] = ACTIONS(19),
    [aux_sym__relative_opcode_token3] = ACTIONS(19),
    [aux_sym__relative_opcode_token4] = ACTIONS(19),
    [aux_sym__relative_opcode_token5] = ACTIONS(19),
    [aux_sym__relative_opcode_token6] = ACTIONS(19),
    [aux_sym__relative_opcode_token7] = ACTIONS(19),
    [aux_sym__relative_opcode_token8] = ACTIONS(19),
    [aux_sym__relative_opcode_token9] = ACTIONS(19),
    [aux_sym__immediate_opcode_token1] = ACTIONS(21),
    [aux_sym__immediate_opcode_token2] = ACTIONS(21),
    [aux_sym__immediate_opcode_token3] = ACTIONS(23),
    [aux_sym__immediate_opcode_token4] = ACTIONS(21),
    [aux_sym__immediate_opcode_token5] = ACTIONS(23),
    [aux_sym__immediate_opcode_token6] = ACTIONS(23),
    [aux_sym__immediate_opcode_token7] = ACTIONS(21),
    [aux_sym__immediate_opcode_token8] = ACTIONS(21),
    [aux_sym__immediate_opcode_token9] = ACTIONS(23),
    [aux_sym__immediate_opcode_token10] = ACTIONS(23),
    [aux_sym__immediate_opcode_token11] = ACTIONS(21),
    [aux_sym__immediate_opcode_token12] = ACTIONS(21),
    [aux_sym__absolute_opcode_token1] = ACTIONS(25),
    [aux_sym__absolute_opcode_token2] = ACTIONS(27),
    [aux_sym__absolute_opcode_token3] = ACTIONS(25),
    [aux_sym__absolute_opcode_token4] = ACTIONS(27),
    [aux_sym__absolute_opcode_token5] = ACTIONS(27),
    [aux_sym__absolute_opcode_token6] = ACTIONS(27),
    [aux_sym__absolute_opcode_token7] = ACTIONS(27),
    [aux_sym__absolute_opcode_token8] = ACTIONS(27),
    [sym_local_label] = ACTIONS(29),
    [sym_global_label] = ACTIONS(31),
  },
  [4] = {
    [sym__reg_x] = STATE(21),
    [sym__reg_y] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(78),
    [aux_sym__ext_name_token1] = ACTIONS(78),
    [aux_sym__sec_name_token1] = ACTIONS(78),
    [aux_sym__word_name_token1] = ACTIONS(78),
    [aux_sym__byte_name_token1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(82),
    [aux_sym__implied_opcode_token1] = ACTIONS(78),
    [aux_sym__implied_opcode_token2] = ACTIONS(78),
    [aux_sym__implied_opcode_token3] = ACTIONS(78),
    [aux_sym__implied_opcode_token4] = ACTIONS(78),
    [aux_sym__implied_opcode_token5] = ACTIONS(78),
    [aux_sym__implied_opcode_token6] = ACTIONS(78),
    [aux_sym__implied_opcode_token7] = ACTIONS(78),
    [aux_sym__implied_opcode_token8] = ACTIONS(78),
    [aux_sym__implied_opcode_token9] = ACTIONS(78),
    [aux_sym__implied_opcode_token10] = ACTIONS(78),
    [aux_sym__implied_opcode_token11] = ACTIONS(78),
    [aux_sym__implied_opcode_token12] = ACTIONS(78),
    [aux_sym__implied_opcode_token13] = ACTIONS(78),
    [aux_sym__implied_opcode_token14] = ACTIONS(78),
    [aux_sym__implied_opcode_token15] = ACTIONS(78),
    [aux_sym__implied_opcode_token16] = ACTIONS(78),
    [aux_sym__implied_opcode_token17] = ACTIONS(78),
    [aux_sym__implied_opcode_token18] = ACTIONS(78),
    [aux_sym__implied_opcode_token19] = ACTIONS(78),
    [aux_sym__implied_opcode_token20] = ACTIONS(78),
    [aux_sym__implied_opcode_token21] = ACTIONS(78),
    [aux_sym__implied_opcode_token22] = ACTIONS(78),
    [aux_sym__implied_opcode_token23] = ACTIONS(78),
    [aux_sym__implied_opcode_token24] = ACTIONS(78),
    [aux_sym__implied_opcode_token25] = ACTIONS(78),
    [aux_sym__implied_opcode_token26] = ACTIONS(78),
    [aux_sym__implied_opcode_token27] = ACTIONS(78),
    [aux_sym__implied_opcode_token28] = ACTIONS(78),
    [aux_sym__implied_opcode_token29] = ACTIONS(78),
    [aux_sym__implied_opcode_token30] = ACTIONS(78),
    [aux_sym__implied_opcode_token31] = ACTIONS(78),
    [aux_sym__implied_opcode_token32] = ACTIONS(78),
    [aux_sym__implied_opcode_token33] = ACTIONS(78),
    [aux_sym__implied_opcode_token34] = ACTIONS(78),
    [aux_sym__implied_opcode_token35] = ACTIONS(78),
    [aux_sym__implied_opcode_token36] = ACTIONS(78),
    [aux_sym__implied_opcode_token37] = ACTIONS(78),
    [aux_sym__relative_opcode_token1] = ACTIONS(78),
    [aux_sym__relative_opcode_token2] = ACTIONS(78),
    [aux_sym__relative_opcode_token3] = ACTIONS(78),
    [aux_sym__relative_opcode_token4] = ACTIONS(78),
    [aux_sym__relative_opcode_token5] = ACTIONS(78),
    [aux_sym__relative_opcode_token6] = ACTIONS(78),
    [aux_sym__relative_opcode_token7] = ACTIONS(78),
    [aux_sym__relative_opcode_token8] = ACTIONS(78),
    [aux_sym__relative_opcode_token9] = ACTIONS(78),
    [aux_sym__immediate_opcode_token1] = ACTIONS(78),
    [aux_sym__immediate_opcode_token2] = ACTIONS(78),
    [aux_sym__immediate_opcode_token3] = ACTIONS(78),
    [aux_sym__immediate_opcode_token4] = ACTIONS(78),
    [aux_sym__immediate_opcode_token5] = ACTIONS(78),
    [aux_sym__immediate_opcode_token6] = ACTIONS(78),
    [aux_sym__immediate_opcode_token7] = ACTIONS(78),
    [aux_sym__immediate_opcode_token8] = ACTIONS(78),
    [aux_sym__immediate_opcode_token9] = ACTIONS(78),
    [aux_sym__immediate_opcode_token10] = ACTIONS(78),
    [aux_sym__immediate_opcode_token11] = ACTIONS(78),
    [aux_sym__immediate_opcode_token12] = ACTIONS(78),
    [aux_sym__absolute_opcode_token1] = ACTIONS(78),
    [aux_sym__absolute_opcode_token2] = ACTIONS(78),
    [aux_sym__absolute_opcode_token3] = ACTIONS(78),
    [aux_sym__absolute_opcode_token4] = ACTIONS(78),
    [aux_sym__absolute_opcode_token5] = ACTIONS(78),
    [aux_sym__absolute_opcode_token6] = ACTIONS(78),
    [aux_sym__absolute_opcode_token7] = ACTIONS(78),
    [aux_sym__absolute_opcode_token8] = ACTIONS(78),
    [sym_local_label] = ACTIONS(78),
    [sym_global_label] = ACTIONS(78),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(86),
    [aux_sym__ext_name_token1] = ACTIONS(86),
    [aux_sym__sec_name_token1] = ACTIONS(86),
    [aux_sym__word_name_token1] = ACTIONS(86),
    [aux_sym__byte_name_token1] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_LT_LT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [aux_sym__implied_opcode_token1] = ACTIONS(86),
    [aux_sym__implied_opcode_token2] = ACTIONS(86),
    [aux_sym__implied_opcode_token3] = ACTIONS(86),
    [aux_sym__implied_opcode_token4] = ACTIONS(86),
    [aux_sym__implied_opcode_token5] = ACTIONS(86),
    [aux_sym__implied_opcode_token6] = ACTIONS(86),
    [aux_sym__implied_opcode_token7] = ACTIONS(86),
    [aux_sym__implied_opcode_token8] = ACTIONS(86),
    [aux_sym__implied_opcode_token9] = ACTIONS(86),
    [aux_sym__implied_opcode_token10] = ACTIONS(86),
    [aux_sym__implied_opcode_token11] = ACTIONS(86),
    [aux_sym__implied_opcode_token12] = ACTIONS(86),
    [aux_sym__implied_opcode_token13] = ACTIONS(86),
    [aux_sym__implied_opcode_token14] = ACTIONS(86),
    [aux_sym__implied_opcode_token15] = ACTIONS(86),
    [aux_sym__implied_opcode_token16] = ACTIONS(86),
    [aux_sym__implied_opcode_token17] = ACTIONS(86),
    [aux_sym__implied_opcode_token18] = ACTIONS(86),
    [aux_sym__implied_opcode_token19] = ACTIONS(86),
    [aux_sym__implied_opcode_token20] = ACTIONS(86),
    [aux_sym__implied_opcode_token21] = ACTIONS(86),
    [aux_sym__implied_opcode_token22] = ACTIONS(86),
    [aux_sym__implied_opcode_token23] = ACTIONS(86),
    [aux_sym__implied_opcode_token24] = ACTIONS(86),
    [aux_sym__implied_opcode_token25] = ACTIONS(86),
    [aux_sym__implied_opcode_token26] = ACTIONS(86),
    [aux_sym__implied_opcode_token27] = ACTIONS(86),
    [aux_sym__implied_opcode_token28] = ACTIONS(86),
    [aux_sym__implied_opcode_token29] = ACTIONS(86),
    [aux_sym__implied_opcode_token30] = ACTIONS(86),
    [aux_sym__implied_opcode_token31] = ACTIONS(86),
    [aux_sym__implied_opcode_token32] = ACTIONS(86),
    [aux_sym__implied_opcode_token33] = ACTIONS(86),
    [aux_sym__implied_opcode_token34] = ACTIONS(86),
    [aux_sym__implied_opcode_token35] = ACTIONS(86),
    [aux_sym__implied_opcode_token36] = ACTIONS(86),
    [aux_sym__implied_opcode_token37] = ACTIONS(86),
    [aux_sym__relative_opcode_token1] = ACTIONS(86),
    [aux_sym__relative_opcode_token2] = ACTIONS(86),
    [aux_sym__relative_opcode_token3] = ACTIONS(86),
    [aux_sym__relative_opcode_token4] = ACTIONS(86),
    [aux_sym__relative_opcode_token5] = ACTIONS(86),
    [aux_sym__relative_opcode_token6] = ACTIONS(86),
    [aux_sym__relative_opcode_token7] = ACTIONS(86),
    [aux_sym__relative_opcode_token8] = ACTIONS(86),
    [aux_sym__relative_opcode_token9] = ACTIONS(86),
    [aux_sym__immediate_opcode_token1] = ACTIONS(86),
    [aux_sym__immediate_opcode_token2] = ACTIONS(86),
    [aux_sym__immediate_opcode_token3] = ACTIONS(86),
    [aux_sym__immediate_opcode_token4] = ACTIONS(86),
    [aux_sym__immediate_opcode_token5] = ACTIONS(86),
    [aux_sym__immediate_opcode_token6] = ACTIONS(86),
    [aux_sym__immediate_opcode_token7] = ACTIONS(86),
    [aux_sym__immediate_opcode_token8] = ACTIONS(86),
    [aux_sym__immediate_opcode_token9] = ACTIONS(86),
    [aux_sym__immediate_opcode_token10] = ACTIONS(86),
    [aux_sym__immediate_opcode_token11] = ACTIONS(86),
    [aux_sym__immediate_opcode_token12] = ACTIONS(86),
    [aux_sym__absolute_opcode_token1] = ACTIONS(86),
    [aux_sym__absolute_opcode_token2] = ACTIONS(86),
    [aux_sym__absolute_opcode_token3] = ACTIONS(86),
    [aux_sym__absolute_opcode_token4] = ACTIONS(86),
    [aux_sym__absolute_opcode_token5] = ACTIONS(86),
    [aux_sym__absolute_opcode_token6] = ACTIONS(86),
    [aux_sym__absolute_opcode_token7] = ACTIONS(86),
    [aux_sym__absolute_opcode_token8] = ACTIONS(86),
    [sym_local_label] = ACTIONS(86),
    [sym_global_label] = ACTIONS(86),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(90),
    [aux_sym__ext_name_token1] = ACTIONS(90),
    [aux_sym__sec_name_token1] = ACTIONS(90),
    [aux_sym__word_name_token1] = ACTIONS(90),
    [aux_sym__byte_name_token1] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_LT_LT] = ACTIONS(88),
    [anon_sym_GT_GT] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [aux_sym__implied_opcode_token1] = ACTIONS(90),
    [aux_sym__implied_opcode_token2] = ACTIONS(90),
    [aux_sym__implied_opcode_token3] = ACTIONS(90),
    [aux_sym__implied_opcode_token4] = ACTIONS(90),
    [aux_sym__implied_opcode_token5] = ACTIONS(90),
    [aux_sym__implied_opcode_token6] = ACTIONS(90),
    [aux_sym__implied_opcode_token7] = ACTIONS(90),
    [aux_sym__implied_opcode_token8] = ACTIONS(90),
    [aux_sym__implied_opcode_token9] = ACTIONS(90),
    [aux_sym__implied_opcode_token10] = ACTIONS(90),
    [aux_sym__implied_opcode_token11] = ACTIONS(90),
    [aux_sym__implied_opcode_token12] = ACTIONS(90),
    [aux_sym__implied_opcode_token13] = ACTIONS(90),
    [aux_sym__implied_opcode_token14] = ACTIONS(90),
    [aux_sym__implied_opcode_token15] = ACTIONS(90),
    [aux_sym__implied_opcode_token16] = ACTIONS(90),
    [aux_sym__implied_opcode_token17] = ACTIONS(90),
    [aux_sym__implied_opcode_token18] = ACTIONS(90),
    [aux_sym__implied_opcode_token19] = ACTIONS(90),
    [aux_sym__implied_opcode_token20] = ACTIONS(90),
    [aux_sym__implied_opcode_token21] = ACTIONS(90),
    [aux_sym__implied_opcode_token22] = ACTIONS(90),
    [aux_sym__implied_opcode_token23] = ACTIONS(90),
    [aux_sym__implied_opcode_token24] = ACTIONS(90),
    [aux_sym__implied_opcode_token25] = ACTIONS(90),
    [aux_sym__implied_opcode_token26] = ACTIONS(90),
    [aux_sym__implied_opcode_token27] = ACTIONS(90),
    [aux_sym__implied_opcode_token28] = ACTIONS(90),
    [aux_sym__implied_opcode_token29] = ACTIONS(90),
    [aux_sym__implied_opcode_token30] = ACTIONS(90),
    [aux_sym__implied_opcode_token31] = ACTIONS(90),
    [aux_sym__implied_opcode_token32] = ACTIONS(90),
    [aux_sym__implied_opcode_token33] = ACTIONS(90),
    [aux_sym__implied_opcode_token34] = ACTIONS(90),
    [aux_sym__implied_opcode_token35] = ACTIONS(90),
    [aux_sym__implied_opcode_token36] = ACTIONS(90),
    [aux_sym__implied_opcode_token37] = ACTIONS(90),
    [aux_sym__relative_opcode_token1] = ACTIONS(90),
    [aux_sym__relative_opcode_token2] = ACTIONS(90),
    [aux_sym__relative_opcode_token3] = ACTIONS(90),
    [aux_sym__relative_opcode_token4] = ACTIONS(90),
    [aux_sym__relative_opcode_token5] = ACTIONS(90),
    [aux_sym__relative_opcode_token6] = ACTIONS(90),
    [aux_sym__relative_opcode_token7] = ACTIONS(90),
    [aux_sym__relative_opcode_token8] = ACTIONS(90),
    [aux_sym__relative_opcode_token9] = ACTIONS(90),
    [aux_sym__immediate_opcode_token1] = ACTIONS(90),
    [aux_sym__immediate_opcode_token2] = ACTIONS(90),
    [aux_sym__immediate_opcode_token3] = ACTIONS(90),
    [aux_sym__immediate_opcode_token4] = ACTIONS(90),
    [aux_sym__immediate_opcode_token5] = ACTIONS(90),
    [aux_sym__immediate_opcode_token6] = ACTIONS(90),
    [aux_sym__immediate_opcode_token7] = ACTIONS(90),
    [aux_sym__immediate_opcode_token8] = ACTIONS(90),
    [aux_sym__immediate_opcode_token9] = ACTIONS(90),
    [aux_sym__immediate_opcode_token10] = ACTIONS(90),
    [aux_sym__immediate_opcode_token11] = ACTIONS(90),
    [aux_sym__immediate_opcode_token12] = ACTIONS(90),
    [aux_sym__absolute_opcode_token1] = ACTIONS(90),
    [aux_sym__absolute_opcode_token2] = ACTIONS(90),
    [aux_sym__absolute_opcode_token3] = ACTIONS(90),
    [aux_sym__absolute_opcode_token4] = ACTIONS(90),
    [aux_sym__absolute_opcode_token5] = ACTIONS(90),
    [aux_sym__absolute_opcode_token6] = ACTIONS(90),
    [aux_sym__absolute_opcode_token7] = ACTIONS(90),
    [aux_sym__absolute_opcode_token8] = ACTIONS(90),
    [sym_local_label] = ACTIONS(90),
    [sym_global_label] = ACTIONS(90),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(94),
    [aux_sym__ext_name_token1] = ACTIONS(94),
    [aux_sym__sec_name_token1] = ACTIONS(94),
    [aux_sym__word_name_token1] = ACTIONS(94),
    [aux_sym__byte_name_token1] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_LT_LT] = ACTIONS(92),
    [anon_sym_GT_GT] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [aux_sym__implied_opcode_token1] = ACTIONS(94),
    [aux_sym__implied_opcode_token2] = ACTIONS(94),
    [aux_sym__implied_opcode_token3] = ACTIONS(94),
    [aux_sym__implied_opcode_token4] = ACTIONS(94),
    [aux_sym__implied_opcode_token5] = ACTIONS(94),
    [aux_sym__implied_opcode_token6] = ACTIONS(94),
    [aux_sym__implied_opcode_token7] = ACTIONS(94),
    [aux_sym__implied_opcode_token8] = ACTIONS(94),
    [aux_sym__implied_opcode_token9] = ACTIONS(94),
    [aux_sym__implied_opcode_token10] = ACTIONS(94),
    [aux_sym__implied_opcode_token11] = ACTIONS(94),
    [aux_sym__implied_opcode_token12] = ACTIONS(94),
    [aux_sym__implied_opcode_token13] = ACTIONS(94),
    [aux_sym__implied_opcode_token14] = ACTIONS(94),
    [aux_sym__implied_opcode_token15] = ACTIONS(94),
    [aux_sym__implied_opcode_token16] = ACTIONS(94),
    [aux_sym__implied_opcode_token17] = ACTIONS(94),
    [aux_sym__implied_opcode_token18] = ACTIONS(94),
    [aux_sym__implied_opcode_token19] = ACTIONS(94),
    [aux_sym__implied_opcode_token20] = ACTIONS(94),
    [aux_sym__implied_opcode_token21] = ACTIONS(94),
    [aux_sym__implied_opcode_token22] = ACTIONS(94),
    [aux_sym__implied_opcode_token23] = ACTIONS(94),
    [aux_sym__implied_opcode_token24] = ACTIONS(94),
    [aux_sym__implied_opcode_token25] = ACTIONS(94),
    [aux_sym__implied_opcode_token26] = ACTIONS(94),
    [aux_sym__implied_opcode_token27] = ACTIONS(94),
    [aux_sym__implied_opcode_token28] = ACTIONS(94),
    [aux_sym__implied_opcode_token29] = ACTIONS(94),
    [aux_sym__implied_opcode_token30] = ACTIONS(94),
    [aux_sym__implied_opcode_token31] = ACTIONS(94),
    [aux_sym__implied_opcode_token32] = ACTIONS(94),
    [aux_sym__implied_opcode_token33] = ACTIONS(94),
    [aux_sym__implied_opcode_token34] = ACTIONS(94),
    [aux_sym__implied_opcode_token35] = ACTIONS(94),
    [aux_sym__implied_opcode_token36] = ACTIONS(94),
    [aux_sym__implied_opcode_token37] = ACTIONS(94),
    [aux_sym__relative_opcode_token1] = ACTIONS(94),
    [aux_sym__relative_opcode_token2] = ACTIONS(94),
    [aux_sym__relative_opcode_token3] = ACTIONS(94),
    [aux_sym__relative_opcode_token4] = ACTIONS(94),
    [aux_sym__relative_opcode_token5] = ACTIONS(94),
    [aux_sym__relative_opcode_token6] = ACTIONS(94),
    [aux_sym__relative_opcode_token7] = ACTIONS(94),
    [aux_sym__relative_opcode_token8] = ACTIONS(94),
    [aux_sym__relative_opcode_token9] = ACTIONS(94),
    [aux_sym__immediate_opcode_token1] = ACTIONS(94),
    [aux_sym__immediate_opcode_token2] = ACTIONS(94),
    [aux_sym__immediate_opcode_token3] = ACTIONS(94),
    [aux_sym__immediate_opcode_token4] = ACTIONS(94),
    [aux_sym__immediate_opcode_token5] = ACTIONS(94),
    [aux_sym__immediate_opcode_token6] = ACTIONS(94),
    [aux_sym__immediate_opcode_token7] = ACTIONS(94),
    [aux_sym__immediate_opcode_token8] = ACTIONS(94),
    [aux_sym__immediate_opcode_token9] = ACTIONS(94),
    [aux_sym__immediate_opcode_token10] = ACTIONS(94),
    [aux_sym__immediate_opcode_token11] = ACTIONS(94),
    [aux_sym__immediate_opcode_token12] = ACTIONS(94),
    [aux_sym__absolute_opcode_token1] = ACTIONS(94),
    [aux_sym__absolute_opcode_token2] = ACTIONS(94),
    [aux_sym__absolute_opcode_token3] = ACTIONS(94),
    [aux_sym__absolute_opcode_token4] = ACTIONS(94),
    [aux_sym__absolute_opcode_token5] = ACTIONS(94),
    [aux_sym__absolute_opcode_token6] = ACTIONS(94),
    [aux_sym__absolute_opcode_token7] = ACTIONS(94),
    [aux_sym__absolute_opcode_token8] = ACTIONS(94),
    [sym_local_label] = ACTIONS(94),
    [sym_global_label] = ACTIONS(94),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(98),
    [aux_sym__ext_name_token1] = ACTIONS(98),
    [aux_sym__sec_name_token1] = ACTIONS(98),
    [aux_sym__word_name_token1] = ACTIONS(98),
    [aux_sym__byte_name_token1] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [aux_sym__implied_opcode_token1] = ACTIONS(98),
    [aux_sym__implied_opcode_token2] = ACTIONS(98),
    [aux_sym__implied_opcode_token3] = ACTIONS(98),
    [aux_sym__implied_opcode_token4] = ACTIONS(98),
    [aux_sym__implied_opcode_token5] = ACTIONS(98),
    [aux_sym__implied_opcode_token6] = ACTIONS(98),
    [aux_sym__implied_opcode_token7] = ACTIONS(98),
    [aux_sym__implied_opcode_token8] = ACTIONS(98),
    [aux_sym__implied_opcode_token9] = ACTIONS(98),
    [aux_sym__implied_opcode_token10] = ACTIONS(98),
    [aux_sym__implied_opcode_token11] = ACTIONS(98),
    [aux_sym__implied_opcode_token12] = ACTIONS(98),
    [aux_sym__implied_opcode_token13] = ACTIONS(98),
    [aux_sym__implied_opcode_token14] = ACTIONS(98),
    [aux_sym__implied_opcode_token15] = ACTIONS(98),
    [aux_sym__implied_opcode_token16] = ACTIONS(98),
    [aux_sym__implied_opcode_token17] = ACTIONS(98),
    [aux_sym__implied_opcode_token18] = ACTIONS(98),
    [aux_sym__implied_opcode_token19] = ACTIONS(98),
    [aux_sym__implied_opcode_token20] = ACTIONS(98),
    [aux_sym__implied_opcode_token21] = ACTIONS(98),
    [aux_sym__implied_opcode_token22] = ACTIONS(98),
    [aux_sym__implied_opcode_token23] = ACTIONS(98),
    [aux_sym__implied_opcode_token24] = ACTIONS(98),
    [aux_sym__implied_opcode_token25] = ACTIONS(98),
    [aux_sym__implied_opcode_token26] = ACTIONS(98),
    [aux_sym__implied_opcode_token27] = ACTIONS(98),
    [aux_sym__implied_opcode_token28] = ACTIONS(98),
    [aux_sym__implied_opcode_token29] = ACTIONS(98),
    [aux_sym__implied_opcode_token30] = ACTIONS(98),
    [aux_sym__implied_opcode_token31] = ACTIONS(98),
    [aux_sym__implied_opcode_token32] = ACTIONS(98),
    [aux_sym__implied_opcode_token33] = ACTIONS(98),
    [aux_sym__implied_opcode_token34] = ACTIONS(98),
    [aux_sym__implied_opcode_token35] = ACTIONS(98),
    [aux_sym__implied_opcode_token36] = ACTIONS(98),
    [aux_sym__implied_opcode_token37] = ACTIONS(98),
    [aux_sym__relative_opcode_token1] = ACTIONS(98),
    [aux_sym__relative_opcode_token2] = ACTIONS(98),
    [aux_sym__relative_opcode_token3] = ACTIONS(98),
    [aux_sym__relative_opcode_token4] = ACTIONS(98),
    [aux_sym__relative_opcode_token5] = ACTIONS(98),
    [aux_sym__relative_opcode_token6] = ACTIONS(98),
    [aux_sym__relative_opcode_token7] = ACTIONS(98),
    [aux_sym__relative_opcode_token8] = ACTIONS(98),
    [aux_sym__relative_opcode_token9] = ACTIONS(98),
    [aux_sym__immediate_opcode_token1] = ACTIONS(98),
    [aux_sym__immediate_opcode_token2] = ACTIONS(98),
    [aux_sym__immediate_opcode_token3] = ACTIONS(98),
    [aux_sym__immediate_opcode_token4] = ACTIONS(98),
    [aux_sym__immediate_opcode_token5] = ACTIONS(98),
    [aux_sym__immediate_opcode_token6] = ACTIONS(98),
    [aux_sym__immediate_opcode_token7] = ACTIONS(98),
    [aux_sym__immediate_opcode_token8] = ACTIONS(98),
    [aux_sym__immediate_opcode_token9] = ACTIONS(98),
    [aux_sym__immediate_opcode_token10] = ACTIONS(98),
    [aux_sym__immediate_opcode_token11] = ACTIONS(98),
    [aux_sym__immediate_opcode_token12] = ACTIONS(98),
    [aux_sym__absolute_opcode_token1] = ACTIONS(98),
    [aux_sym__absolute_opcode_token2] = ACTIONS(98),
    [aux_sym__absolute_opcode_token3] = ACTIONS(98),
    [aux_sym__absolute_opcode_token4] = ACTIONS(98),
    [aux_sym__absolute_opcode_token5] = ACTIONS(98),
    [aux_sym__absolute_opcode_token6] = ACTIONS(98),
    [aux_sym__absolute_opcode_token7] = ACTIONS(98),
    [aux_sym__absolute_opcode_token8] = ACTIONS(98),
    [sym_local_label] = ACTIONS(98),
    [sym_global_label] = ACTIONS(98),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(102),
    [aux_sym__ext_name_token1] = ACTIONS(102),
    [aux_sym__sec_name_token1] = ACTIONS(102),
    [aux_sym__word_name_token1] = ACTIONS(102),
    [aux_sym__byte_name_token1] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [aux_sym__implied_opcode_token1] = ACTIONS(102),
    [aux_sym__implied_opcode_token2] = ACTIONS(102),
    [aux_sym__implied_opcode_token3] = ACTIONS(102),
    [aux_sym__implied_opcode_token4] = ACTIONS(102),
    [aux_sym__implied_opcode_token5] = ACTIONS(102),
    [aux_sym__implied_opcode_token6] = ACTIONS(102),
    [aux_sym__implied_opcode_token7] = ACTIONS(102),
    [aux_sym__implied_opcode_token8] = ACTIONS(102),
    [aux_sym__implied_opcode_token9] = ACTIONS(102),
    [aux_sym__implied_opcode_token10] = ACTIONS(102),
    [aux_sym__implied_opcode_token11] = ACTIONS(102),
    [aux_sym__implied_opcode_token12] = ACTIONS(102),
    [aux_sym__implied_opcode_token13] = ACTIONS(102),
    [aux_sym__implied_opcode_token14] = ACTIONS(102),
    [aux_sym__implied_opcode_token15] = ACTIONS(102),
    [aux_sym__implied_opcode_token16] = ACTIONS(102),
    [aux_sym__implied_opcode_token17] = ACTIONS(102),
    [aux_sym__implied_opcode_token18] = ACTIONS(102),
    [aux_sym__implied_opcode_token19] = ACTIONS(102),
    [aux_sym__implied_opcode_token20] = ACTIONS(102),
    [aux_sym__implied_opcode_token21] = ACTIONS(102),
    [aux_sym__implied_opcode_token22] = ACTIONS(102),
    [aux_sym__implied_opcode_token23] = ACTIONS(102),
    [aux_sym__implied_opcode_token24] = ACTIONS(102),
    [aux_sym__implied_opcode_token25] = ACTIONS(102),
    [aux_sym__implied_opcode_token26] = ACTIONS(102),
    [aux_sym__implied_opcode_token27] = ACTIONS(102),
    [aux_sym__implied_opcode_token28] = ACTIONS(102),
    [aux_sym__implied_opcode_token29] = ACTIONS(102),
    [aux_sym__implied_opcode_token30] = ACTIONS(102),
    [aux_sym__implied_opcode_token31] = ACTIONS(102),
    [aux_sym__implied_opcode_token32] = ACTIONS(102),
    [aux_sym__implied_opcode_token33] = ACTIONS(102),
    [aux_sym__implied_opcode_token34] = ACTIONS(102),
    [aux_sym__implied_opcode_token35] = ACTIONS(102),
    [aux_sym__implied_opcode_token36] = ACTIONS(102),
    [aux_sym__implied_opcode_token37] = ACTIONS(102),
    [aux_sym__relative_opcode_token1] = ACTIONS(102),
    [aux_sym__relative_opcode_token2] = ACTIONS(102),
    [aux_sym__relative_opcode_token3] = ACTIONS(102),
    [aux_sym__relative_opcode_token4] = ACTIONS(102),
    [aux_sym__relative_opcode_token5] = ACTIONS(102),
    [aux_sym__relative_opcode_token6] = ACTIONS(102),
    [aux_sym__relative_opcode_token7] = ACTIONS(102),
    [aux_sym__relative_opcode_token8] = ACTIONS(102),
    [aux_sym__relative_opcode_token9] = ACTIONS(102),
    [aux_sym__immediate_opcode_token1] = ACTIONS(102),
    [aux_sym__immediate_opcode_token2] = ACTIONS(102),
    [aux_sym__immediate_opcode_token3] = ACTIONS(102),
    [aux_sym__immediate_opcode_token4] = ACTIONS(102),
    [aux_sym__immediate_opcode_token5] = ACTIONS(102),
    [aux_sym__immediate_opcode_token6] = ACTIONS(102),
    [aux_sym__immediate_opcode_token7] = ACTIONS(102),
    [aux_sym__immediate_opcode_token8] = ACTIONS(102),
    [aux_sym__immediate_opcode_token9] = ACTIONS(102),
    [aux_sym__immediate_opcode_token10] = ACTIONS(102),
    [aux_sym__immediate_opcode_token11] = ACTIONS(102),
    [aux_sym__immediate_opcode_token12] = ACTIONS(102),
    [aux_sym__absolute_opcode_token1] = ACTIONS(102),
    [aux_sym__absolute_opcode_token2] = ACTIONS(102),
    [aux_sym__absolute_opcode_token3] = ACTIONS(102),
    [aux_sym__absolute_opcode_token4] = ACTIONS(102),
    [aux_sym__absolute_opcode_token5] = ACTIONS(102),
    [aux_sym__absolute_opcode_token6] = ACTIONS(102),
    [aux_sym__absolute_opcode_token7] = ACTIONS(102),
    [aux_sym__absolute_opcode_token8] = ACTIONS(102),
    [sym_local_label] = ACTIONS(102),
    [sym_global_label] = ACTIONS(102),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(106),
    [aux_sym__ext_name_token1] = ACTIONS(106),
    [aux_sym__sec_name_token1] = ACTIONS(106),
    [aux_sym__word_name_token1] = ACTIONS(106),
    [aux_sym__byte_name_token1] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [aux_sym__implied_opcode_token1] = ACTIONS(106),
    [aux_sym__implied_opcode_token2] = ACTIONS(106),
    [aux_sym__implied_opcode_token3] = ACTIONS(106),
    [aux_sym__implied_opcode_token4] = ACTIONS(106),
    [aux_sym__implied_opcode_token5] = ACTIONS(106),
    [aux_sym__implied_opcode_token6] = ACTIONS(106),
    [aux_sym__implied_opcode_token7] = ACTIONS(106),
    [aux_sym__implied_opcode_token8] = ACTIONS(106),
    [aux_sym__implied_opcode_token9] = ACTIONS(106),
    [aux_sym__implied_opcode_token10] = ACTIONS(106),
    [aux_sym__implied_opcode_token11] = ACTIONS(106),
    [aux_sym__implied_opcode_token12] = ACTIONS(106),
    [aux_sym__implied_opcode_token13] = ACTIONS(106),
    [aux_sym__implied_opcode_token14] = ACTIONS(106),
    [aux_sym__implied_opcode_token15] = ACTIONS(106),
    [aux_sym__implied_opcode_token16] = ACTIONS(106),
    [aux_sym__implied_opcode_token17] = ACTIONS(106),
    [aux_sym__implied_opcode_token18] = ACTIONS(106),
    [aux_sym__implied_opcode_token19] = ACTIONS(106),
    [aux_sym__implied_opcode_token20] = ACTIONS(106),
    [aux_sym__implied_opcode_token21] = ACTIONS(106),
    [aux_sym__implied_opcode_token22] = ACTIONS(106),
    [aux_sym__implied_opcode_token23] = ACTIONS(106),
    [aux_sym__implied_opcode_token24] = ACTIONS(106),
    [aux_sym__implied_opcode_token25] = ACTIONS(106),
    [aux_sym__implied_opcode_token26] = ACTIONS(106),
    [aux_sym__implied_opcode_token27] = ACTIONS(106),
    [aux_sym__implied_opcode_token28] = ACTIONS(106),
    [aux_sym__implied_opcode_token29] = ACTIONS(106),
    [aux_sym__implied_opcode_token30] = ACTIONS(106),
    [aux_sym__implied_opcode_token31] = ACTIONS(106),
    [aux_sym__implied_opcode_token32] = ACTIONS(106),
    [aux_sym__implied_opcode_token33] = ACTIONS(106),
    [aux_sym__implied_opcode_token34] = ACTIONS(106),
    [aux_sym__implied_opcode_token35] = ACTIONS(106),
    [aux_sym__implied_opcode_token36] = ACTIONS(106),
    [aux_sym__implied_opcode_token37] = ACTIONS(106),
    [aux_sym__relative_opcode_token1] = ACTIONS(106),
    [aux_sym__relative_opcode_token2] = ACTIONS(106),
    [aux_sym__relative_opcode_token3] = ACTIONS(106),
    [aux_sym__relative_opcode_token4] = ACTIONS(106),
    [aux_sym__relative_opcode_token5] = ACTIONS(106),
    [aux_sym__relative_opcode_token6] = ACTIONS(106),
    [aux_sym__relative_opcode_token7] = ACTIONS(106),
    [aux_sym__relative_opcode_token8] = ACTIONS(106),
    [aux_sym__relative_opcode_token9] = ACTIONS(106),
    [aux_sym__immediate_opcode_token1] = ACTIONS(106),
    [aux_sym__immediate_opcode_token2] = ACTIONS(106),
    [aux_sym__immediate_opcode_token3] = ACTIONS(106),
    [aux_sym__immediate_opcode_token4] = ACTIONS(106),
    [aux_sym__immediate_opcode_token5] = ACTIONS(106),
    [aux_sym__immediate_opcode_token6] = ACTIONS(106),
    [aux_sym__immediate_opcode_token7] = ACTIONS(106),
    [aux_sym__immediate_opcode_token8] = ACTIONS(106),
    [aux_sym__immediate_opcode_token9] = ACTIONS(106),
    [aux_sym__immediate_opcode_token10] = ACTIONS(106),
    [aux_sym__immediate_opcode_token11] = ACTIONS(106),
    [aux_sym__immediate_opcode_token12] = ACTIONS(106),
    [aux_sym__absolute_opcode_token1] = ACTIONS(106),
    [aux_sym__absolute_opcode_token2] = ACTIONS(106),
    [aux_sym__absolute_opcode_token3] = ACTIONS(106),
    [aux_sym__absolute_opcode_token4] = ACTIONS(106),
    [aux_sym__absolute_opcode_token5] = ACTIONS(106),
    [aux_sym__absolute_opcode_token6] = ACTIONS(106),
    [aux_sym__absolute_opcode_token7] = ACTIONS(106),
    [aux_sym__absolute_opcode_token8] = ACTIONS(106),
    [sym_local_label] = ACTIONS(106),
    [sym_global_label] = ACTIONS(106),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(110),
    [aux_sym__ext_name_token1] = ACTIONS(110),
    [aux_sym__sec_name_token1] = ACTIONS(110),
    [aux_sym__word_name_token1] = ACTIONS(110),
    [aux_sym__byte_name_token1] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [aux_sym__implied_opcode_token1] = ACTIONS(110),
    [aux_sym__implied_opcode_token2] = ACTIONS(110),
    [aux_sym__implied_opcode_token3] = ACTIONS(110),
    [aux_sym__implied_opcode_token4] = ACTIONS(110),
    [aux_sym__implied_opcode_token5] = ACTIONS(110),
    [aux_sym__implied_opcode_token6] = ACTIONS(110),
    [aux_sym__implied_opcode_token7] = ACTIONS(110),
    [aux_sym__implied_opcode_token8] = ACTIONS(110),
    [aux_sym__implied_opcode_token9] = ACTIONS(110),
    [aux_sym__implied_opcode_token10] = ACTIONS(110),
    [aux_sym__implied_opcode_token11] = ACTIONS(110),
    [aux_sym__implied_opcode_token12] = ACTIONS(110),
    [aux_sym__implied_opcode_token13] = ACTIONS(110),
    [aux_sym__implied_opcode_token14] = ACTIONS(110),
    [aux_sym__implied_opcode_token15] = ACTIONS(110),
    [aux_sym__implied_opcode_token16] = ACTIONS(110),
    [aux_sym__implied_opcode_token17] = ACTIONS(110),
    [aux_sym__implied_opcode_token18] = ACTIONS(110),
    [aux_sym__implied_opcode_token19] = ACTIONS(110),
    [aux_sym__implied_opcode_token20] = ACTIONS(110),
    [aux_sym__implied_opcode_token21] = ACTIONS(110),
    [aux_sym__implied_opcode_token22] = ACTIONS(110),
    [aux_sym__implied_opcode_token23] = ACTIONS(110),
    [aux_sym__implied_opcode_token24] = ACTIONS(110),
    [aux_sym__implied_opcode_token25] = ACTIONS(110),
    [aux_sym__implied_opcode_token26] = ACTIONS(110),
    [aux_sym__implied_opcode_token27] = ACTIONS(110),
    [aux_sym__implied_opcode_token28] = ACTIONS(110),
    [aux_sym__implied_opcode_token29] = ACTIONS(110),
    [aux_sym__implied_opcode_token30] = ACTIONS(110),
    [aux_sym__implied_opcode_token31] = ACTIONS(110),
    [aux_sym__implied_opcode_token32] = ACTIONS(110),
    [aux_sym__implied_opcode_token33] = ACTIONS(110),
    [aux_sym__implied_opcode_token34] = ACTIONS(110),
    [aux_sym__implied_opcode_token35] = ACTIONS(110),
    [aux_sym__implied_opcode_token36] = ACTIONS(110),
    [aux_sym__implied_opcode_token37] = ACTIONS(110),
    [aux_sym__relative_opcode_token1] = ACTIONS(110),
    [aux_sym__relative_opcode_token2] = ACTIONS(110),
    [aux_sym__relative_opcode_token3] = ACTIONS(110),
    [aux_sym__relative_opcode_token4] = ACTIONS(110),
    [aux_sym__relative_opcode_token5] = ACTIONS(110),
    [aux_sym__relative_opcode_token6] = ACTIONS(110),
    [aux_sym__relative_opcode_token7] = ACTIONS(110),
    [aux_sym__relative_opcode_token8] = ACTIONS(110),
    [aux_sym__relative_opcode_token9] = ACTIONS(110),
    [aux_sym__immediate_opcode_token1] = ACTIONS(110),
    [aux_sym__immediate_opcode_token2] = ACTIONS(110),
    [aux_sym__immediate_opcode_token3] = ACTIONS(110),
    [aux_sym__immediate_opcode_token4] = ACTIONS(110),
    [aux_sym__immediate_opcode_token5] = ACTIONS(110),
    [aux_sym__immediate_opcode_token6] = ACTIONS(110),
    [aux_sym__immediate_opcode_token7] = ACTIONS(110),
    [aux_sym__immediate_opcode_token8] = ACTIONS(110),
    [aux_sym__immediate_opcode_token9] = ACTIONS(110),
    [aux_sym__immediate_opcode_token10] = ACTIONS(110),
    [aux_sym__immediate_opcode_token11] = ACTIONS(110),
    [aux_sym__immediate_opcode_token12] = ACTIONS(110),
    [aux_sym__absolute_opcode_token1] = ACTIONS(110),
    [aux_sym__absolute_opcode_token2] = ACTIONS(110),
    [aux_sym__absolute_opcode_token3] = ACTIONS(110),
    [aux_sym__absolute_opcode_token4] = ACTIONS(110),
    [aux_sym__absolute_opcode_token5] = ACTIONS(110),
    [aux_sym__absolute_opcode_token6] = ACTIONS(110),
    [aux_sym__absolute_opcode_token7] = ACTIONS(110),
    [aux_sym__absolute_opcode_token8] = ACTIONS(110),
    [sym_local_label] = ACTIONS(110),
    [sym_global_label] = ACTIONS(110),
  },
  [12] = {
    [sym__reg_y] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(114),
    [aux_sym__ext_name_token1] = ACTIONS(114),
    [aux_sym__sec_name_token1] = ACTIONS(114),
    [aux_sym__word_name_token1] = ACTIONS(114),
    [aux_sym__byte_name_token1] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(116),
    [aux_sym__implied_opcode_token1] = ACTIONS(114),
    [aux_sym__implied_opcode_token2] = ACTIONS(114),
    [aux_sym__implied_opcode_token3] = ACTIONS(114),
    [aux_sym__implied_opcode_token4] = ACTIONS(114),
    [aux_sym__implied_opcode_token5] = ACTIONS(114),
    [aux_sym__implied_opcode_token6] = ACTIONS(114),
    [aux_sym__implied_opcode_token7] = ACTIONS(114),
    [aux_sym__implied_opcode_token8] = ACTIONS(114),
    [aux_sym__implied_opcode_token9] = ACTIONS(114),
    [aux_sym__implied_opcode_token10] = ACTIONS(114),
    [aux_sym__implied_opcode_token11] = ACTIONS(114),
    [aux_sym__implied_opcode_token12] = ACTIONS(114),
    [aux_sym__implied_opcode_token13] = ACTIONS(114),
    [aux_sym__implied_opcode_token14] = ACTIONS(114),
    [aux_sym__implied_opcode_token15] = ACTIONS(114),
    [aux_sym__implied_opcode_token16] = ACTIONS(114),
    [aux_sym__implied_opcode_token17] = ACTIONS(114),
    [aux_sym__implied_opcode_token18] = ACTIONS(114),
    [aux_sym__implied_opcode_token19] = ACTIONS(114),
    [aux_sym__implied_opcode_token20] = ACTIONS(114),
    [aux_sym__implied_opcode_token21] = ACTIONS(114),
    [aux_sym__implied_opcode_token22] = ACTIONS(114),
    [aux_sym__implied_opcode_token23] = ACTIONS(114),
    [aux_sym__implied_opcode_token24] = ACTIONS(114),
    [aux_sym__implied_opcode_token25] = ACTIONS(114),
    [aux_sym__implied_opcode_token26] = ACTIONS(114),
    [aux_sym__implied_opcode_token27] = ACTIONS(114),
    [aux_sym__implied_opcode_token28] = ACTIONS(114),
    [aux_sym__implied_opcode_token29] = ACTIONS(114),
    [aux_sym__implied_opcode_token30] = ACTIONS(114),
    [aux_sym__implied_opcode_token31] = ACTIONS(114),
    [aux_sym__implied_opcode_token32] = ACTIONS(114),
    [aux_sym__implied_opcode_token33] = ACTIONS(114),
    [aux_sym__implied_opcode_token34] = ACTIONS(114),
    [aux_sym__implied_opcode_token35] = ACTIONS(114),
    [aux_sym__implied_opcode_token36] = ACTIONS(114),
    [aux_sym__implied_opcode_token37] = ACTIONS(114),
    [aux_sym__relative_opcode_token1] = ACTIONS(114),
    [aux_sym__relative_opcode_token2] = ACTIONS(114),
    [aux_sym__relative_opcode_token3] = ACTIONS(114),
    [aux_sym__relative_opcode_token4] = ACTIONS(114),
    [aux_sym__relative_opcode_token5] = ACTIONS(114),
    [aux_sym__relative_opcode_token6] = ACTIONS(114),
    [aux_sym__relative_opcode_token7] = ACTIONS(114),
    [aux_sym__relative_opcode_token8] = ACTIONS(114),
    [aux_sym__relative_opcode_token9] = ACTIONS(114),
    [aux_sym__immediate_opcode_token1] = ACTIONS(114),
    [aux_sym__immediate_opcode_token2] = ACTIONS(114),
    [aux_sym__immediate_opcode_token3] = ACTIONS(114),
    [aux_sym__immediate_opcode_token4] = ACTIONS(114),
    [aux_sym__immediate_opcode_token5] = ACTIONS(114),
    [aux_sym__immediate_opcode_token6] = ACTIONS(114),
    [aux_sym__immediate_opcode_token7] = ACTIONS(114),
    [aux_sym__immediate_opcode_token8] = ACTIONS(114),
    [aux_sym__immediate_opcode_token9] = ACTIONS(114),
    [aux_sym__immediate_opcode_token10] = ACTIONS(114),
    [aux_sym__immediate_opcode_token11] = ACTIONS(114),
    [aux_sym__immediate_opcode_token12] = ACTIONS(114),
    [aux_sym__absolute_opcode_token1] = ACTIONS(114),
    [aux_sym__absolute_opcode_token2] = ACTIONS(114),
    [aux_sym__absolute_opcode_token3] = ACTIONS(114),
    [aux_sym__absolute_opcode_token4] = ACTIONS(114),
    [aux_sym__absolute_opcode_token5] = ACTIONS(114),
    [aux_sym__absolute_opcode_token6] = ACTIONS(114),
    [aux_sym__absolute_opcode_token7] = ACTIONS(114),
    [aux_sym__absolute_opcode_token8] = ACTIONS(114),
    [sym_local_label] = ACTIONS(114),
    [sym_global_label] = ACTIONS(114),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(120),
    [sym__ws_sep] = ACTIONS(122),
    [aux_sym__inc_name_token1] = ACTIONS(124),
    [aux_sym__ext_name_token1] = ACTIONS(124),
    [aux_sym__sec_name_token1] = ACTIONS(124),
    [aux_sym__word_name_token1] = ACTIONS(124),
    [aux_sym__byte_name_token1] = ACTIONS(124),
    [aux_sym__implied_opcode_token1] = ACTIONS(124),
    [aux_sym__implied_opcode_token2] = ACTIONS(124),
    [aux_sym__implied_opcode_token3] = ACTIONS(124),
    [aux_sym__implied_opcode_token4] = ACTIONS(124),
    [aux_sym__implied_opcode_token5] = ACTIONS(124),
    [aux_sym__implied_opcode_token6] = ACTIONS(124),
    [aux_sym__implied_opcode_token7] = ACTIONS(124),
    [aux_sym__implied_opcode_token8] = ACTIONS(124),
    [aux_sym__implied_opcode_token9] = ACTIONS(124),
    [aux_sym__implied_opcode_token10] = ACTIONS(124),
    [aux_sym__implied_opcode_token11] = ACTIONS(124),
    [aux_sym__implied_opcode_token12] = ACTIONS(124),
    [aux_sym__implied_opcode_token13] = ACTIONS(124),
    [aux_sym__implied_opcode_token14] = ACTIONS(124),
    [aux_sym__implied_opcode_token15] = ACTIONS(124),
    [aux_sym__implied_opcode_token16] = ACTIONS(124),
    [aux_sym__implied_opcode_token17] = ACTIONS(124),
    [aux_sym__implied_opcode_token18] = ACTIONS(124),
    [aux_sym__implied_opcode_token19] = ACTIONS(124),
    [aux_sym__implied_opcode_token20] = ACTIONS(124),
    [aux_sym__implied_opcode_token21] = ACTIONS(124),
    [aux_sym__implied_opcode_token22] = ACTIONS(124),
    [aux_sym__implied_opcode_token23] = ACTIONS(124),
    [aux_sym__implied_opcode_token24] = ACTIONS(124),
    [aux_sym__implied_opcode_token25] = ACTIONS(124),
    [aux_sym__implied_opcode_token26] = ACTIONS(124),
    [aux_sym__implied_opcode_token27] = ACTIONS(124),
    [aux_sym__implied_opcode_token28] = ACTIONS(124),
    [aux_sym__implied_opcode_token29] = ACTIONS(124),
    [aux_sym__implied_opcode_token30] = ACTIONS(124),
    [aux_sym__implied_opcode_token31] = ACTIONS(124),
    [aux_sym__implied_opcode_token32] = ACTIONS(124),
    [aux_sym__implied_opcode_token33] = ACTIONS(124),
    [aux_sym__implied_opcode_token34] = ACTIONS(124),
    [aux_sym__implied_opcode_token35] = ACTIONS(124),
    [aux_sym__implied_opcode_token36] = ACTIONS(124),
    [aux_sym__implied_opcode_token37] = ACTIONS(124),
    [aux_sym__relative_opcode_token1] = ACTIONS(124),
    [aux_sym__relative_opcode_token2] = ACTIONS(124),
    [aux_sym__relative_opcode_token3] = ACTIONS(124),
    [aux_sym__relative_opcode_token4] = ACTIONS(124),
    [aux_sym__relative_opcode_token5] = ACTIONS(124),
    [aux_sym__relative_opcode_token6] = ACTIONS(124),
    [aux_sym__relative_opcode_token7] = ACTIONS(124),
    [aux_sym__relative_opcode_token8] = ACTIONS(124),
    [aux_sym__relative_opcode_token9] = ACTIONS(124),
    [aux_sym__immediate_opcode_token1] = ACTIONS(124),
    [aux_sym__immediate_opcode_token2] = ACTIONS(124),
    [aux_sym__immediate_opcode_token3] = ACTIONS(124),
    [aux_sym__immediate_opcode_token4] = ACTIONS(124),
    [aux_sym__immediate_opcode_token5] = ACTIONS(124),
    [aux_sym__immediate_opcode_token6] = ACTIONS(124),
    [aux_sym__immediate_opcode_token7] = ACTIONS(124),
    [aux_sym__immediate_opcode_token8] = ACTIONS(124),
    [aux_sym__immediate_opcode_token9] = ACTIONS(124),
    [aux_sym__immediate_opcode_token10] = ACTIONS(124),
    [aux_sym__immediate_opcode_token11] = ACTIONS(124),
    [aux_sym__immediate_opcode_token12] = ACTIONS(124),
    [aux_sym__absolute_opcode_token1] = ACTIONS(124),
    [aux_sym__absolute_opcode_token2] = ACTIONS(124),
    [aux_sym__absolute_opcode_token3] = ACTIONS(124),
    [aux_sym__absolute_opcode_token4] = ACTIONS(124),
    [aux_sym__absolute_opcode_token5] = ACTIONS(124),
    [aux_sym__absolute_opcode_token6] = ACTIONS(124),
    [aux_sym__absolute_opcode_token7] = ACTIONS(124),
    [aux_sym__absolute_opcode_token8] = ACTIONS(124),
    [sym_local_label] = ACTIONS(124),
    [sym_global_label] = ACTIONS(124),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(128),
    [aux_sym__ext_name_token1] = ACTIONS(128),
    [aux_sym__sec_name_token1] = ACTIONS(128),
    [aux_sym__word_name_token1] = ACTIONS(128),
    [aux_sym__byte_name_token1] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(126),
    [aux_sym__implied_opcode_token1] = ACTIONS(128),
    [aux_sym__implied_opcode_token2] = ACTIONS(128),
    [aux_sym__implied_opcode_token3] = ACTIONS(128),
    [aux_sym__implied_opcode_token4] = ACTIONS(128),
    [aux_sym__implied_opcode_token5] = ACTIONS(128),
    [aux_sym__implied_opcode_token6] = ACTIONS(128),
    [aux_sym__implied_opcode_token7] = ACTIONS(128),
    [aux_sym__implied_opcode_token8] = ACTIONS(128),
    [aux_sym__implied_opcode_token9] = ACTIONS(128),
    [aux_sym__implied_opcode_token10] = ACTIONS(128),
    [aux_sym__implied_opcode_token11] = ACTIONS(128),
    [aux_sym__implied_opcode_token12] = ACTIONS(128),
    [aux_sym__implied_opcode_token13] = ACTIONS(128),
    [aux_sym__implied_opcode_token14] = ACTIONS(128),
    [aux_sym__implied_opcode_token15] = ACTIONS(128),
    [aux_sym__implied_opcode_token16] = ACTIONS(128),
    [aux_sym__implied_opcode_token17] = ACTIONS(128),
    [aux_sym__implied_opcode_token18] = ACTIONS(128),
    [aux_sym__implied_opcode_token19] = ACTIONS(128),
    [aux_sym__implied_opcode_token20] = ACTIONS(128),
    [aux_sym__implied_opcode_token21] = ACTIONS(128),
    [aux_sym__implied_opcode_token22] = ACTIONS(128),
    [aux_sym__implied_opcode_token23] = ACTIONS(128),
    [aux_sym__implied_opcode_token24] = ACTIONS(128),
    [aux_sym__implied_opcode_token25] = ACTIONS(128),
    [aux_sym__implied_opcode_token26] = ACTIONS(128),
    [aux_sym__implied_opcode_token27] = ACTIONS(128),
    [aux_sym__implied_opcode_token28] = ACTIONS(128),
    [aux_sym__implied_opcode_token29] = ACTIONS(128),
    [aux_sym__implied_opcode_token30] = ACTIONS(128),
    [aux_sym__implied_opcode_token31] = ACTIONS(128),
    [aux_sym__implied_opcode_token32] = ACTIONS(128),
    [aux_sym__implied_opcode_token33] = ACTIONS(128),
    [aux_sym__implied_opcode_token34] = ACTIONS(128),
    [aux_sym__implied_opcode_token35] = ACTIONS(128),
    [aux_sym__implied_opcode_token36] = ACTIONS(128),
    [aux_sym__implied_opcode_token37] = ACTIONS(128),
    [aux_sym__relative_opcode_token1] = ACTIONS(128),
    [aux_sym__relative_opcode_token2] = ACTIONS(128),
    [aux_sym__relative_opcode_token3] = ACTIONS(128),
    [aux_sym__relative_opcode_token4] = ACTIONS(128),
    [aux_sym__relative_opcode_token5] = ACTIONS(128),
    [aux_sym__relative_opcode_token6] = ACTIONS(128),
    [aux_sym__relative_opcode_token7] = ACTIONS(128),
    [aux_sym__relative_opcode_token8] = ACTIONS(128),
    [aux_sym__relative_opcode_token9] = ACTIONS(128),
    [aux_sym__immediate_opcode_token1] = ACTIONS(128),
    [aux_sym__immediate_opcode_token2] = ACTIONS(128),
    [aux_sym__immediate_opcode_token3] = ACTIONS(128),
    [aux_sym__immediate_opcode_token4] = ACTIONS(128),
    [aux_sym__immediate_opcode_token5] = ACTIONS(128),
    [aux_sym__immediate_opcode_token6] = ACTIONS(128),
    [aux_sym__immediate_opcode_token7] = ACTIONS(128),
    [aux_sym__immediate_opcode_token8] = ACTIONS(128),
    [aux_sym__immediate_opcode_token9] = ACTIONS(128),
    [aux_sym__immediate_opcode_token10] = ACTIONS(128),
    [aux_sym__immediate_opcode_token11] = ACTIONS(128),
    [aux_sym__immediate_opcode_token12] = ACTIONS(128),
    [aux_sym__absolute_opcode_token1] = ACTIONS(128),
    [aux_sym__absolute_opcode_token2] = ACTIONS(128),
    [aux_sym__absolute_opcode_token3] = ACTIONS(128),
    [aux_sym__absolute_opcode_token4] = ACTIONS(128),
    [aux_sym__absolute_opcode_token5] = ACTIONS(128),
    [aux_sym__absolute_opcode_token6] = ACTIONS(128),
    [aux_sym__absolute_opcode_token7] = ACTIONS(128),
    [aux_sym__absolute_opcode_token8] = ACTIONS(128),
    [sym_local_label] = ACTIONS(128),
    [sym_global_label] = ACTIONS(128),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(132),
    [aux_sym__ext_name_token1] = ACTIONS(132),
    [aux_sym__sec_name_token1] = ACTIONS(132),
    [aux_sym__word_name_token1] = ACTIONS(132),
    [aux_sym__byte_name_token1] = ACTIONS(132),
    [aux_sym__implied_opcode_token1] = ACTIONS(132),
    [aux_sym__implied_opcode_token2] = ACTIONS(132),
    [aux_sym__implied_opcode_token3] = ACTIONS(132),
    [aux_sym__implied_opcode_token4] = ACTIONS(132),
    [aux_sym__implied_opcode_token5] = ACTIONS(132),
    [aux_sym__implied_opcode_token6] = ACTIONS(132),
    [aux_sym__implied_opcode_token7] = ACTIONS(132),
    [aux_sym__implied_opcode_token8] = ACTIONS(132),
    [aux_sym__implied_opcode_token9] = ACTIONS(132),
    [aux_sym__implied_opcode_token10] = ACTIONS(132),
    [aux_sym__implied_opcode_token11] = ACTIONS(132),
    [aux_sym__implied_opcode_token12] = ACTIONS(132),
    [aux_sym__implied_opcode_token13] = ACTIONS(132),
    [aux_sym__implied_opcode_token14] = ACTIONS(132),
    [aux_sym__implied_opcode_token15] = ACTIONS(132),
    [aux_sym__implied_opcode_token16] = ACTIONS(132),
    [aux_sym__implied_opcode_token17] = ACTIONS(132),
    [aux_sym__implied_opcode_token18] = ACTIONS(132),
    [aux_sym__implied_opcode_token19] = ACTIONS(132),
    [aux_sym__implied_opcode_token20] = ACTIONS(132),
    [aux_sym__implied_opcode_token21] = ACTIONS(132),
    [aux_sym__implied_opcode_token22] = ACTIONS(132),
    [aux_sym__implied_opcode_token23] = ACTIONS(132),
    [aux_sym__implied_opcode_token24] = ACTIONS(132),
    [aux_sym__implied_opcode_token25] = ACTIONS(132),
    [aux_sym__implied_opcode_token26] = ACTIONS(132),
    [aux_sym__implied_opcode_token27] = ACTIONS(132),
    [aux_sym__implied_opcode_token28] = ACTIONS(132),
    [aux_sym__implied_opcode_token29] = ACTIONS(132),
    [aux_sym__implied_opcode_token30] = ACTIONS(132),
    [aux_sym__implied_opcode_token31] = ACTIONS(132),
    [aux_sym__implied_opcode_token32] = ACTIONS(132),
    [aux_sym__implied_opcode_token33] = ACTIONS(132),
    [aux_sym__implied_opcode_token34] = ACTIONS(132),
    [aux_sym__implied_opcode_token35] = ACTIONS(132),
    [aux_sym__implied_opcode_token36] = ACTIONS(132),
    [aux_sym__implied_opcode_token37] = ACTIONS(132),
    [aux_sym__relative_opcode_token1] = ACTIONS(132),
    [aux_sym__relative_opcode_token2] = ACTIONS(132),
    [aux_sym__relative_opcode_token3] = ACTIONS(132),
    [aux_sym__relative_opcode_token4] = ACTIONS(132),
    [aux_sym__relative_opcode_token5] = ACTIONS(132),
    [aux_sym__relative_opcode_token6] = ACTIONS(132),
    [aux_sym__relative_opcode_token7] = ACTIONS(132),
    [aux_sym__relative_opcode_token8] = ACTIONS(132),
    [aux_sym__relative_opcode_token9] = ACTIONS(132),
    [aux_sym__immediate_opcode_token1] = ACTIONS(132),
    [aux_sym__immediate_opcode_token2] = ACTIONS(132),
    [aux_sym__immediate_opcode_token3] = ACTIONS(132),
    [aux_sym__immediate_opcode_token4] = ACTIONS(132),
    [aux_sym__immediate_opcode_token5] = ACTIONS(132),
    [aux_sym__immediate_opcode_token6] = ACTIONS(132),
    [aux_sym__immediate_opcode_token7] = ACTIONS(132),
    [aux_sym__immediate_opcode_token8] = ACTIONS(132),
    [aux_sym__immediate_opcode_token9] = ACTIONS(132),
    [aux_sym__immediate_opcode_token10] = ACTIONS(132),
    [aux_sym__immediate_opcode_token11] = ACTIONS(132),
    [aux_sym__immediate_opcode_token12] = ACTIONS(132),
    [aux_sym__absolute_opcode_token1] = ACTIONS(132),
    [aux_sym__absolute_opcode_token2] = ACTIONS(132),
    [aux_sym__absolute_opcode_token3] = ACTIONS(132),
    [aux_sym__absolute_opcode_token4] = ACTIONS(132),
    [aux_sym__absolute_opcode_token5] = ACTIONS(132),
    [aux_sym__absolute_opcode_token6] = ACTIONS(132),
    [aux_sym__absolute_opcode_token7] = ACTIONS(132),
    [aux_sym__absolute_opcode_token8] = ACTIONS(132),
    [sym_local_label] = ACTIONS(132),
    [sym_global_label] = ACTIONS(132),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(136),
    [aux_sym__ext_name_token1] = ACTIONS(136),
    [aux_sym__sec_name_token1] = ACTIONS(136),
    [aux_sym__word_name_token1] = ACTIONS(136),
    [aux_sym__byte_name_token1] = ACTIONS(136),
    [aux_sym__implied_opcode_token1] = ACTIONS(136),
    [aux_sym__implied_opcode_token2] = ACTIONS(136),
    [aux_sym__implied_opcode_token3] = ACTIONS(136),
    [aux_sym__implied_opcode_token4] = ACTIONS(136),
    [aux_sym__implied_opcode_token5] = ACTIONS(136),
    [aux_sym__implied_opcode_token6] = ACTIONS(136),
    [aux_sym__implied_opcode_token7] = ACTIONS(136),
    [aux_sym__implied_opcode_token8] = ACTIONS(136),
    [aux_sym__implied_opcode_token9] = ACTIONS(136),
    [aux_sym__implied_opcode_token10] = ACTIONS(136),
    [aux_sym__implied_opcode_token11] = ACTIONS(136),
    [aux_sym__implied_opcode_token12] = ACTIONS(136),
    [aux_sym__implied_opcode_token13] = ACTIONS(136),
    [aux_sym__implied_opcode_token14] = ACTIONS(136),
    [aux_sym__implied_opcode_token15] = ACTIONS(136),
    [aux_sym__implied_opcode_token16] = ACTIONS(136),
    [aux_sym__implied_opcode_token17] = ACTIONS(136),
    [aux_sym__implied_opcode_token18] = ACTIONS(136),
    [aux_sym__implied_opcode_token19] = ACTIONS(136),
    [aux_sym__implied_opcode_token20] = ACTIONS(136),
    [aux_sym__implied_opcode_token21] = ACTIONS(136),
    [aux_sym__implied_opcode_token22] = ACTIONS(136),
    [aux_sym__implied_opcode_token23] = ACTIONS(136),
    [aux_sym__implied_opcode_token24] = ACTIONS(136),
    [aux_sym__implied_opcode_token25] = ACTIONS(136),
    [aux_sym__implied_opcode_token26] = ACTIONS(136),
    [aux_sym__implied_opcode_token27] = ACTIONS(136),
    [aux_sym__implied_opcode_token28] = ACTIONS(136),
    [aux_sym__implied_opcode_token29] = ACTIONS(136),
    [aux_sym__implied_opcode_token30] = ACTIONS(136),
    [aux_sym__implied_opcode_token31] = ACTIONS(136),
    [aux_sym__implied_opcode_token32] = ACTIONS(136),
    [aux_sym__implied_opcode_token33] = ACTIONS(136),
    [aux_sym__implied_opcode_token34] = ACTIONS(136),
    [aux_sym__implied_opcode_token35] = ACTIONS(136),
    [aux_sym__implied_opcode_token36] = ACTIONS(136),
    [aux_sym__implied_opcode_token37] = ACTIONS(136),
    [aux_sym__relative_opcode_token1] = ACTIONS(136),
    [aux_sym__relative_opcode_token2] = ACTIONS(136),
    [aux_sym__relative_opcode_token3] = ACTIONS(136),
    [aux_sym__relative_opcode_token4] = ACTIONS(136),
    [aux_sym__relative_opcode_token5] = ACTIONS(136),
    [aux_sym__relative_opcode_token6] = ACTIONS(136),
    [aux_sym__relative_opcode_token7] = ACTIONS(136),
    [aux_sym__relative_opcode_token8] = ACTIONS(136),
    [aux_sym__relative_opcode_token9] = ACTIONS(136),
    [aux_sym__immediate_opcode_token1] = ACTIONS(136),
    [aux_sym__immediate_opcode_token2] = ACTIONS(136),
    [aux_sym__immediate_opcode_token3] = ACTIONS(136),
    [aux_sym__immediate_opcode_token4] = ACTIONS(136),
    [aux_sym__immediate_opcode_token5] = ACTIONS(136),
    [aux_sym__immediate_opcode_token6] = ACTIONS(136),
    [aux_sym__immediate_opcode_token7] = ACTIONS(136),
    [aux_sym__immediate_opcode_token8] = ACTIONS(136),
    [aux_sym__immediate_opcode_token9] = ACTIONS(136),
    [aux_sym__immediate_opcode_token10] = ACTIONS(136),
    [aux_sym__immediate_opcode_token11] = ACTIONS(136),
    [aux_sym__immediate_opcode_token12] = ACTIONS(136),
    [aux_sym__absolute_opcode_token1] = ACTIONS(136),
    [aux_sym__absolute_opcode_token2] = ACTIONS(136),
    [aux_sym__absolute_opcode_token3] = ACTIONS(136),
    [aux_sym__absolute_opcode_token4] = ACTIONS(136),
    [aux_sym__absolute_opcode_token5] = ACTIONS(136),
    [aux_sym__absolute_opcode_token6] = ACTIONS(136),
    [aux_sym__absolute_opcode_token7] = ACTIONS(136),
    [aux_sym__absolute_opcode_token8] = ACTIONS(136),
    [sym_local_label] = ACTIONS(136),
    [sym_global_label] = ACTIONS(136),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(124),
    [aux_sym__ext_name_token1] = ACTIONS(124),
    [aux_sym__sec_name_token1] = ACTIONS(124),
    [aux_sym__word_name_token1] = ACTIONS(124),
    [aux_sym__byte_name_token1] = ACTIONS(124),
    [aux_sym__implied_opcode_token1] = ACTIONS(124),
    [aux_sym__implied_opcode_token2] = ACTIONS(124),
    [aux_sym__implied_opcode_token3] = ACTIONS(124),
    [aux_sym__implied_opcode_token4] = ACTIONS(124),
    [aux_sym__implied_opcode_token5] = ACTIONS(124),
    [aux_sym__implied_opcode_token6] = ACTIONS(124),
    [aux_sym__implied_opcode_token7] = ACTIONS(124),
    [aux_sym__implied_opcode_token8] = ACTIONS(124),
    [aux_sym__implied_opcode_token9] = ACTIONS(124),
    [aux_sym__implied_opcode_token10] = ACTIONS(124),
    [aux_sym__implied_opcode_token11] = ACTIONS(124),
    [aux_sym__implied_opcode_token12] = ACTIONS(124),
    [aux_sym__implied_opcode_token13] = ACTIONS(124),
    [aux_sym__implied_opcode_token14] = ACTIONS(124),
    [aux_sym__implied_opcode_token15] = ACTIONS(124),
    [aux_sym__implied_opcode_token16] = ACTIONS(124),
    [aux_sym__implied_opcode_token17] = ACTIONS(124),
    [aux_sym__implied_opcode_token18] = ACTIONS(124),
    [aux_sym__implied_opcode_token19] = ACTIONS(124),
    [aux_sym__implied_opcode_token20] = ACTIONS(124),
    [aux_sym__implied_opcode_token21] = ACTIONS(124),
    [aux_sym__implied_opcode_token22] = ACTIONS(124),
    [aux_sym__implied_opcode_token23] = ACTIONS(124),
    [aux_sym__implied_opcode_token24] = ACTIONS(124),
    [aux_sym__implied_opcode_token25] = ACTIONS(124),
    [aux_sym__implied_opcode_token26] = ACTIONS(124),
    [aux_sym__implied_opcode_token27] = ACTIONS(124),
    [aux_sym__implied_opcode_token28] = ACTIONS(124),
    [aux_sym__implied_opcode_token29] = ACTIONS(124),
    [aux_sym__implied_opcode_token30] = ACTIONS(124),
    [aux_sym__implied_opcode_token31] = ACTIONS(124),
    [aux_sym__implied_opcode_token32] = ACTIONS(124),
    [aux_sym__implied_opcode_token33] = ACTIONS(124),
    [aux_sym__implied_opcode_token34] = ACTIONS(124),
    [aux_sym__implied_opcode_token35] = ACTIONS(124),
    [aux_sym__implied_opcode_token36] = ACTIONS(124),
    [aux_sym__implied_opcode_token37] = ACTIONS(124),
    [aux_sym__relative_opcode_token1] = ACTIONS(124),
    [aux_sym__relative_opcode_token2] = ACTIONS(124),
    [aux_sym__relative_opcode_token3] = ACTIONS(124),
    [aux_sym__relative_opcode_token4] = ACTIONS(124),
    [aux_sym__relative_opcode_token5] = ACTIONS(124),
    [aux_sym__relative_opcode_token6] = ACTIONS(124),
    [aux_sym__relative_opcode_token7] = ACTIONS(124),
    [aux_sym__relative_opcode_token8] = ACTIONS(124),
    [aux_sym__relative_opcode_token9] = ACTIONS(124),
    [aux_sym__immediate_opcode_token1] = ACTIONS(124),
    [aux_sym__immediate_opcode_token2] = ACTIONS(124),
    [aux_sym__immediate_opcode_token3] = ACTIONS(124),
    [aux_sym__immediate_opcode_token4] = ACTIONS(124),
    [aux_sym__immediate_opcode_token5] = ACTIONS(124),
    [aux_sym__immediate_opcode_token6] = ACTIONS(124),
    [aux_sym__immediate_opcode_token7] = ACTIONS(124),
    [aux_sym__immediate_opcode_token8] = ACTIONS(124),
    [aux_sym__immediate_opcode_token9] = ACTIONS(124),
    [aux_sym__immediate_opcode_token10] = ACTIONS(124),
    [aux_sym__immediate_opcode_token11] = ACTIONS(124),
    [aux_sym__immediate_opcode_token12] = ACTIONS(124),
    [aux_sym__absolute_opcode_token1] = ACTIONS(124),
    [aux_sym__absolute_opcode_token2] = ACTIONS(124),
    [aux_sym__absolute_opcode_token3] = ACTIONS(124),
    [aux_sym__absolute_opcode_token4] = ACTIONS(124),
    [aux_sym__absolute_opcode_token5] = ACTIONS(124),
    [aux_sym__absolute_opcode_token6] = ACTIONS(124),
    [aux_sym__absolute_opcode_token7] = ACTIONS(124),
    [aux_sym__absolute_opcode_token8] = ACTIONS(124),
    [sym_local_label] = ACTIONS(124),
    [sym_global_label] = ACTIONS(124),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(140),
    [aux_sym__ext_name_token1] = ACTIONS(140),
    [aux_sym__sec_name_token1] = ACTIONS(140),
    [aux_sym__word_name_token1] = ACTIONS(140),
    [aux_sym__byte_name_token1] = ACTIONS(140),
    [aux_sym__implied_opcode_token1] = ACTIONS(140),
    [aux_sym__implied_opcode_token2] = ACTIONS(140),
    [aux_sym__implied_opcode_token3] = ACTIONS(140),
    [aux_sym__implied_opcode_token4] = ACTIONS(140),
    [aux_sym__implied_opcode_token5] = ACTIONS(140),
    [aux_sym__implied_opcode_token6] = ACTIONS(140),
    [aux_sym__implied_opcode_token7] = ACTIONS(140),
    [aux_sym__implied_opcode_token8] = ACTIONS(140),
    [aux_sym__implied_opcode_token9] = ACTIONS(140),
    [aux_sym__implied_opcode_token10] = ACTIONS(140),
    [aux_sym__implied_opcode_token11] = ACTIONS(140),
    [aux_sym__implied_opcode_token12] = ACTIONS(140),
    [aux_sym__implied_opcode_token13] = ACTIONS(140),
    [aux_sym__implied_opcode_token14] = ACTIONS(140),
    [aux_sym__implied_opcode_token15] = ACTIONS(140),
    [aux_sym__implied_opcode_token16] = ACTIONS(140),
    [aux_sym__implied_opcode_token17] = ACTIONS(140),
    [aux_sym__implied_opcode_token18] = ACTIONS(140),
    [aux_sym__implied_opcode_token19] = ACTIONS(140),
    [aux_sym__implied_opcode_token20] = ACTIONS(140),
    [aux_sym__implied_opcode_token21] = ACTIONS(140),
    [aux_sym__implied_opcode_token22] = ACTIONS(140),
    [aux_sym__implied_opcode_token23] = ACTIONS(140),
    [aux_sym__implied_opcode_token24] = ACTIONS(140),
    [aux_sym__implied_opcode_token25] = ACTIONS(140),
    [aux_sym__implied_opcode_token26] = ACTIONS(140),
    [aux_sym__implied_opcode_token27] = ACTIONS(140),
    [aux_sym__implied_opcode_token28] = ACTIONS(140),
    [aux_sym__implied_opcode_token29] = ACTIONS(140),
    [aux_sym__implied_opcode_token30] = ACTIONS(140),
    [aux_sym__implied_opcode_token31] = ACTIONS(140),
    [aux_sym__implied_opcode_token32] = ACTIONS(140),
    [aux_sym__implied_opcode_token33] = ACTIONS(140),
    [aux_sym__implied_opcode_token34] = ACTIONS(140),
    [aux_sym__implied_opcode_token35] = ACTIONS(140),
    [aux_sym__implied_opcode_token36] = ACTIONS(140),
    [aux_sym__implied_opcode_token37] = ACTIONS(140),
    [aux_sym__relative_opcode_token1] = ACTIONS(140),
    [aux_sym__relative_opcode_token2] = ACTIONS(140),
    [aux_sym__relative_opcode_token3] = ACTIONS(140),
    [aux_sym__relative_opcode_token4] = ACTIONS(140),
    [aux_sym__relative_opcode_token5] = ACTIONS(140),
    [aux_sym__relative_opcode_token6] = ACTIONS(140),
    [aux_sym__relative_opcode_token7] = ACTIONS(140),
    [aux_sym__relative_opcode_token8] = ACTIONS(140),
    [aux_sym__relative_opcode_token9] = ACTIONS(140),
    [aux_sym__immediate_opcode_token1] = ACTIONS(140),
    [aux_sym__immediate_opcode_token2] = ACTIONS(140),
    [aux_sym__immediate_opcode_token3] = ACTIONS(140),
    [aux_sym__immediate_opcode_token4] = ACTIONS(140),
    [aux_sym__immediate_opcode_token5] = ACTIONS(140),
    [aux_sym__immediate_opcode_token6] = ACTIONS(140),
    [aux_sym__immediate_opcode_token7] = ACTIONS(140),
    [aux_sym__immediate_opcode_token8] = ACTIONS(140),
    [aux_sym__immediate_opcode_token9] = ACTIONS(140),
    [aux_sym__immediate_opcode_token10] = ACTIONS(140),
    [aux_sym__immediate_opcode_token11] = ACTIONS(140),
    [aux_sym__immediate_opcode_token12] = ACTIONS(140),
    [aux_sym__absolute_opcode_token1] = ACTIONS(140),
    [aux_sym__absolute_opcode_token2] = ACTIONS(140),
    [aux_sym__absolute_opcode_token3] = ACTIONS(140),
    [aux_sym__absolute_opcode_token4] = ACTIONS(140),
    [aux_sym__absolute_opcode_token5] = ACTIONS(140),
    [aux_sym__absolute_opcode_token6] = ACTIONS(140),
    [aux_sym__absolute_opcode_token7] = ACTIONS(140),
    [aux_sym__absolute_opcode_token8] = ACTIONS(140),
    [sym_local_label] = ACTIONS(140),
    [sym_global_label] = ACTIONS(140),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(144),
    [aux_sym__ext_name_token1] = ACTIONS(144),
    [aux_sym__sec_name_token1] = ACTIONS(144),
    [aux_sym__word_name_token1] = ACTIONS(144),
    [aux_sym__byte_name_token1] = ACTIONS(144),
    [aux_sym__implied_opcode_token1] = ACTIONS(144),
    [aux_sym__implied_opcode_token2] = ACTIONS(144),
    [aux_sym__implied_opcode_token3] = ACTIONS(144),
    [aux_sym__implied_opcode_token4] = ACTIONS(144),
    [aux_sym__implied_opcode_token5] = ACTIONS(144),
    [aux_sym__implied_opcode_token6] = ACTIONS(144),
    [aux_sym__implied_opcode_token7] = ACTIONS(144),
    [aux_sym__implied_opcode_token8] = ACTIONS(144),
    [aux_sym__implied_opcode_token9] = ACTIONS(144),
    [aux_sym__implied_opcode_token10] = ACTIONS(144),
    [aux_sym__implied_opcode_token11] = ACTIONS(144),
    [aux_sym__implied_opcode_token12] = ACTIONS(144),
    [aux_sym__implied_opcode_token13] = ACTIONS(144),
    [aux_sym__implied_opcode_token14] = ACTIONS(144),
    [aux_sym__implied_opcode_token15] = ACTIONS(144),
    [aux_sym__implied_opcode_token16] = ACTIONS(144),
    [aux_sym__implied_opcode_token17] = ACTIONS(144),
    [aux_sym__implied_opcode_token18] = ACTIONS(144),
    [aux_sym__implied_opcode_token19] = ACTIONS(144),
    [aux_sym__implied_opcode_token20] = ACTIONS(144),
    [aux_sym__implied_opcode_token21] = ACTIONS(144),
    [aux_sym__implied_opcode_token22] = ACTIONS(144),
    [aux_sym__implied_opcode_token23] = ACTIONS(144),
    [aux_sym__implied_opcode_token24] = ACTIONS(144),
    [aux_sym__implied_opcode_token25] = ACTIONS(144),
    [aux_sym__implied_opcode_token26] = ACTIONS(144),
    [aux_sym__implied_opcode_token27] = ACTIONS(144),
    [aux_sym__implied_opcode_token28] = ACTIONS(144),
    [aux_sym__implied_opcode_token29] = ACTIONS(144),
    [aux_sym__implied_opcode_token30] = ACTIONS(144),
    [aux_sym__implied_opcode_token31] = ACTIONS(144),
    [aux_sym__implied_opcode_token32] = ACTIONS(144),
    [aux_sym__implied_opcode_token33] = ACTIONS(144),
    [aux_sym__implied_opcode_token34] = ACTIONS(144),
    [aux_sym__implied_opcode_token35] = ACTIONS(144),
    [aux_sym__implied_opcode_token36] = ACTIONS(144),
    [aux_sym__implied_opcode_token37] = ACTIONS(144),
    [aux_sym__relative_opcode_token1] = ACTIONS(144),
    [aux_sym__relative_opcode_token2] = ACTIONS(144),
    [aux_sym__relative_opcode_token3] = ACTIONS(144),
    [aux_sym__relative_opcode_token4] = ACTIONS(144),
    [aux_sym__relative_opcode_token5] = ACTIONS(144),
    [aux_sym__relative_opcode_token6] = ACTIONS(144),
    [aux_sym__relative_opcode_token7] = ACTIONS(144),
    [aux_sym__relative_opcode_token8] = ACTIONS(144),
    [aux_sym__relative_opcode_token9] = ACTIONS(144),
    [aux_sym__immediate_opcode_token1] = ACTIONS(144),
    [aux_sym__immediate_opcode_token2] = ACTIONS(144),
    [aux_sym__immediate_opcode_token3] = ACTIONS(144),
    [aux_sym__immediate_opcode_token4] = ACTIONS(144),
    [aux_sym__immediate_opcode_token5] = ACTIONS(144),
    [aux_sym__immediate_opcode_token6] = ACTIONS(144),
    [aux_sym__immediate_opcode_token7] = ACTIONS(144),
    [aux_sym__immediate_opcode_token8] = ACTIONS(144),
    [aux_sym__immediate_opcode_token9] = ACTIONS(144),
    [aux_sym__immediate_opcode_token10] = ACTIONS(144),
    [aux_sym__immediate_opcode_token11] = ACTIONS(144),
    [aux_sym__immediate_opcode_token12] = ACTIONS(144),
    [aux_sym__absolute_opcode_token1] = ACTIONS(144),
    [aux_sym__absolute_opcode_token2] = ACTIONS(144),
    [aux_sym__absolute_opcode_token3] = ACTIONS(144),
    [aux_sym__absolute_opcode_token4] = ACTIONS(144),
    [aux_sym__absolute_opcode_token5] = ACTIONS(144),
    [aux_sym__absolute_opcode_token6] = ACTIONS(144),
    [aux_sym__absolute_opcode_token7] = ACTIONS(144),
    [aux_sym__absolute_opcode_token8] = ACTIONS(144),
    [sym_local_label] = ACTIONS(144),
    [sym_global_label] = ACTIONS(144),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(148),
    [aux_sym__ext_name_token1] = ACTIONS(148),
    [aux_sym__sec_name_token1] = ACTIONS(148),
    [aux_sym__word_name_token1] = ACTIONS(148),
    [aux_sym__byte_name_token1] = ACTIONS(148),
    [aux_sym__implied_opcode_token1] = ACTIONS(148),
    [aux_sym__implied_opcode_token2] = ACTIONS(148),
    [aux_sym__implied_opcode_token3] = ACTIONS(148),
    [aux_sym__implied_opcode_token4] = ACTIONS(148),
    [aux_sym__implied_opcode_token5] = ACTIONS(148),
    [aux_sym__implied_opcode_token6] = ACTIONS(148),
    [aux_sym__implied_opcode_token7] = ACTIONS(148),
    [aux_sym__implied_opcode_token8] = ACTIONS(148),
    [aux_sym__implied_opcode_token9] = ACTIONS(148),
    [aux_sym__implied_opcode_token10] = ACTIONS(148),
    [aux_sym__implied_opcode_token11] = ACTIONS(148),
    [aux_sym__implied_opcode_token12] = ACTIONS(148),
    [aux_sym__implied_opcode_token13] = ACTIONS(148),
    [aux_sym__implied_opcode_token14] = ACTIONS(148),
    [aux_sym__implied_opcode_token15] = ACTIONS(148),
    [aux_sym__implied_opcode_token16] = ACTIONS(148),
    [aux_sym__implied_opcode_token17] = ACTIONS(148),
    [aux_sym__implied_opcode_token18] = ACTIONS(148),
    [aux_sym__implied_opcode_token19] = ACTIONS(148),
    [aux_sym__implied_opcode_token20] = ACTIONS(148),
    [aux_sym__implied_opcode_token21] = ACTIONS(148),
    [aux_sym__implied_opcode_token22] = ACTIONS(148),
    [aux_sym__implied_opcode_token23] = ACTIONS(148),
    [aux_sym__implied_opcode_token24] = ACTIONS(148),
    [aux_sym__implied_opcode_token25] = ACTIONS(148),
    [aux_sym__implied_opcode_token26] = ACTIONS(148),
    [aux_sym__implied_opcode_token27] = ACTIONS(148),
    [aux_sym__implied_opcode_token28] = ACTIONS(148),
    [aux_sym__implied_opcode_token29] = ACTIONS(148),
    [aux_sym__implied_opcode_token30] = ACTIONS(148),
    [aux_sym__implied_opcode_token31] = ACTIONS(148),
    [aux_sym__implied_opcode_token32] = ACTIONS(148),
    [aux_sym__implied_opcode_token33] = ACTIONS(148),
    [aux_sym__implied_opcode_token34] = ACTIONS(148),
    [aux_sym__implied_opcode_token35] = ACTIONS(148),
    [aux_sym__implied_opcode_token36] = ACTIONS(148),
    [aux_sym__implied_opcode_token37] = ACTIONS(148),
    [aux_sym__relative_opcode_token1] = ACTIONS(148),
    [aux_sym__relative_opcode_token2] = ACTIONS(148),
    [aux_sym__relative_opcode_token3] = ACTIONS(148),
    [aux_sym__relative_opcode_token4] = ACTIONS(148),
    [aux_sym__relative_opcode_token5] = ACTIONS(148),
    [aux_sym__relative_opcode_token6] = ACTIONS(148),
    [aux_sym__relative_opcode_token7] = ACTIONS(148),
    [aux_sym__relative_opcode_token8] = ACTIONS(148),
    [aux_sym__relative_opcode_token9] = ACTIONS(148),
    [aux_sym__immediate_opcode_token1] = ACTIONS(148),
    [aux_sym__immediate_opcode_token2] = ACTIONS(148),
    [aux_sym__immediate_opcode_token3] = ACTIONS(148),
    [aux_sym__immediate_opcode_token4] = ACTIONS(148),
    [aux_sym__immediate_opcode_token5] = ACTIONS(148),
    [aux_sym__immediate_opcode_token6] = ACTIONS(148),
    [aux_sym__immediate_opcode_token7] = ACTIONS(148),
    [aux_sym__immediate_opcode_token8] = ACTIONS(148),
    [aux_sym__immediate_opcode_token9] = ACTIONS(148),
    [aux_sym__immediate_opcode_token10] = ACTIONS(148),
    [aux_sym__immediate_opcode_token11] = ACTIONS(148),
    [aux_sym__immediate_opcode_token12] = ACTIONS(148),
    [aux_sym__absolute_opcode_token1] = ACTIONS(148),
    [aux_sym__absolute_opcode_token2] = ACTIONS(148),
    [aux_sym__absolute_opcode_token3] = ACTIONS(148),
    [aux_sym__absolute_opcode_token4] = ACTIONS(148),
    [aux_sym__absolute_opcode_token5] = ACTIONS(148),
    [aux_sym__absolute_opcode_token6] = ACTIONS(148),
    [aux_sym__absolute_opcode_token7] = ACTIONS(148),
    [aux_sym__absolute_opcode_token8] = ACTIONS(148),
    [sym_local_label] = ACTIONS(148),
    [sym_global_label] = ACTIONS(148),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(152),
    [aux_sym__ext_name_token1] = ACTIONS(152),
    [aux_sym__sec_name_token1] = ACTIONS(152),
    [aux_sym__word_name_token1] = ACTIONS(152),
    [aux_sym__byte_name_token1] = ACTIONS(152),
    [aux_sym__implied_opcode_token1] = ACTIONS(152),
    [aux_sym__implied_opcode_token2] = ACTIONS(152),
    [aux_sym__implied_opcode_token3] = ACTIONS(152),
    [aux_sym__implied_opcode_token4] = ACTIONS(152),
    [aux_sym__implied_opcode_token5] = ACTIONS(152),
    [aux_sym__implied_opcode_token6] = ACTIONS(152),
    [aux_sym__implied_opcode_token7] = ACTIONS(152),
    [aux_sym__implied_opcode_token8] = ACTIONS(152),
    [aux_sym__implied_opcode_token9] = ACTIONS(152),
    [aux_sym__implied_opcode_token10] = ACTIONS(152),
    [aux_sym__implied_opcode_token11] = ACTIONS(152),
    [aux_sym__implied_opcode_token12] = ACTIONS(152),
    [aux_sym__implied_opcode_token13] = ACTIONS(152),
    [aux_sym__implied_opcode_token14] = ACTIONS(152),
    [aux_sym__implied_opcode_token15] = ACTIONS(152),
    [aux_sym__implied_opcode_token16] = ACTIONS(152),
    [aux_sym__implied_opcode_token17] = ACTIONS(152),
    [aux_sym__implied_opcode_token18] = ACTIONS(152),
    [aux_sym__implied_opcode_token19] = ACTIONS(152),
    [aux_sym__implied_opcode_token20] = ACTIONS(152),
    [aux_sym__implied_opcode_token21] = ACTIONS(152),
    [aux_sym__implied_opcode_token22] = ACTIONS(152),
    [aux_sym__implied_opcode_token23] = ACTIONS(152),
    [aux_sym__implied_opcode_token24] = ACTIONS(152),
    [aux_sym__implied_opcode_token25] = ACTIONS(152),
    [aux_sym__implied_opcode_token26] = ACTIONS(152),
    [aux_sym__implied_opcode_token27] = ACTIONS(152),
    [aux_sym__implied_opcode_token28] = ACTIONS(152),
    [aux_sym__implied_opcode_token29] = ACTIONS(152),
    [aux_sym__implied_opcode_token30] = ACTIONS(152),
    [aux_sym__implied_opcode_token31] = ACTIONS(152),
    [aux_sym__implied_opcode_token32] = ACTIONS(152),
    [aux_sym__implied_opcode_token33] = ACTIONS(152),
    [aux_sym__implied_opcode_token34] = ACTIONS(152),
    [aux_sym__implied_opcode_token35] = ACTIONS(152),
    [aux_sym__implied_opcode_token36] = ACTIONS(152),
    [aux_sym__implied_opcode_token37] = ACTIONS(152),
    [aux_sym__relative_opcode_token1] = ACTIONS(152),
    [aux_sym__relative_opcode_token2] = ACTIONS(152),
    [aux_sym__relative_opcode_token3] = ACTIONS(152),
    [aux_sym__relative_opcode_token4] = ACTIONS(152),
    [aux_sym__relative_opcode_token5] = ACTIONS(152),
    [aux_sym__relative_opcode_token6] = ACTIONS(152),
    [aux_sym__relative_opcode_token7] = ACTIONS(152),
    [aux_sym__relative_opcode_token8] = ACTIONS(152),
    [aux_sym__relative_opcode_token9] = ACTIONS(152),
    [aux_sym__immediate_opcode_token1] = ACTIONS(152),
    [aux_sym__immediate_opcode_token2] = ACTIONS(152),
    [aux_sym__immediate_opcode_token3] = ACTIONS(152),
    [aux_sym__immediate_opcode_token4] = ACTIONS(152),
    [aux_sym__immediate_opcode_token5] = ACTIONS(152),
    [aux_sym__immediate_opcode_token6] = ACTIONS(152),
    [aux_sym__immediate_opcode_token7] = ACTIONS(152),
    [aux_sym__immediate_opcode_token8] = ACTIONS(152),
    [aux_sym__immediate_opcode_token9] = ACTIONS(152),
    [aux_sym__immediate_opcode_token10] = ACTIONS(152),
    [aux_sym__immediate_opcode_token11] = ACTIONS(152),
    [aux_sym__immediate_opcode_token12] = ACTIONS(152),
    [aux_sym__absolute_opcode_token1] = ACTIONS(152),
    [aux_sym__absolute_opcode_token2] = ACTIONS(152),
    [aux_sym__absolute_opcode_token3] = ACTIONS(152),
    [aux_sym__absolute_opcode_token4] = ACTIONS(152),
    [aux_sym__absolute_opcode_token5] = ACTIONS(152),
    [aux_sym__absolute_opcode_token6] = ACTIONS(152),
    [aux_sym__absolute_opcode_token7] = ACTIONS(152),
    [aux_sym__absolute_opcode_token8] = ACTIONS(152),
    [sym_local_label] = ACTIONS(152),
    [sym_global_label] = ACTIONS(152),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(156),
    [aux_sym__ext_name_token1] = ACTIONS(156),
    [aux_sym__sec_name_token1] = ACTIONS(156),
    [aux_sym__word_name_token1] = ACTIONS(156),
    [aux_sym__byte_name_token1] = ACTIONS(156),
    [aux_sym__implied_opcode_token1] = ACTIONS(156),
    [aux_sym__implied_opcode_token2] = ACTIONS(156),
    [aux_sym__implied_opcode_token3] = ACTIONS(156),
    [aux_sym__implied_opcode_token4] = ACTIONS(156),
    [aux_sym__implied_opcode_token5] = ACTIONS(156),
    [aux_sym__implied_opcode_token6] = ACTIONS(156),
    [aux_sym__implied_opcode_token7] = ACTIONS(156),
    [aux_sym__implied_opcode_token8] = ACTIONS(156),
    [aux_sym__implied_opcode_token9] = ACTIONS(156),
    [aux_sym__implied_opcode_token10] = ACTIONS(156),
    [aux_sym__implied_opcode_token11] = ACTIONS(156),
    [aux_sym__implied_opcode_token12] = ACTIONS(156),
    [aux_sym__implied_opcode_token13] = ACTIONS(156),
    [aux_sym__implied_opcode_token14] = ACTIONS(156),
    [aux_sym__implied_opcode_token15] = ACTIONS(156),
    [aux_sym__implied_opcode_token16] = ACTIONS(156),
    [aux_sym__implied_opcode_token17] = ACTIONS(156),
    [aux_sym__implied_opcode_token18] = ACTIONS(156),
    [aux_sym__implied_opcode_token19] = ACTIONS(156),
    [aux_sym__implied_opcode_token20] = ACTIONS(156),
    [aux_sym__implied_opcode_token21] = ACTIONS(156),
    [aux_sym__implied_opcode_token22] = ACTIONS(156),
    [aux_sym__implied_opcode_token23] = ACTIONS(156),
    [aux_sym__implied_opcode_token24] = ACTIONS(156),
    [aux_sym__implied_opcode_token25] = ACTIONS(156),
    [aux_sym__implied_opcode_token26] = ACTIONS(156),
    [aux_sym__implied_opcode_token27] = ACTIONS(156),
    [aux_sym__implied_opcode_token28] = ACTIONS(156),
    [aux_sym__implied_opcode_token29] = ACTIONS(156),
    [aux_sym__implied_opcode_token30] = ACTIONS(156),
    [aux_sym__implied_opcode_token31] = ACTIONS(156),
    [aux_sym__implied_opcode_token32] = ACTIONS(156),
    [aux_sym__implied_opcode_token33] = ACTIONS(156),
    [aux_sym__implied_opcode_token34] = ACTIONS(156),
    [aux_sym__implied_opcode_token35] = ACTIONS(156),
    [aux_sym__implied_opcode_token36] = ACTIONS(156),
    [aux_sym__implied_opcode_token37] = ACTIONS(156),
    [aux_sym__relative_opcode_token1] = ACTIONS(156),
    [aux_sym__relative_opcode_token2] = ACTIONS(156),
    [aux_sym__relative_opcode_token3] = ACTIONS(156),
    [aux_sym__relative_opcode_token4] = ACTIONS(156),
    [aux_sym__relative_opcode_token5] = ACTIONS(156),
    [aux_sym__relative_opcode_token6] = ACTIONS(156),
    [aux_sym__relative_opcode_token7] = ACTIONS(156),
    [aux_sym__relative_opcode_token8] = ACTIONS(156),
    [aux_sym__relative_opcode_token9] = ACTIONS(156),
    [aux_sym__immediate_opcode_token1] = ACTIONS(156),
    [aux_sym__immediate_opcode_token2] = ACTIONS(156),
    [aux_sym__immediate_opcode_token3] = ACTIONS(156),
    [aux_sym__immediate_opcode_token4] = ACTIONS(156),
    [aux_sym__immediate_opcode_token5] = ACTIONS(156),
    [aux_sym__immediate_opcode_token6] = ACTIONS(156),
    [aux_sym__immediate_opcode_token7] = ACTIONS(156),
    [aux_sym__immediate_opcode_token8] = ACTIONS(156),
    [aux_sym__immediate_opcode_token9] = ACTIONS(156),
    [aux_sym__immediate_opcode_token10] = ACTIONS(156),
    [aux_sym__immediate_opcode_token11] = ACTIONS(156),
    [aux_sym__immediate_opcode_token12] = ACTIONS(156),
    [aux_sym__absolute_opcode_token1] = ACTIONS(156),
    [aux_sym__absolute_opcode_token2] = ACTIONS(156),
    [aux_sym__absolute_opcode_token3] = ACTIONS(156),
    [aux_sym__absolute_opcode_token4] = ACTIONS(156),
    [aux_sym__absolute_opcode_token5] = ACTIONS(156),
    [aux_sym__absolute_opcode_token6] = ACTIONS(156),
    [aux_sym__absolute_opcode_token7] = ACTIONS(156),
    [aux_sym__absolute_opcode_token8] = ACTIONS(156),
    [sym_local_label] = ACTIONS(156),
    [sym_global_label] = ACTIONS(156),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(160),
    [aux_sym__ext_name_token1] = ACTIONS(160),
    [aux_sym__sec_name_token1] = ACTIONS(160),
    [aux_sym__word_name_token1] = ACTIONS(160),
    [aux_sym__byte_name_token1] = ACTIONS(160),
    [aux_sym__implied_opcode_token1] = ACTIONS(160),
    [aux_sym__implied_opcode_token2] = ACTIONS(160),
    [aux_sym__implied_opcode_token3] = ACTIONS(160),
    [aux_sym__implied_opcode_token4] = ACTIONS(160),
    [aux_sym__implied_opcode_token5] = ACTIONS(160),
    [aux_sym__implied_opcode_token6] = ACTIONS(160),
    [aux_sym__implied_opcode_token7] = ACTIONS(160),
    [aux_sym__implied_opcode_token8] = ACTIONS(160),
    [aux_sym__implied_opcode_token9] = ACTIONS(160),
    [aux_sym__implied_opcode_token10] = ACTIONS(160),
    [aux_sym__implied_opcode_token11] = ACTIONS(160),
    [aux_sym__implied_opcode_token12] = ACTIONS(160),
    [aux_sym__implied_opcode_token13] = ACTIONS(160),
    [aux_sym__implied_opcode_token14] = ACTIONS(160),
    [aux_sym__implied_opcode_token15] = ACTIONS(160),
    [aux_sym__implied_opcode_token16] = ACTIONS(160),
    [aux_sym__implied_opcode_token17] = ACTIONS(160),
    [aux_sym__implied_opcode_token18] = ACTIONS(160),
    [aux_sym__implied_opcode_token19] = ACTIONS(160),
    [aux_sym__implied_opcode_token20] = ACTIONS(160),
    [aux_sym__implied_opcode_token21] = ACTIONS(160),
    [aux_sym__implied_opcode_token22] = ACTIONS(160),
    [aux_sym__implied_opcode_token23] = ACTIONS(160),
    [aux_sym__implied_opcode_token24] = ACTIONS(160),
    [aux_sym__implied_opcode_token25] = ACTIONS(160),
    [aux_sym__implied_opcode_token26] = ACTIONS(160),
    [aux_sym__implied_opcode_token27] = ACTIONS(160),
    [aux_sym__implied_opcode_token28] = ACTIONS(160),
    [aux_sym__implied_opcode_token29] = ACTIONS(160),
    [aux_sym__implied_opcode_token30] = ACTIONS(160),
    [aux_sym__implied_opcode_token31] = ACTIONS(160),
    [aux_sym__implied_opcode_token32] = ACTIONS(160),
    [aux_sym__implied_opcode_token33] = ACTIONS(160),
    [aux_sym__implied_opcode_token34] = ACTIONS(160),
    [aux_sym__implied_opcode_token35] = ACTIONS(160),
    [aux_sym__implied_opcode_token36] = ACTIONS(160),
    [aux_sym__implied_opcode_token37] = ACTIONS(160),
    [aux_sym__relative_opcode_token1] = ACTIONS(160),
    [aux_sym__relative_opcode_token2] = ACTIONS(160),
    [aux_sym__relative_opcode_token3] = ACTIONS(160),
    [aux_sym__relative_opcode_token4] = ACTIONS(160),
    [aux_sym__relative_opcode_token5] = ACTIONS(160),
    [aux_sym__relative_opcode_token6] = ACTIONS(160),
    [aux_sym__relative_opcode_token7] = ACTIONS(160),
    [aux_sym__relative_opcode_token8] = ACTIONS(160),
    [aux_sym__relative_opcode_token9] = ACTIONS(160),
    [aux_sym__immediate_opcode_token1] = ACTIONS(160),
    [aux_sym__immediate_opcode_token2] = ACTIONS(160),
    [aux_sym__immediate_opcode_token3] = ACTIONS(160),
    [aux_sym__immediate_opcode_token4] = ACTIONS(160),
    [aux_sym__immediate_opcode_token5] = ACTIONS(160),
    [aux_sym__immediate_opcode_token6] = ACTIONS(160),
    [aux_sym__immediate_opcode_token7] = ACTIONS(160),
    [aux_sym__immediate_opcode_token8] = ACTIONS(160),
    [aux_sym__immediate_opcode_token9] = ACTIONS(160),
    [aux_sym__immediate_opcode_token10] = ACTIONS(160),
    [aux_sym__immediate_opcode_token11] = ACTIONS(160),
    [aux_sym__immediate_opcode_token12] = ACTIONS(160),
    [aux_sym__absolute_opcode_token1] = ACTIONS(160),
    [aux_sym__absolute_opcode_token2] = ACTIONS(160),
    [aux_sym__absolute_opcode_token3] = ACTIONS(160),
    [aux_sym__absolute_opcode_token4] = ACTIONS(160),
    [aux_sym__absolute_opcode_token5] = ACTIONS(160),
    [aux_sym__absolute_opcode_token6] = ACTIONS(160),
    [aux_sym__absolute_opcode_token7] = ACTIONS(160),
    [aux_sym__absolute_opcode_token8] = ACTIONS(160),
    [sym_local_label] = ACTIONS(160),
    [sym_global_label] = ACTIONS(160),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym__reg_x,
    ACTIONS(80), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [23] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(168), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(6), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(172), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(8), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [65] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(174), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(24), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [86] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(176), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(34), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(178), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(5), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(180), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(11), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(182), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(10), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(184), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(4), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(186), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(9), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(80), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_EQ,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      aux_sym_file_directive_token1,
      aux_sym_file_directive_token2,
  [247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_x,
    ACTIONS(198), 1,
      anon_sym_y,
  [257] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__ws_sep,
  [264] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__ws_sep,
  [271] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__ws_sep,
  [278] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__ws_sep,
  [285] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__ws_sep,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LPAREN2,
  [299] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__ws_sep,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_POUND,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_section_directive_token1,
  [320] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__ws_sep,
  [327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [334] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__ws_sep,
  [341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_global_label,
  [348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [355] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__ws_sep,
  [362] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__ws_sep,
  [369] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__ws_sep,
  [376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_x,
  [383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_y,
  [397] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__ws_sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 23,
  [SMALL_STATE(26)] = 44,
  [SMALL_STATE(27)] = 65,
  [SMALL_STATE(28)] = 86,
  [SMALL_STATE(29)] = 107,
  [SMALL_STATE(30)] = 128,
  [SMALL_STATE(31)] = 149,
  [SMALL_STATE(32)] = 170,
  [SMALL_STATE(33)] = 191,
  [SMALL_STATE(34)] = 212,
  [SMALL_STATE(35)] = 229,
  [SMALL_STATE(36)] = 239,
  [SMALL_STATE(37)] = 247,
  [SMALL_STATE(38)] = 257,
  [SMALL_STATE(39)] = 264,
  [SMALL_STATE(40)] = 271,
  [SMALL_STATE(41)] = 278,
  [SMALL_STATE(42)] = 285,
  [SMALL_STATE(43)] = 292,
  [SMALL_STATE(44)] = 299,
  [SMALL_STATE(45)] = 306,
  [SMALL_STATE(46)] = 313,
  [SMALL_STATE(47)] = 320,
  [SMALL_STATE(48)] = 327,
  [SMALL_STATE(49)] = 334,
  [SMALL_STATE(50)] = 341,
  [SMALL_STATE(51)] = 348,
  [SMALL_STATE(52)] = 355,
  [SMALL_STATE(53)] = 362,
  [SMALL_STATE(54)] = 369,
  [SMALL_STATE(55)] = 376,
  [SMALL_STATE(56)] = 383,
  [SMALL_STATE(57)] = 390,
  [SMALL_STATE(58)] = 397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_directive, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_directive, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implied_opcode, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_opcode, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implied_opcode, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_x, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_x, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_y, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_y, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implied, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_directive, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_directive, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_directive, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_directive, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_opcode, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [234] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
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
