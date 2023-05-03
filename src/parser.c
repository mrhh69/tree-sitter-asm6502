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
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym__ws_sep = 2,
  sym__ws_end = 3,
  aux_sym_include_directive_token1 = 4,
  aux_sym_extern_directive_token1 = 5,
  aux_sym_section_directive_token1 = 6,
  aux_sym__inc_name_token1 = 7,
  aux_sym__ext_name_token1 = 8,
  aux_sym__sec_name_token1 = 9,
  aux_sym__word_name_token1 = 10,
  aux_sym__byte_name_token1 = 11,
  anon_sym_EQ = 12,
  anon_sym_COLON = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  aux_sym_num_literal_token1 = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_LT_LT = 21,
  anon_sym_GT_GT = 22,
  anon_sym_AMP = 23,
  anon_sym_PIPE = 24,
  aux_sym_unary_expr_token1 = 25,
  anon_sym_POUND = 26,
  anon_sym_LPAREN2 = 27,
  anon_sym_COMMA = 28,
  anon_sym_x = 29,
  anon_sym_y = 30,
  aux_sym__implied_opcode_token1 = 31,
  aux_sym__implied_opcode_token2 = 32,
  aux_sym__implied_opcode_token3 = 33,
  aux_sym__implied_opcode_token4 = 34,
  aux_sym__implied_opcode_token5 = 35,
  aux_sym__implied_opcode_token6 = 36,
  aux_sym__implied_opcode_token7 = 37,
  aux_sym__implied_opcode_token8 = 38,
  aux_sym__implied_opcode_token9 = 39,
  aux_sym__implied_opcode_token10 = 40,
  aux_sym__implied_opcode_token11 = 41,
  aux_sym__implied_opcode_token12 = 42,
  aux_sym__implied_opcode_token13 = 43,
  aux_sym__implied_opcode_token14 = 44,
  aux_sym__implied_opcode_token15 = 45,
  aux_sym__implied_opcode_token16 = 46,
  aux_sym__implied_opcode_token17 = 47,
  aux_sym__implied_opcode_token18 = 48,
  aux_sym__implied_opcode_token19 = 49,
  aux_sym__implied_opcode_token20 = 50,
  aux_sym__implied_opcode_token21 = 51,
  aux_sym__implied_opcode_token22 = 52,
  aux_sym__implied_opcode_token23 = 53,
  aux_sym__implied_opcode_token24 = 54,
  aux_sym__implied_opcode_token25 = 55,
  aux_sym__implied_opcode_token26 = 56,
  aux_sym__implied_opcode_token27 = 57,
  aux_sym__implied_opcode_token28 = 58,
  aux_sym__implied_opcode_token29 = 59,
  aux_sym__implied_opcode_token30 = 60,
  aux_sym__implied_opcode_token31 = 61,
  aux_sym__implied_opcode_token32 = 62,
  aux_sym__implied_opcode_token33 = 63,
  aux_sym__implied_opcode_token34 = 64,
  aux_sym__implied_opcode_token35 = 65,
  aux_sym__implied_opcode_token36 = 66,
  aux_sym__implied_opcode_token37 = 67,
  aux_sym__relative_opcode_token1 = 68,
  aux_sym__relative_opcode_token2 = 69,
  aux_sym__relative_opcode_token3 = 70,
  aux_sym__relative_opcode_token4 = 71,
  aux_sym__relative_opcode_token5 = 72,
  aux_sym__relative_opcode_token6 = 73,
  aux_sym__relative_opcode_token7 = 74,
  aux_sym__relative_opcode_token8 = 75,
  aux_sym__relative_opcode_token9 = 76,
  aux_sym__immediate_opcode_token1 = 77,
  aux_sym__immediate_opcode_token2 = 78,
  aux_sym__immediate_opcode_token3 = 79,
  aux_sym__immediate_opcode_token4 = 80,
  aux_sym__immediate_opcode_token5 = 81,
  aux_sym__immediate_opcode_token6 = 82,
  aux_sym__immediate_opcode_token7 = 83,
  aux_sym__immediate_opcode_token8 = 84,
  aux_sym__immediate_opcode_token9 = 85,
  aux_sym__immediate_opcode_token10 = 86,
  aux_sym__immediate_opcode_token11 = 87,
  aux_sym__immediate_opcode_token12 = 88,
  aux_sym__absolute_opcode_token1 = 89,
  aux_sym__absolute_opcode_token2 = 90,
  aux_sym__absolute_opcode_token3 = 91,
  aux_sym__absolute_opcode_token4 = 92,
  aux_sym__absolute_opcode_token5 = 93,
  aux_sym__absolute_opcode_token6 = 94,
  aux_sym__absolute_opcode_token7 = 95,
  aux_sym__absolute_opcode_token8 = 96,
  sym_local_label = 97,
  sym_global_label = 98,
  sym_source_file = 99,
  sym__statement = 100,
  sym__directive = 101,
  sym_include_directive = 102,
  sym_extern_directive = 103,
  sym_section_directive = 104,
  sym_imm_directive = 105,
  sym__inc_name = 106,
  sym__ext_name = 107,
  sym__sec_name = 108,
  sym__word_name = 109,
  sym__byte_name = 110,
  sym_assignment = 111,
  sym_label = 112,
  sym__expr = 113,
  sym__identifier = 114,
  sym_num_literal = 115,
  sym_binary_expr = 116,
  sym_unary_expr = 117,
  sym__operation = 118,
  sym_implied = 119,
  sym_relative = 120,
  sym_immediate = 121,
  sym_absolute = 122,
  sym_indirect = 123,
  sym__reg_x = 124,
  sym__reg_y = 125,
  sym__implied_opcode = 126,
  sym__relative_opcode = 127,
  sym__immediate_opcode = 128,
  sym__absolute_opcode = 129,
  sym__indirect_opcode = 130,
  aux_sym_source_file_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__ws_sep] = "_ws_sep",
  [sym__ws_end] = "_ws_end",
  [aux_sym_include_directive_token1] = "file_name",
  [aux_sym_extern_directive_token1] = "global_label",
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
  [aux_sym_num_literal_token1] = "num_literal_token1",
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
  [sym_include_directive] = "include_directive",
  [sym_extern_directive] = "extern_directive",
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
  [sym_num_literal] = "num_literal",
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
  [sym__ws_end] = sym__ws_end,
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_extern_directive_token1] = sym_global_label,
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
  [aux_sym_num_literal_token1] = aux_sym_num_literal_token1,
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
  [sym_include_directive] = sym_include_directive,
  [sym_extern_directive] = sym_extern_directive,
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
  [sym_num_literal] = sym_num_literal,
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
  [sym__ws_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_include_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_extern_directive_token1] = {
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
  [aux_sym_num_literal_token1] = {
    .visible = false,
    .named = false,
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
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_directive] = {
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
  [sym_num_literal] = {
    .visible = true,
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
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 32,
  [40] = 8,
  [41] = 41,
  [42] = 41,
  [43] = 7,
  [44] = 44,
  [45] = 6,
  [46] = 5,
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(114);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '|') ADVANCE(151);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(152);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(148);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(347);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == 'w') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'x') ADVANCE(30);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(332);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 34:
      if (lookahead == 'y') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'y') ADVANCE(331);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '|') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(214);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(184);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(284);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(286);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(288);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(270);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(340);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 49:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(290);
      END_STATE();
    case 51:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(292);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 52:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(347);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 71:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(41);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 72:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(338);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(360);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(92);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 91:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 92:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 93:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 94:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(240);
      END_STATE();
    case 95:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 96:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 101:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(262);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 102:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(186);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 103:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 105:
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 108:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 109:
      if (eof) ADVANCE(114);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '|') ADVANCE(151);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(152);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 110:
      if (eof) ADVANCE(114);
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(111)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 111:
      if (eof) ADVANCE(114);
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(111)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 112:
      if (eof) ADVANCE(114);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(112)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__ws_sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__ws_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_extern_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_section_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_unary_expr_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (lookahead == 'l') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'x') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'y') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'u') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(185);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(285);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(287);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(370);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(271);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(229);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(293);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(169);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(263);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_global_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 110},
  [3] = {.lex_state = 110},
  [4] = {.lex_state = 110},
  [5] = {.lex_state = 110},
  [6] = {.lex_state = 110},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 110},
  [9] = {.lex_state = 110},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 110},
  [12] = {.lex_state = 110},
  [13] = {.lex_state = 110},
  [14] = {.lex_state = 113},
  [15] = {.lex_state = 110},
  [16] = {.lex_state = 110},
  [17] = {.lex_state = 110},
  [18] = {.lex_state = 110},
  [19] = {.lex_state = 110},
  [20] = {.lex_state = 110},
  [21] = {.lex_state = 110},
  [22] = {.lex_state = 110},
  [23] = {.lex_state = 110},
  [24] = {.lex_state = 110},
  [25] = {.lex_state = 110},
  [26] = {.lex_state = 110},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 110},
  [42] = {.lex_state = 110},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 113},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 113},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 113},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 105},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 113},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 113},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 113},
  [67] = {.lex_state = 113},
  [68] = {.lex_state = 113},
  [69] = {.lex_state = 113},
  [70] = {.lex_state = 113},
  [71] = {.lex_state = 113},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 113},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(1),
    [aux_sym__ext_name_token1] = ACTIONS(1),
    [aux_sym__sec_name_token1] = ACTIONS(1),
    [aux_sym__word_name_token1] = ACTIONS(1),
    [aux_sym__byte_name_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_num_literal_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(55),
    [sym__statement] = STATE(3),
    [sym__directive] = STATE(3),
    [sym_include_directive] = STATE(3),
    [sym_extern_directive] = STATE(3),
    [sym_section_directive] = STATE(3),
    [sym_imm_directive] = STATE(3),
    [sym__inc_name] = STATE(54),
    [sym__ext_name] = STATE(62),
    [sym__sec_name] = STATE(56),
    [sym__word_name] = STATE(38),
    [sym__byte_name] = STATE(38),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(3),
    [sym_relative] = STATE(3),
    [sym_immediate] = STATE(3),
    [sym_absolute] = STATE(3),
    [sym_indirect] = STATE(3),
    [sym__implied_opcode] = STATE(19),
    [sym__relative_opcode] = STATE(51),
    [sym__immediate_opcode] = STATE(73),
    [sym__absolute_opcode] = STATE(69),
    [sym__indirect_opcode] = STATE(67),
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
    [sym_include_directive] = STATE(2),
    [sym_extern_directive] = STATE(2),
    [sym_section_directive] = STATE(2),
    [sym_imm_directive] = STATE(2),
    [sym__inc_name] = STATE(54),
    [sym__ext_name] = STATE(62),
    [sym__sec_name] = STATE(56),
    [sym__word_name] = STATE(38),
    [sym__byte_name] = STATE(38),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(19),
    [sym__relative_opcode] = STATE(51),
    [sym__immediate_opcode] = STATE(73),
    [sym__absolute_opcode] = STATE(69),
    [sym__indirect_opcode] = STATE(67),
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
    [sym_include_directive] = STATE(2),
    [sym_extern_directive] = STATE(2),
    [sym_section_directive] = STATE(2),
    [sym_imm_directive] = STATE(2),
    [sym__inc_name] = STATE(54),
    [sym__ext_name] = STATE(62),
    [sym__sec_name] = STATE(56),
    [sym__word_name] = STATE(38),
    [sym__byte_name] = STATE(38),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(19),
    [sym__relative_opcode] = STATE(51),
    [sym__immediate_opcode] = STATE(73),
    [sym__absolute_opcode] = STATE(69),
    [sym__indirect_opcode] = STATE(67),
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
    [sym__reg_x] = STATE(16),
    [sym__reg_y] = STATE(16),
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
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_LT_LT] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
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
    [sym__reg_y] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(120),
    [aux_sym__ext_name_token1] = ACTIONS(120),
    [aux_sym__sec_name_token1] = ACTIONS(120),
    [aux_sym__word_name_token1] = ACTIONS(120),
    [aux_sym__byte_name_token1] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(116),
    [aux_sym__implied_opcode_token1] = ACTIONS(120),
    [aux_sym__implied_opcode_token2] = ACTIONS(120),
    [aux_sym__implied_opcode_token3] = ACTIONS(120),
    [aux_sym__implied_opcode_token4] = ACTIONS(120),
    [aux_sym__implied_opcode_token5] = ACTIONS(120),
    [aux_sym__implied_opcode_token6] = ACTIONS(120),
    [aux_sym__implied_opcode_token7] = ACTIONS(120),
    [aux_sym__implied_opcode_token8] = ACTIONS(120),
    [aux_sym__implied_opcode_token9] = ACTIONS(120),
    [aux_sym__implied_opcode_token10] = ACTIONS(120),
    [aux_sym__implied_opcode_token11] = ACTIONS(120),
    [aux_sym__implied_opcode_token12] = ACTIONS(120),
    [aux_sym__implied_opcode_token13] = ACTIONS(120),
    [aux_sym__implied_opcode_token14] = ACTIONS(120),
    [aux_sym__implied_opcode_token15] = ACTIONS(120),
    [aux_sym__implied_opcode_token16] = ACTIONS(120),
    [aux_sym__implied_opcode_token17] = ACTIONS(120),
    [aux_sym__implied_opcode_token18] = ACTIONS(120),
    [aux_sym__implied_opcode_token19] = ACTIONS(120),
    [aux_sym__implied_opcode_token20] = ACTIONS(120),
    [aux_sym__implied_opcode_token21] = ACTIONS(120),
    [aux_sym__implied_opcode_token22] = ACTIONS(120),
    [aux_sym__implied_opcode_token23] = ACTIONS(120),
    [aux_sym__implied_opcode_token24] = ACTIONS(120),
    [aux_sym__implied_opcode_token25] = ACTIONS(120),
    [aux_sym__implied_opcode_token26] = ACTIONS(120),
    [aux_sym__implied_opcode_token27] = ACTIONS(120),
    [aux_sym__implied_opcode_token28] = ACTIONS(120),
    [aux_sym__implied_opcode_token29] = ACTIONS(120),
    [aux_sym__implied_opcode_token30] = ACTIONS(120),
    [aux_sym__implied_opcode_token31] = ACTIONS(120),
    [aux_sym__implied_opcode_token32] = ACTIONS(120),
    [aux_sym__implied_opcode_token33] = ACTIONS(120),
    [aux_sym__implied_opcode_token34] = ACTIONS(120),
    [aux_sym__implied_opcode_token35] = ACTIONS(120),
    [aux_sym__implied_opcode_token36] = ACTIONS(120),
    [aux_sym__implied_opcode_token37] = ACTIONS(120),
    [aux_sym__relative_opcode_token1] = ACTIONS(120),
    [aux_sym__relative_opcode_token2] = ACTIONS(120),
    [aux_sym__relative_opcode_token3] = ACTIONS(120),
    [aux_sym__relative_opcode_token4] = ACTIONS(120),
    [aux_sym__relative_opcode_token5] = ACTIONS(120),
    [aux_sym__relative_opcode_token6] = ACTIONS(120),
    [aux_sym__relative_opcode_token7] = ACTIONS(120),
    [aux_sym__relative_opcode_token8] = ACTIONS(120),
    [aux_sym__relative_opcode_token9] = ACTIONS(120),
    [aux_sym__immediate_opcode_token1] = ACTIONS(120),
    [aux_sym__immediate_opcode_token2] = ACTIONS(120),
    [aux_sym__immediate_opcode_token3] = ACTIONS(120),
    [aux_sym__immediate_opcode_token4] = ACTIONS(120),
    [aux_sym__immediate_opcode_token5] = ACTIONS(120),
    [aux_sym__immediate_opcode_token6] = ACTIONS(120),
    [aux_sym__immediate_opcode_token7] = ACTIONS(120),
    [aux_sym__immediate_opcode_token8] = ACTIONS(120),
    [aux_sym__immediate_opcode_token9] = ACTIONS(120),
    [aux_sym__immediate_opcode_token10] = ACTIONS(120),
    [aux_sym__immediate_opcode_token11] = ACTIONS(120),
    [aux_sym__immediate_opcode_token12] = ACTIONS(120),
    [aux_sym__absolute_opcode_token1] = ACTIONS(120),
    [aux_sym__absolute_opcode_token2] = ACTIONS(120),
    [aux_sym__absolute_opcode_token3] = ACTIONS(120),
    [aux_sym__absolute_opcode_token4] = ACTIONS(120),
    [aux_sym__absolute_opcode_token5] = ACTIONS(120),
    [aux_sym__absolute_opcode_token6] = ACTIONS(120),
    [aux_sym__absolute_opcode_token7] = ACTIONS(120),
    [aux_sym__absolute_opcode_token8] = ACTIONS(120),
    [sym_local_label] = ACTIONS(120),
    [sym_global_label] = ACTIONS(120),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(124),
    [sym__ws_sep] = ACTIONS(126),
    [aux_sym__inc_name_token1] = ACTIONS(128),
    [aux_sym__ext_name_token1] = ACTIONS(128),
    [aux_sym__sec_name_token1] = ACTIONS(128),
    [aux_sym__word_name_token1] = ACTIONS(128),
    [aux_sym__byte_name_token1] = ACTIONS(128),
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
    [anon_sym_RPAREN] = ACTIONS(130),
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
  [18] = {
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
  [19] = {
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
  [20] = {
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(128),
    [aux_sym__ext_name_token1] = ACTIONS(128),
    [aux_sym__sec_name_token1] = ACTIONS(128),
    [aux_sym__word_name_token1] = ACTIONS(128),
    [aux_sym__byte_name_token1] = ACTIONS(128),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(164),
    [aux_sym__ext_name_token1] = ACTIONS(164),
    [aux_sym__sec_name_token1] = ACTIONS(164),
    [aux_sym__word_name_token1] = ACTIONS(164),
    [aux_sym__byte_name_token1] = ACTIONS(164),
    [aux_sym__implied_opcode_token1] = ACTIONS(164),
    [aux_sym__implied_opcode_token2] = ACTIONS(164),
    [aux_sym__implied_opcode_token3] = ACTIONS(164),
    [aux_sym__implied_opcode_token4] = ACTIONS(164),
    [aux_sym__implied_opcode_token5] = ACTIONS(164),
    [aux_sym__implied_opcode_token6] = ACTIONS(164),
    [aux_sym__implied_opcode_token7] = ACTIONS(164),
    [aux_sym__implied_opcode_token8] = ACTIONS(164),
    [aux_sym__implied_opcode_token9] = ACTIONS(164),
    [aux_sym__implied_opcode_token10] = ACTIONS(164),
    [aux_sym__implied_opcode_token11] = ACTIONS(164),
    [aux_sym__implied_opcode_token12] = ACTIONS(164),
    [aux_sym__implied_opcode_token13] = ACTIONS(164),
    [aux_sym__implied_opcode_token14] = ACTIONS(164),
    [aux_sym__implied_opcode_token15] = ACTIONS(164),
    [aux_sym__implied_opcode_token16] = ACTIONS(164),
    [aux_sym__implied_opcode_token17] = ACTIONS(164),
    [aux_sym__implied_opcode_token18] = ACTIONS(164),
    [aux_sym__implied_opcode_token19] = ACTIONS(164),
    [aux_sym__implied_opcode_token20] = ACTIONS(164),
    [aux_sym__implied_opcode_token21] = ACTIONS(164),
    [aux_sym__implied_opcode_token22] = ACTIONS(164),
    [aux_sym__implied_opcode_token23] = ACTIONS(164),
    [aux_sym__implied_opcode_token24] = ACTIONS(164),
    [aux_sym__implied_opcode_token25] = ACTIONS(164),
    [aux_sym__implied_opcode_token26] = ACTIONS(164),
    [aux_sym__implied_opcode_token27] = ACTIONS(164),
    [aux_sym__implied_opcode_token28] = ACTIONS(164),
    [aux_sym__implied_opcode_token29] = ACTIONS(164),
    [aux_sym__implied_opcode_token30] = ACTIONS(164),
    [aux_sym__implied_opcode_token31] = ACTIONS(164),
    [aux_sym__implied_opcode_token32] = ACTIONS(164),
    [aux_sym__implied_opcode_token33] = ACTIONS(164),
    [aux_sym__implied_opcode_token34] = ACTIONS(164),
    [aux_sym__implied_opcode_token35] = ACTIONS(164),
    [aux_sym__implied_opcode_token36] = ACTIONS(164),
    [aux_sym__implied_opcode_token37] = ACTIONS(164),
    [aux_sym__relative_opcode_token1] = ACTIONS(164),
    [aux_sym__relative_opcode_token2] = ACTIONS(164),
    [aux_sym__relative_opcode_token3] = ACTIONS(164),
    [aux_sym__relative_opcode_token4] = ACTIONS(164),
    [aux_sym__relative_opcode_token5] = ACTIONS(164),
    [aux_sym__relative_opcode_token6] = ACTIONS(164),
    [aux_sym__relative_opcode_token7] = ACTIONS(164),
    [aux_sym__relative_opcode_token8] = ACTIONS(164),
    [aux_sym__relative_opcode_token9] = ACTIONS(164),
    [aux_sym__immediate_opcode_token1] = ACTIONS(164),
    [aux_sym__immediate_opcode_token2] = ACTIONS(164),
    [aux_sym__immediate_opcode_token3] = ACTIONS(164),
    [aux_sym__immediate_opcode_token4] = ACTIONS(164),
    [aux_sym__immediate_opcode_token5] = ACTIONS(164),
    [aux_sym__immediate_opcode_token6] = ACTIONS(164),
    [aux_sym__immediate_opcode_token7] = ACTIONS(164),
    [aux_sym__immediate_opcode_token8] = ACTIONS(164),
    [aux_sym__immediate_opcode_token9] = ACTIONS(164),
    [aux_sym__immediate_opcode_token10] = ACTIONS(164),
    [aux_sym__immediate_opcode_token11] = ACTIONS(164),
    [aux_sym__immediate_opcode_token12] = ACTIONS(164),
    [aux_sym__absolute_opcode_token1] = ACTIONS(164),
    [aux_sym__absolute_opcode_token2] = ACTIONS(164),
    [aux_sym__absolute_opcode_token3] = ACTIONS(164),
    [aux_sym__absolute_opcode_token4] = ACTIONS(164),
    [aux_sym__absolute_opcode_token5] = ACTIONS(164),
    [aux_sym__absolute_opcode_token6] = ACTIONS(164),
    [aux_sym__absolute_opcode_token7] = ACTIONS(164),
    [aux_sym__absolute_opcode_token8] = ACTIONS(164),
    [sym_local_label] = ACTIONS(164),
    [sym_global_label] = ACTIONS(164),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(168),
    [aux_sym__ext_name_token1] = ACTIONS(168),
    [aux_sym__sec_name_token1] = ACTIONS(168),
    [aux_sym__word_name_token1] = ACTIONS(168),
    [aux_sym__byte_name_token1] = ACTIONS(168),
    [aux_sym__implied_opcode_token1] = ACTIONS(168),
    [aux_sym__implied_opcode_token2] = ACTIONS(168),
    [aux_sym__implied_opcode_token3] = ACTIONS(168),
    [aux_sym__implied_opcode_token4] = ACTIONS(168),
    [aux_sym__implied_opcode_token5] = ACTIONS(168),
    [aux_sym__implied_opcode_token6] = ACTIONS(168),
    [aux_sym__implied_opcode_token7] = ACTIONS(168),
    [aux_sym__implied_opcode_token8] = ACTIONS(168),
    [aux_sym__implied_opcode_token9] = ACTIONS(168),
    [aux_sym__implied_opcode_token10] = ACTIONS(168),
    [aux_sym__implied_opcode_token11] = ACTIONS(168),
    [aux_sym__implied_opcode_token12] = ACTIONS(168),
    [aux_sym__implied_opcode_token13] = ACTIONS(168),
    [aux_sym__implied_opcode_token14] = ACTIONS(168),
    [aux_sym__implied_opcode_token15] = ACTIONS(168),
    [aux_sym__implied_opcode_token16] = ACTIONS(168),
    [aux_sym__implied_opcode_token17] = ACTIONS(168),
    [aux_sym__implied_opcode_token18] = ACTIONS(168),
    [aux_sym__implied_opcode_token19] = ACTIONS(168),
    [aux_sym__implied_opcode_token20] = ACTIONS(168),
    [aux_sym__implied_opcode_token21] = ACTIONS(168),
    [aux_sym__implied_opcode_token22] = ACTIONS(168),
    [aux_sym__implied_opcode_token23] = ACTIONS(168),
    [aux_sym__implied_opcode_token24] = ACTIONS(168),
    [aux_sym__implied_opcode_token25] = ACTIONS(168),
    [aux_sym__implied_opcode_token26] = ACTIONS(168),
    [aux_sym__implied_opcode_token27] = ACTIONS(168),
    [aux_sym__implied_opcode_token28] = ACTIONS(168),
    [aux_sym__implied_opcode_token29] = ACTIONS(168),
    [aux_sym__implied_opcode_token30] = ACTIONS(168),
    [aux_sym__implied_opcode_token31] = ACTIONS(168),
    [aux_sym__implied_opcode_token32] = ACTIONS(168),
    [aux_sym__implied_opcode_token33] = ACTIONS(168),
    [aux_sym__implied_opcode_token34] = ACTIONS(168),
    [aux_sym__implied_opcode_token35] = ACTIONS(168),
    [aux_sym__implied_opcode_token36] = ACTIONS(168),
    [aux_sym__implied_opcode_token37] = ACTIONS(168),
    [aux_sym__relative_opcode_token1] = ACTIONS(168),
    [aux_sym__relative_opcode_token2] = ACTIONS(168),
    [aux_sym__relative_opcode_token3] = ACTIONS(168),
    [aux_sym__relative_opcode_token4] = ACTIONS(168),
    [aux_sym__relative_opcode_token5] = ACTIONS(168),
    [aux_sym__relative_opcode_token6] = ACTIONS(168),
    [aux_sym__relative_opcode_token7] = ACTIONS(168),
    [aux_sym__relative_opcode_token8] = ACTIONS(168),
    [aux_sym__relative_opcode_token9] = ACTIONS(168),
    [aux_sym__immediate_opcode_token1] = ACTIONS(168),
    [aux_sym__immediate_opcode_token2] = ACTIONS(168),
    [aux_sym__immediate_opcode_token3] = ACTIONS(168),
    [aux_sym__immediate_opcode_token4] = ACTIONS(168),
    [aux_sym__immediate_opcode_token5] = ACTIONS(168),
    [aux_sym__immediate_opcode_token6] = ACTIONS(168),
    [aux_sym__immediate_opcode_token7] = ACTIONS(168),
    [aux_sym__immediate_opcode_token8] = ACTIONS(168),
    [aux_sym__immediate_opcode_token9] = ACTIONS(168),
    [aux_sym__immediate_opcode_token10] = ACTIONS(168),
    [aux_sym__immediate_opcode_token11] = ACTIONS(168),
    [aux_sym__immediate_opcode_token12] = ACTIONS(168),
    [aux_sym__absolute_opcode_token1] = ACTIONS(168),
    [aux_sym__absolute_opcode_token2] = ACTIONS(168),
    [aux_sym__absolute_opcode_token3] = ACTIONS(168),
    [aux_sym__absolute_opcode_token4] = ACTIONS(168),
    [aux_sym__absolute_opcode_token5] = ACTIONS(168),
    [aux_sym__absolute_opcode_token6] = ACTIONS(168),
    [aux_sym__absolute_opcode_token7] = ACTIONS(168),
    [aux_sym__absolute_opcode_token8] = ACTIONS(168),
    [sym_local_label] = ACTIONS(168),
    [sym_global_label] = ACTIONS(168),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(114),
    [aux_sym__ext_name_token1] = ACTIONS(114),
    [aux_sym__sec_name_token1] = ACTIONS(114),
    [aux_sym__word_name_token1] = ACTIONS(114),
    [aux_sym__byte_name_token1] = ACTIONS(114),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(61), 1,
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
  [23] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(180), 2,
      sym_local_label,
      sym_global_label,
    STATE(9), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [47] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(182), 2,
      sym_local_label,
      sym_global_label,
    STATE(42), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [71] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(184), 2,
      sym_local_label,
      sym_global_label,
    STATE(7), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [95] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_num_literal_token1,
    ACTIONS(190), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(192), 2,
      sym_local_label,
      sym_global_label,
    STATE(43), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [119] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(194), 2,
      sym_local_label,
      sym_global_label,
    STATE(5), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(196), 2,
      sym_local_label,
      sym_global_label,
    STATE(11), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(198), 2,
      sym_local_label,
      sym_global_label,
    STATE(41), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(200), 2,
      sym_local_label,
      sym_global_label,
    STATE(4), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(202), 2,
      sym_local_label,
      sym_global_label,
    STATE(27), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [239] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_num_literal_token1,
    ACTIONS(178), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(204), 2,
      sym_local_label,
      sym_global_label,
    STATE(10), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_num_literal_token1,
    ACTIONS(190), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(206), 2,
      sym_local_label,
      sym_global_label,
    STATE(44), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_num_literal_token1,
    ACTIONS(190), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(208), 2,
      sym_local_label,
      sym_global_label,
    STATE(46), 5,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
  [311] = 3,
    ACTIONS(96), 1,
      sym__ws_end,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(98), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
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
  [345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
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
  [362] = 3,
    ACTIONS(92), 1,
      sym__ws_end,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(94), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [379] = 3,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym__ws_end,
    ACTIONS(216), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [396] = 3,
    ACTIONS(88), 1,
      sym__ws_end,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(90), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [413] = 3,
    ACTIONS(84), 1,
      sym__ws_end,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(86), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_x,
    ACTIONS(220), 1,
      anon_sym_y,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_POUND,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_y,
  [464] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__ws_sep,
  [471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN2,
  [478] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__ws_end,
  [485] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__ws_sep,
  [492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [499] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__ws_sep,
  [506] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__ws_end,
  [513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym_section_directive_token1,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_x,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [541] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__ws_sep,
  [548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym_extern_directive_token1,
  [555] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__ws_sep,
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      aux_sym_include_directive_token1,
  [569] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__ws_sep,
  [576] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__ws_sep,
  [583] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym__ws_sep,
  [590] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__ws_sep,
  [597] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__ws_sep,
  [604] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__ws_sep,
  [611] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__ws_end,
  [618] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym__ws_sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 23,
  [SMALL_STATE(29)] = 47,
  [SMALL_STATE(30)] = 71,
  [SMALL_STATE(31)] = 95,
  [SMALL_STATE(32)] = 119,
  [SMALL_STATE(33)] = 143,
  [SMALL_STATE(34)] = 167,
  [SMALL_STATE(35)] = 191,
  [SMALL_STATE(36)] = 215,
  [SMALL_STATE(37)] = 239,
  [SMALL_STATE(38)] = 263,
  [SMALL_STATE(39)] = 287,
  [SMALL_STATE(40)] = 311,
  [SMALL_STATE(41)] = 328,
  [SMALL_STATE(42)] = 345,
  [SMALL_STATE(43)] = 362,
  [SMALL_STATE(44)] = 379,
  [SMALL_STATE(45)] = 396,
  [SMALL_STATE(46)] = 413,
  [SMALL_STATE(47)] = 430,
  [SMALL_STATE(48)] = 440,
  [SMALL_STATE(49)] = 450,
  [SMALL_STATE(50)] = 457,
  [SMALL_STATE(51)] = 464,
  [SMALL_STATE(52)] = 471,
  [SMALL_STATE(53)] = 478,
  [SMALL_STATE(54)] = 485,
  [SMALL_STATE(55)] = 492,
  [SMALL_STATE(56)] = 499,
  [SMALL_STATE(57)] = 506,
  [SMALL_STATE(58)] = 513,
  [SMALL_STATE(59)] = 520,
  [SMALL_STATE(60)] = 527,
  [SMALL_STATE(61)] = 534,
  [SMALL_STATE(62)] = 541,
  [SMALL_STATE(63)] = 548,
  [SMALL_STATE(64)] = 555,
  [SMALL_STATE(65)] = 562,
  [SMALL_STATE(66)] = 569,
  [SMALL_STATE(67)] = 576,
  [SMALL_STATE(68)] = 583,
  [SMALL_STATE(69)] = 590,
  [SMALL_STATE(70)] = 597,
  [SMALL_STATE(71)] = 604,
  [SMALL_STATE(72)] = 611,
  [SMALL_STATE(73)] = 618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_literal, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_literal, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implied_opcode, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_opcode, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implied_opcode, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_x, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_x, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_directive, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_directive, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_directive, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_directive, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implied, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 7, .dynamic_precedence = 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 7, .dynamic_precedence = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_y, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_y, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [262] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_opcode, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
