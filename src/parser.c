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
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 134
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
  aux_sym_local_label_token1 = 97,
  aux_sym_global_label_token1 = 98,
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
  sym_local_label = 131,
  sym_global_label = 132,
  aux_sym_source_file_repeat1 = 133,
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
  [aux_sym_local_label_token1] = "local_label_token1",
  [aux_sym_global_label_token1] = "global_label_token1",
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
  [sym_local_label] = "local_label",
  [sym_global_label] = "global_label",
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
  [aux_sym_local_label_token1] = aux_sym_local_label_token1,
  [aux_sym_global_label_token1] = aux_sym_global_label_token1,
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
  [sym_local_label] = sym_local_label,
  [sym_global_label] = sym_global_label,
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
  [aux_sym_local_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_label_token1] = {
    .visible = false,
    .named = false,
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
  [sym_local_label] = {
    .visible = true,
    .named = true,
  },
  [sym_global_label] = {
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
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 28,
  [29] = 22,
  [30] = 30,
  [31] = 5,
  [32] = 4,
  [33] = 9,
  [34] = 7,
  [35] = 8,
  [36] = 6,
  [37] = 37,
  [38] = 38,
  [39] = 38,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 61,
  [79] = 79,
  [80] = 80,
};

static inline bool aux_sym_include_directive_token1_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < 'Q'
      ? (c < 'K'
        ? (c >= 'F' && c <= 'H')
        : (c <= 'K' || c == 'M'))
      : (c <= 'Q' || (c < '_'
        ? (c >= 'U' && c <= 'Z')
        : c <= '_')))
    : (c <= 'h' || (c < 'q'
      ? (c < 'm'
        ? c == 'k'
        : c <= 'm')
      : (c <= 'q' || (c < 'z'
        ? (c >= 'u' && c <= 'v')
        : c <= 'z')))));
}

static inline bool aux_sym_include_directive_token1_character_set_2(int32_t c) {
  return (c < '_'
    ? (c < 'C'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'A')
      : (c <= 'S' || (c >= 'U' && c <= 'Z')))
    : (c <= '_' || (c < 'f'
      ? (c < 'c'
        ? c == 'a'
        : c <= 'd')
      : (c <= 's' || (c >= 'u' && c <= 'z')))));
}

static inline bool aux_sym_include_directive_token1_character_set_3(int32_t c) {
  return (c < '_'
    ? (c < 'J'
      ? (c < 'D'
        ? (c < 'A'
          ? (c >= '0' && c <= '9')
          : c <= 'B')
        : (c <= 'D' || (c >= 'F' && c <= 'H')))
      : (c <= 'L' || (c < 'S'
        ? (c < 'Q'
          ? c == 'O'
          : c <= 'Q')
        : (c <= 'U' || (c >= 'W' && c <= 'Z')))))
    : (c <= '_' || (c < 'o'
      ? (c < 'f'
        ? (c < 'd'
          ? (c >= 'a' && c <= 'b')
          : c <= 'd')
        : (c <= 'h' || (c >= 'j' && c <= 'l')))
      : (c <= 'o' || (c < 'w'
        ? (c < 's'
          ? c == 'q'
          : c <= 'u')
        : (c <= 'x' || c == 'z'))))));
}

static inline bool aux_sym_include_directive_token1_character_set_4(int32_t c) {
  return (c < '_'
    ? (c < 'J'
      ? (c < 'D'
        ? (c < 'A'
          ? (c >= '0' && c <= '9')
          : c <= 'B')
        : (c <= 'D' || (c >= 'F' && c <= 'H')))
      : (c <= 'L' || (c < 'S'
        ? (c < 'Q'
          ? c == 'O'
          : c <= 'Q')
        : (c <= 'U' || (c >= 'W' && c <= 'Z')))))
    : (c <= '_' || (c < 'o'
      ? (c < 'f'
        ? (c < 'd'
          ? (c >= 'a' && c <= 'b')
          : c <= 'd')
        : (c <= 'h' || (c >= 'j' && c <= 'l')))
      : (c <= 'o' || (c < 's'
        ? c == 'q'
        : (c <= 'u' || (c >= 'w' && c <= 'z')))))));
}

static inline bool aux_sym_include_directive_token1_character_set_5(int32_t c) {
  return (c < '_'
    ? (c < 'E'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'B')
      : (c <= 'H' || (c < 'W'
        ? (c >= 'J' && c <= 'U')
        : c <= 'Z')))
    : (c <= '_' || (c < 'j'
      ? (c < 'e'
        ? (c >= 'a' && c <= 'b')
        : c <= 'h')
      : (c <= 'u' || (c >= 'w' && c <= 'z')))));
}

static inline bool aux_sym_include_directive_token1_character_set_6(int32_t c) {
  return (c < '_'
    ? (c < 'C'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'A')
      : (c <= 'D' || (c < 'U'
        ? (c >= 'F' && c <= 'S')
        : c <= 'Z')))
    : (c <= '_' || (c < 'f'
      ? (c < 'c'
        ? c == 'a'
        : c <= 'd')
      : (c <= 's' || (c >= 'u' && c <= 'z')))));
}

static inline bool aux_sym_include_directive_token1_character_set_7(int32_t c) {
  return (c < '_'
    ? (c < 'E'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'C')
      : (c <= 'M' || (c < 'T'
        ? (c >= 'O' && c <= 'R')
        : c <= 'Z')))
    : (c <= '_' || (c < 'o'
      ? (c < 'e'
        ? (c >= 'a' && c <= 'c')
        : c <= 'm')
      : (c <= 'r' || (c >= 't' && c <= 'z')))));
}

static inline bool aux_sym_include_directive_token1_character_set_8(int32_t c) {
  return (c < 'c'
    ? (c < '_'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'Z')
      : (c <= '_' || c == 'a'))
    : (c <= 'd' || (c < 't'
      ? (c < 'j'
        ? (c >= 'f' && c <= 'h')
        : c <= 'r')
      : (c <= 'v' || (c >= 'x' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '&') ADVANCE(144);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(94);
      if (aux_sym_include_directive_token1_character_set_1(lookahead)) ADVANCE(116);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(154);
      if (lookahead == '|') ADVANCE(145);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(144);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '|') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(142);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(262);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 15:
      if (lookahead == 'y') ADVANCE(261);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '&') ADVANCE(144);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '|') ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') SKIP(6)
      if (lookahead == ';') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(270);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 21:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 26:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 27:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(290);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 28:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(291);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 31:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 32:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 34:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 39:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 40:
      if (eof) ADVANCE(43);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '&') ADVANCE(144);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(152);
      if (lookahead == 'y') ADVANCE(155);
      if (lookahead == '|') ADVANCE(145);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '&') ADVANCE(144);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '|') ADVANCE(145);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '&') ADVANCE(144);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '|') ADVANCE(145);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__ws_sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__ws_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('E' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('e' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'w') ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(59);
      if (aux_sym_include_directive_token1_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (aux_sym_include_directive_token1_character_set_3(lookahead)) ADVANCE(116);
      if (lookahead == 'y') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (aux_sym_include_directive_token1_character_set_4(lookahead)) ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'w')) ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(116);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(116);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Q') ||
          ('T' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'q') ||
          ('t' <= lookahead && lookahead <= 'w') ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(74);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (aux_sym_include_directive_token1_character_set_5(lookahead)) ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'w') ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (aux_sym_include_directive_token1_character_set_6(lookahead)) ADVANCE(116);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('E' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('e' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'w') ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (aux_sym_include_directive_token1_character_set_7(lookahead)) ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          lookahead == 'N' ||
          lookahead == 'O' ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w') ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (aux_sym_include_directive_token1_character_set_8(lookahead)) ADVANCE(116);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          ('C' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Y' ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(57);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'J') ||
          ('L' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'L') ||
          ('N' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'P') ||
          ('R' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'p') ||
          ('r' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_extern_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_section_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_unary_expr_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'c') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'c') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'd') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'u') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'x') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (lookahead == 'y') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_local_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'd') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'd') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(219);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(220);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(300);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(212);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(191);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(223);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(161);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(208);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_global_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(1),
    [aux_sym_extern_directive_token1] = ACTIONS(1),
    [aux_sym_section_directive_token1] = ACTIONS(1),
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
    [aux_sym_local_label_token1] = ACTIONS(1),
    [aux_sym_global_label_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym__statement] = STATE(2),
    [sym__directive] = STATE(2),
    [sym_include_directive] = STATE(2),
    [sym_extern_directive] = STATE(2),
    [sym_section_directive] = STATE(2),
    [sym_imm_directive] = STATE(2),
    [sym__inc_name] = STATE(73),
    [sym__ext_name] = STATE(72),
    [sym__sec_name] = STATE(71),
    [sym__word_name] = STATE(26),
    [sym__byte_name] = STATE(26),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(70),
    [sym_relative] = STATE(70),
    [sym_immediate] = STATE(70),
    [sym_absolute] = STATE(70),
    [sym_indirect] = STATE(70),
    [sym__implied_opcode] = STATE(68),
    [sym__relative_opcode] = STATE(63),
    [sym__immediate_opcode] = STATE(60),
    [sym__absolute_opcode] = STATE(58),
    [sym__indirect_opcode] = STATE(57),
    [sym_local_label] = STATE(56),
    [sym_global_label] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [aux_sym_local_label_token1] = ACTIONS(29),
    [aux_sym_global_label_token1] = ACTIONS(31),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__directive] = STATE(3),
    [sym_include_directive] = STATE(3),
    [sym_extern_directive] = STATE(3),
    [sym_section_directive] = STATE(3),
    [sym_imm_directive] = STATE(3),
    [sym__inc_name] = STATE(73),
    [sym__ext_name] = STATE(72),
    [sym__sec_name] = STATE(71),
    [sym__word_name] = STATE(26),
    [sym__byte_name] = STATE(26),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(70),
    [sym_relative] = STATE(70),
    [sym_immediate] = STATE(70),
    [sym_absolute] = STATE(70),
    [sym_indirect] = STATE(70),
    [sym__implied_opcode] = STATE(68),
    [sym__relative_opcode] = STATE(63),
    [sym__immediate_opcode] = STATE(60),
    [sym__absolute_opcode] = STATE(58),
    [sym__indirect_opcode] = STATE(57),
    [sym_local_label] = STATE(56),
    [sym_global_label] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
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
    [aux_sym_local_label_token1] = ACTIONS(29),
    [aux_sym_global_label_token1] = ACTIONS(31),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__directive] = STATE(3),
    [sym_include_directive] = STATE(3),
    [sym_extern_directive] = STATE(3),
    [sym_section_directive] = STATE(3),
    [sym_imm_directive] = STATE(3),
    [sym__inc_name] = STATE(73),
    [sym__ext_name] = STATE(72),
    [sym__sec_name] = STATE(71),
    [sym__word_name] = STATE(26),
    [sym__byte_name] = STATE(26),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(70),
    [sym_relative] = STATE(70),
    [sym_immediate] = STATE(70),
    [sym_absolute] = STATE(70),
    [sym_indirect] = STATE(70),
    [sym__implied_opcode] = STATE(68),
    [sym__relative_opcode] = STATE(63),
    [sym__immediate_opcode] = STATE(60),
    [sym__absolute_opcode] = STATE(58),
    [sym__indirect_opcode] = STATE(57),
    [sym_local_label] = STATE(56),
    [sym_global_label] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(37),
    [aux_sym__ext_name_token1] = ACTIONS(40),
    [aux_sym__sec_name_token1] = ACTIONS(43),
    [aux_sym__word_name_token1] = ACTIONS(46),
    [aux_sym__byte_name_token1] = ACTIONS(46),
    [aux_sym__implied_opcode_token1] = ACTIONS(49),
    [aux_sym__implied_opcode_token2] = ACTIONS(49),
    [aux_sym__implied_opcode_token3] = ACTIONS(49),
    [aux_sym__implied_opcode_token4] = ACTIONS(49),
    [aux_sym__implied_opcode_token5] = ACTIONS(49),
    [aux_sym__implied_opcode_token6] = ACTIONS(49),
    [aux_sym__implied_opcode_token7] = ACTIONS(49),
    [aux_sym__implied_opcode_token8] = ACTIONS(49),
    [aux_sym__implied_opcode_token9] = ACTIONS(49),
    [aux_sym__implied_opcode_token10] = ACTIONS(49),
    [aux_sym__implied_opcode_token11] = ACTIONS(49),
    [aux_sym__implied_opcode_token12] = ACTIONS(49),
    [aux_sym__implied_opcode_token13] = ACTIONS(49),
    [aux_sym__implied_opcode_token14] = ACTIONS(49),
    [aux_sym__implied_opcode_token15] = ACTIONS(49),
    [aux_sym__implied_opcode_token16] = ACTIONS(49),
    [aux_sym__implied_opcode_token17] = ACTIONS(49),
    [aux_sym__implied_opcode_token18] = ACTIONS(49),
    [aux_sym__implied_opcode_token19] = ACTIONS(49),
    [aux_sym__implied_opcode_token20] = ACTIONS(49),
    [aux_sym__implied_opcode_token21] = ACTIONS(52),
    [aux_sym__implied_opcode_token22] = ACTIONS(52),
    [aux_sym__implied_opcode_token23] = ACTIONS(52),
    [aux_sym__implied_opcode_token24] = ACTIONS(52),
    [aux_sym__implied_opcode_token25] = ACTIONS(52),
    [aux_sym__implied_opcode_token26] = ACTIONS(52),
    [aux_sym__implied_opcode_token27] = ACTIONS(49),
    [aux_sym__implied_opcode_token28] = ACTIONS(49),
    [aux_sym__implied_opcode_token29] = ACTIONS(49),
    [aux_sym__implied_opcode_token30] = ACTIONS(49),
    [aux_sym__implied_opcode_token31] = ACTIONS(49),
    [aux_sym__implied_opcode_token32] = ACTIONS(49),
    [aux_sym__implied_opcode_token33] = ACTIONS(49),
    [aux_sym__implied_opcode_token34] = ACTIONS(49),
    [aux_sym__implied_opcode_token35] = ACTIONS(49),
    [aux_sym__implied_opcode_token36] = ACTIONS(49),
    [aux_sym__implied_opcode_token37] = ACTIONS(49),
    [aux_sym__relative_opcode_token1] = ACTIONS(55),
    [aux_sym__relative_opcode_token2] = ACTIONS(55),
    [aux_sym__relative_opcode_token3] = ACTIONS(55),
    [aux_sym__relative_opcode_token4] = ACTIONS(55),
    [aux_sym__relative_opcode_token5] = ACTIONS(55),
    [aux_sym__relative_opcode_token6] = ACTIONS(55),
    [aux_sym__relative_opcode_token7] = ACTIONS(55),
    [aux_sym__relative_opcode_token8] = ACTIONS(55),
    [aux_sym__relative_opcode_token9] = ACTIONS(55),
    [aux_sym__immediate_opcode_token1] = ACTIONS(58),
    [aux_sym__immediate_opcode_token2] = ACTIONS(58),
    [aux_sym__immediate_opcode_token3] = ACTIONS(61),
    [aux_sym__immediate_opcode_token4] = ACTIONS(58),
    [aux_sym__immediate_opcode_token5] = ACTIONS(61),
    [aux_sym__immediate_opcode_token6] = ACTIONS(61),
    [aux_sym__immediate_opcode_token7] = ACTIONS(58),
    [aux_sym__immediate_opcode_token8] = ACTIONS(58),
    [aux_sym__immediate_opcode_token9] = ACTIONS(61),
    [aux_sym__immediate_opcode_token10] = ACTIONS(61),
    [aux_sym__immediate_opcode_token11] = ACTIONS(58),
    [aux_sym__immediate_opcode_token12] = ACTIONS(58),
    [aux_sym__absolute_opcode_token1] = ACTIONS(64),
    [aux_sym__absolute_opcode_token2] = ACTIONS(67),
    [aux_sym__absolute_opcode_token3] = ACTIONS(64),
    [aux_sym__absolute_opcode_token4] = ACTIONS(67),
    [aux_sym__absolute_opcode_token5] = ACTIONS(67),
    [aux_sym__absolute_opcode_token6] = ACTIONS(67),
    [aux_sym__absolute_opcode_token7] = ACTIONS(67),
    [aux_sym__absolute_opcode_token8] = ACTIONS(67),
    [aux_sym_local_label_token1] = ACTIONS(70),
    [aux_sym_global_label_token1] = ACTIONS(73),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(78),
    [aux_sym__ext_name_token1] = ACTIONS(78),
    [aux_sym__sec_name_token1] = ACTIONS(78),
    [aux_sym__word_name_token1] = ACTIONS(78),
    [aux_sym__byte_name_token1] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
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
    [aux_sym_local_label_token1] = ACTIONS(78),
    [aux_sym_global_label_token1] = ACTIONS(78),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(82),
    [aux_sym__ext_name_token1] = ACTIONS(82),
    [aux_sym__sec_name_token1] = ACTIONS(82),
    [aux_sym__word_name_token1] = ACTIONS(82),
    [aux_sym__byte_name_token1] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [aux_sym__implied_opcode_token1] = ACTIONS(82),
    [aux_sym__implied_opcode_token2] = ACTIONS(82),
    [aux_sym__implied_opcode_token3] = ACTIONS(82),
    [aux_sym__implied_opcode_token4] = ACTIONS(82),
    [aux_sym__implied_opcode_token5] = ACTIONS(82),
    [aux_sym__implied_opcode_token6] = ACTIONS(82),
    [aux_sym__implied_opcode_token7] = ACTIONS(82),
    [aux_sym__implied_opcode_token8] = ACTIONS(82),
    [aux_sym__implied_opcode_token9] = ACTIONS(82),
    [aux_sym__implied_opcode_token10] = ACTIONS(82),
    [aux_sym__implied_opcode_token11] = ACTIONS(82),
    [aux_sym__implied_opcode_token12] = ACTIONS(82),
    [aux_sym__implied_opcode_token13] = ACTIONS(82),
    [aux_sym__implied_opcode_token14] = ACTIONS(82),
    [aux_sym__implied_opcode_token15] = ACTIONS(82),
    [aux_sym__implied_opcode_token16] = ACTIONS(82),
    [aux_sym__implied_opcode_token17] = ACTIONS(82),
    [aux_sym__implied_opcode_token18] = ACTIONS(82),
    [aux_sym__implied_opcode_token19] = ACTIONS(82),
    [aux_sym__implied_opcode_token20] = ACTIONS(82),
    [aux_sym__implied_opcode_token21] = ACTIONS(82),
    [aux_sym__implied_opcode_token22] = ACTIONS(82),
    [aux_sym__implied_opcode_token23] = ACTIONS(82),
    [aux_sym__implied_opcode_token24] = ACTIONS(82),
    [aux_sym__implied_opcode_token25] = ACTIONS(82),
    [aux_sym__implied_opcode_token26] = ACTIONS(82),
    [aux_sym__implied_opcode_token27] = ACTIONS(82),
    [aux_sym__implied_opcode_token28] = ACTIONS(82),
    [aux_sym__implied_opcode_token29] = ACTIONS(82),
    [aux_sym__implied_opcode_token30] = ACTIONS(82),
    [aux_sym__implied_opcode_token31] = ACTIONS(82),
    [aux_sym__implied_opcode_token32] = ACTIONS(82),
    [aux_sym__implied_opcode_token33] = ACTIONS(82),
    [aux_sym__implied_opcode_token34] = ACTIONS(82),
    [aux_sym__implied_opcode_token35] = ACTIONS(82),
    [aux_sym__implied_opcode_token36] = ACTIONS(82),
    [aux_sym__implied_opcode_token37] = ACTIONS(82),
    [aux_sym__relative_opcode_token1] = ACTIONS(82),
    [aux_sym__relative_opcode_token2] = ACTIONS(82),
    [aux_sym__relative_opcode_token3] = ACTIONS(82),
    [aux_sym__relative_opcode_token4] = ACTIONS(82),
    [aux_sym__relative_opcode_token5] = ACTIONS(82),
    [aux_sym__relative_opcode_token6] = ACTIONS(82),
    [aux_sym__relative_opcode_token7] = ACTIONS(82),
    [aux_sym__relative_opcode_token8] = ACTIONS(82),
    [aux_sym__relative_opcode_token9] = ACTIONS(82),
    [aux_sym__immediate_opcode_token1] = ACTIONS(82),
    [aux_sym__immediate_opcode_token2] = ACTIONS(82),
    [aux_sym__immediate_opcode_token3] = ACTIONS(82),
    [aux_sym__immediate_opcode_token4] = ACTIONS(82),
    [aux_sym__immediate_opcode_token5] = ACTIONS(82),
    [aux_sym__immediate_opcode_token6] = ACTIONS(82),
    [aux_sym__immediate_opcode_token7] = ACTIONS(82),
    [aux_sym__immediate_opcode_token8] = ACTIONS(82),
    [aux_sym__immediate_opcode_token9] = ACTIONS(82),
    [aux_sym__immediate_opcode_token10] = ACTIONS(82),
    [aux_sym__immediate_opcode_token11] = ACTIONS(82),
    [aux_sym__immediate_opcode_token12] = ACTIONS(82),
    [aux_sym__absolute_opcode_token1] = ACTIONS(82),
    [aux_sym__absolute_opcode_token2] = ACTIONS(82),
    [aux_sym__absolute_opcode_token3] = ACTIONS(82),
    [aux_sym__absolute_opcode_token4] = ACTIONS(82),
    [aux_sym__absolute_opcode_token5] = ACTIONS(82),
    [aux_sym__absolute_opcode_token6] = ACTIONS(82),
    [aux_sym__absolute_opcode_token7] = ACTIONS(82),
    [aux_sym__absolute_opcode_token8] = ACTIONS(82),
    [aux_sym_local_label_token1] = ACTIONS(82),
    [aux_sym_global_label_token1] = ACTIONS(82),
  },
  [6] = {
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
    [aux_sym_local_label_token1] = ACTIONS(86),
    [aux_sym_global_label_token1] = ACTIONS(86),
  },
  [7] = {
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
    [aux_sym_local_label_token1] = ACTIONS(90),
    [aux_sym_global_label_token1] = ACTIONS(90),
  },
  [8] = {
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
    [aux_sym_local_label_token1] = ACTIONS(94),
    [aux_sym_global_label_token1] = ACTIONS(94),
  },
  [9] = {
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
    [aux_sym_local_label_token1] = ACTIONS(98),
    [aux_sym_global_label_token1] = ACTIONS(98),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(102),
    [aux_sym__ext_name_token1] = ACTIONS(102),
    [aux_sym__sec_name_token1] = ACTIONS(102),
    [aux_sym__word_name_token1] = ACTIONS(102),
    [aux_sym__byte_name_token1] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_LT_LT] = ACTIONS(104),
    [anon_sym_GT_GT] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
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
    [aux_sym_local_label_token1] = ACTIONS(102),
    [aux_sym_global_label_token1] = ACTIONS(102),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(108),
    [aux_sym__ext_name_token1] = ACTIONS(108),
    [aux_sym__sec_name_token1] = ACTIONS(108),
    [aux_sym__word_name_token1] = ACTIONS(108),
    [aux_sym__byte_name_token1] = ACTIONS(108),
    [aux_sym__implied_opcode_token1] = ACTIONS(108),
    [aux_sym__implied_opcode_token2] = ACTIONS(108),
    [aux_sym__implied_opcode_token3] = ACTIONS(108),
    [aux_sym__implied_opcode_token4] = ACTIONS(108),
    [aux_sym__implied_opcode_token5] = ACTIONS(108),
    [aux_sym__implied_opcode_token6] = ACTIONS(108),
    [aux_sym__implied_opcode_token7] = ACTIONS(108),
    [aux_sym__implied_opcode_token8] = ACTIONS(108),
    [aux_sym__implied_opcode_token9] = ACTIONS(108),
    [aux_sym__implied_opcode_token10] = ACTIONS(108),
    [aux_sym__implied_opcode_token11] = ACTIONS(108),
    [aux_sym__implied_opcode_token12] = ACTIONS(108),
    [aux_sym__implied_opcode_token13] = ACTIONS(108),
    [aux_sym__implied_opcode_token14] = ACTIONS(108),
    [aux_sym__implied_opcode_token15] = ACTIONS(108),
    [aux_sym__implied_opcode_token16] = ACTIONS(108),
    [aux_sym__implied_opcode_token17] = ACTIONS(108),
    [aux_sym__implied_opcode_token18] = ACTIONS(108),
    [aux_sym__implied_opcode_token19] = ACTIONS(108),
    [aux_sym__implied_opcode_token20] = ACTIONS(108),
    [aux_sym__implied_opcode_token21] = ACTIONS(108),
    [aux_sym__implied_opcode_token22] = ACTIONS(108),
    [aux_sym__implied_opcode_token23] = ACTIONS(108),
    [aux_sym__implied_opcode_token24] = ACTIONS(108),
    [aux_sym__implied_opcode_token25] = ACTIONS(108),
    [aux_sym__implied_opcode_token26] = ACTIONS(108),
    [aux_sym__implied_opcode_token27] = ACTIONS(108),
    [aux_sym__implied_opcode_token28] = ACTIONS(108),
    [aux_sym__implied_opcode_token29] = ACTIONS(108),
    [aux_sym__implied_opcode_token30] = ACTIONS(108),
    [aux_sym__implied_opcode_token31] = ACTIONS(108),
    [aux_sym__implied_opcode_token32] = ACTIONS(108),
    [aux_sym__implied_opcode_token33] = ACTIONS(108),
    [aux_sym__implied_opcode_token34] = ACTIONS(108),
    [aux_sym__implied_opcode_token35] = ACTIONS(108),
    [aux_sym__implied_opcode_token36] = ACTIONS(108),
    [aux_sym__implied_opcode_token37] = ACTIONS(108),
    [aux_sym__relative_opcode_token1] = ACTIONS(108),
    [aux_sym__relative_opcode_token2] = ACTIONS(108),
    [aux_sym__relative_opcode_token3] = ACTIONS(108),
    [aux_sym__relative_opcode_token4] = ACTIONS(108),
    [aux_sym__relative_opcode_token5] = ACTIONS(108),
    [aux_sym__relative_opcode_token6] = ACTIONS(108),
    [aux_sym__relative_opcode_token7] = ACTIONS(108),
    [aux_sym__relative_opcode_token8] = ACTIONS(108),
    [aux_sym__relative_opcode_token9] = ACTIONS(108),
    [aux_sym__immediate_opcode_token1] = ACTIONS(108),
    [aux_sym__immediate_opcode_token2] = ACTIONS(108),
    [aux_sym__immediate_opcode_token3] = ACTIONS(108),
    [aux_sym__immediate_opcode_token4] = ACTIONS(108),
    [aux_sym__immediate_opcode_token5] = ACTIONS(108),
    [aux_sym__immediate_opcode_token6] = ACTIONS(108),
    [aux_sym__immediate_opcode_token7] = ACTIONS(108),
    [aux_sym__immediate_opcode_token8] = ACTIONS(108),
    [aux_sym__immediate_opcode_token9] = ACTIONS(108),
    [aux_sym__immediate_opcode_token10] = ACTIONS(108),
    [aux_sym__immediate_opcode_token11] = ACTIONS(108),
    [aux_sym__immediate_opcode_token12] = ACTIONS(108),
    [aux_sym__absolute_opcode_token1] = ACTIONS(108),
    [aux_sym__absolute_opcode_token2] = ACTIONS(108),
    [aux_sym__absolute_opcode_token3] = ACTIONS(108),
    [aux_sym__absolute_opcode_token4] = ACTIONS(108),
    [aux_sym__absolute_opcode_token5] = ACTIONS(108),
    [aux_sym__absolute_opcode_token6] = ACTIONS(108),
    [aux_sym__absolute_opcode_token7] = ACTIONS(108),
    [aux_sym__absolute_opcode_token8] = ACTIONS(108),
    [aux_sym_local_label_token1] = ACTIONS(108),
    [aux_sym_global_label_token1] = ACTIONS(108),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(112),
    [aux_sym__ext_name_token1] = ACTIONS(112),
    [aux_sym__sec_name_token1] = ACTIONS(112),
    [aux_sym__word_name_token1] = ACTIONS(112),
    [aux_sym__byte_name_token1] = ACTIONS(112),
    [aux_sym__implied_opcode_token1] = ACTIONS(112),
    [aux_sym__implied_opcode_token2] = ACTIONS(112),
    [aux_sym__implied_opcode_token3] = ACTIONS(112),
    [aux_sym__implied_opcode_token4] = ACTIONS(112),
    [aux_sym__implied_opcode_token5] = ACTIONS(112),
    [aux_sym__implied_opcode_token6] = ACTIONS(112),
    [aux_sym__implied_opcode_token7] = ACTIONS(112),
    [aux_sym__implied_opcode_token8] = ACTIONS(112),
    [aux_sym__implied_opcode_token9] = ACTIONS(112),
    [aux_sym__implied_opcode_token10] = ACTIONS(112),
    [aux_sym__implied_opcode_token11] = ACTIONS(112),
    [aux_sym__implied_opcode_token12] = ACTIONS(112),
    [aux_sym__implied_opcode_token13] = ACTIONS(112),
    [aux_sym__implied_opcode_token14] = ACTIONS(112),
    [aux_sym__implied_opcode_token15] = ACTIONS(112),
    [aux_sym__implied_opcode_token16] = ACTIONS(112),
    [aux_sym__implied_opcode_token17] = ACTIONS(112),
    [aux_sym__implied_opcode_token18] = ACTIONS(112),
    [aux_sym__implied_opcode_token19] = ACTIONS(112),
    [aux_sym__implied_opcode_token20] = ACTIONS(112),
    [aux_sym__implied_opcode_token21] = ACTIONS(112),
    [aux_sym__implied_opcode_token22] = ACTIONS(112),
    [aux_sym__implied_opcode_token23] = ACTIONS(112),
    [aux_sym__implied_opcode_token24] = ACTIONS(112),
    [aux_sym__implied_opcode_token25] = ACTIONS(112),
    [aux_sym__implied_opcode_token26] = ACTIONS(112),
    [aux_sym__implied_opcode_token27] = ACTIONS(112),
    [aux_sym__implied_opcode_token28] = ACTIONS(112),
    [aux_sym__implied_opcode_token29] = ACTIONS(112),
    [aux_sym__implied_opcode_token30] = ACTIONS(112),
    [aux_sym__implied_opcode_token31] = ACTIONS(112),
    [aux_sym__implied_opcode_token32] = ACTIONS(112),
    [aux_sym__implied_opcode_token33] = ACTIONS(112),
    [aux_sym__implied_opcode_token34] = ACTIONS(112),
    [aux_sym__implied_opcode_token35] = ACTIONS(112),
    [aux_sym__implied_opcode_token36] = ACTIONS(112),
    [aux_sym__implied_opcode_token37] = ACTIONS(112),
    [aux_sym__relative_opcode_token1] = ACTIONS(112),
    [aux_sym__relative_opcode_token2] = ACTIONS(112),
    [aux_sym__relative_opcode_token3] = ACTIONS(112),
    [aux_sym__relative_opcode_token4] = ACTIONS(112),
    [aux_sym__relative_opcode_token5] = ACTIONS(112),
    [aux_sym__relative_opcode_token6] = ACTIONS(112),
    [aux_sym__relative_opcode_token7] = ACTIONS(112),
    [aux_sym__relative_opcode_token8] = ACTIONS(112),
    [aux_sym__relative_opcode_token9] = ACTIONS(112),
    [aux_sym__immediate_opcode_token1] = ACTIONS(112),
    [aux_sym__immediate_opcode_token2] = ACTIONS(112),
    [aux_sym__immediate_opcode_token3] = ACTIONS(112),
    [aux_sym__immediate_opcode_token4] = ACTIONS(112),
    [aux_sym__immediate_opcode_token5] = ACTIONS(112),
    [aux_sym__immediate_opcode_token6] = ACTIONS(112),
    [aux_sym__immediate_opcode_token7] = ACTIONS(112),
    [aux_sym__immediate_opcode_token8] = ACTIONS(112),
    [aux_sym__immediate_opcode_token9] = ACTIONS(112),
    [aux_sym__immediate_opcode_token10] = ACTIONS(112),
    [aux_sym__immediate_opcode_token11] = ACTIONS(112),
    [aux_sym__immediate_opcode_token12] = ACTIONS(112),
    [aux_sym__absolute_opcode_token1] = ACTIONS(112),
    [aux_sym__absolute_opcode_token2] = ACTIONS(112),
    [aux_sym__absolute_opcode_token3] = ACTIONS(112),
    [aux_sym__absolute_opcode_token4] = ACTIONS(112),
    [aux_sym__absolute_opcode_token5] = ACTIONS(112),
    [aux_sym__absolute_opcode_token6] = ACTIONS(112),
    [aux_sym__absolute_opcode_token7] = ACTIONS(112),
    [aux_sym__absolute_opcode_token8] = ACTIONS(112),
    [aux_sym_local_label_token1] = ACTIONS(112),
    [aux_sym_global_label_token1] = ACTIONS(112),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(116),
    [aux_sym__ext_name_token1] = ACTIONS(116),
    [aux_sym__sec_name_token1] = ACTIONS(116),
    [aux_sym__word_name_token1] = ACTIONS(116),
    [aux_sym__byte_name_token1] = ACTIONS(116),
    [aux_sym__implied_opcode_token1] = ACTIONS(116),
    [aux_sym__implied_opcode_token2] = ACTIONS(116),
    [aux_sym__implied_opcode_token3] = ACTIONS(116),
    [aux_sym__implied_opcode_token4] = ACTIONS(116),
    [aux_sym__implied_opcode_token5] = ACTIONS(116),
    [aux_sym__implied_opcode_token6] = ACTIONS(116),
    [aux_sym__implied_opcode_token7] = ACTIONS(116),
    [aux_sym__implied_opcode_token8] = ACTIONS(116),
    [aux_sym__implied_opcode_token9] = ACTIONS(116),
    [aux_sym__implied_opcode_token10] = ACTIONS(116),
    [aux_sym__implied_opcode_token11] = ACTIONS(116),
    [aux_sym__implied_opcode_token12] = ACTIONS(116),
    [aux_sym__implied_opcode_token13] = ACTIONS(116),
    [aux_sym__implied_opcode_token14] = ACTIONS(116),
    [aux_sym__implied_opcode_token15] = ACTIONS(116),
    [aux_sym__implied_opcode_token16] = ACTIONS(116),
    [aux_sym__implied_opcode_token17] = ACTIONS(116),
    [aux_sym__implied_opcode_token18] = ACTIONS(116),
    [aux_sym__implied_opcode_token19] = ACTIONS(116),
    [aux_sym__implied_opcode_token20] = ACTIONS(116),
    [aux_sym__implied_opcode_token21] = ACTIONS(116),
    [aux_sym__implied_opcode_token22] = ACTIONS(116),
    [aux_sym__implied_opcode_token23] = ACTIONS(116),
    [aux_sym__implied_opcode_token24] = ACTIONS(116),
    [aux_sym__implied_opcode_token25] = ACTIONS(116),
    [aux_sym__implied_opcode_token26] = ACTIONS(116),
    [aux_sym__implied_opcode_token27] = ACTIONS(116),
    [aux_sym__implied_opcode_token28] = ACTIONS(116),
    [aux_sym__implied_opcode_token29] = ACTIONS(116),
    [aux_sym__implied_opcode_token30] = ACTIONS(116),
    [aux_sym__implied_opcode_token31] = ACTIONS(116),
    [aux_sym__implied_opcode_token32] = ACTIONS(116),
    [aux_sym__implied_opcode_token33] = ACTIONS(116),
    [aux_sym__implied_opcode_token34] = ACTIONS(116),
    [aux_sym__implied_opcode_token35] = ACTIONS(116),
    [aux_sym__implied_opcode_token36] = ACTIONS(116),
    [aux_sym__implied_opcode_token37] = ACTIONS(116),
    [aux_sym__relative_opcode_token1] = ACTIONS(116),
    [aux_sym__relative_opcode_token2] = ACTIONS(116),
    [aux_sym__relative_opcode_token3] = ACTIONS(116),
    [aux_sym__relative_opcode_token4] = ACTIONS(116),
    [aux_sym__relative_opcode_token5] = ACTIONS(116),
    [aux_sym__relative_opcode_token6] = ACTIONS(116),
    [aux_sym__relative_opcode_token7] = ACTIONS(116),
    [aux_sym__relative_opcode_token8] = ACTIONS(116),
    [aux_sym__relative_opcode_token9] = ACTIONS(116),
    [aux_sym__immediate_opcode_token1] = ACTIONS(116),
    [aux_sym__immediate_opcode_token2] = ACTIONS(116),
    [aux_sym__immediate_opcode_token3] = ACTIONS(116),
    [aux_sym__immediate_opcode_token4] = ACTIONS(116),
    [aux_sym__immediate_opcode_token5] = ACTIONS(116),
    [aux_sym__immediate_opcode_token6] = ACTIONS(116),
    [aux_sym__immediate_opcode_token7] = ACTIONS(116),
    [aux_sym__immediate_opcode_token8] = ACTIONS(116),
    [aux_sym__immediate_opcode_token9] = ACTIONS(116),
    [aux_sym__immediate_opcode_token10] = ACTIONS(116),
    [aux_sym__immediate_opcode_token11] = ACTIONS(116),
    [aux_sym__immediate_opcode_token12] = ACTIONS(116),
    [aux_sym__absolute_opcode_token1] = ACTIONS(116),
    [aux_sym__absolute_opcode_token2] = ACTIONS(116),
    [aux_sym__absolute_opcode_token3] = ACTIONS(116),
    [aux_sym__absolute_opcode_token4] = ACTIONS(116),
    [aux_sym__absolute_opcode_token5] = ACTIONS(116),
    [aux_sym__absolute_opcode_token6] = ACTIONS(116),
    [aux_sym__absolute_opcode_token7] = ACTIONS(116),
    [aux_sym__absolute_opcode_token8] = ACTIONS(116),
    [aux_sym_local_label_token1] = ACTIONS(116),
    [aux_sym_global_label_token1] = ACTIONS(116),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(120),
    [aux_sym__ext_name_token1] = ACTIONS(120),
    [aux_sym__sec_name_token1] = ACTIONS(120),
    [aux_sym__word_name_token1] = ACTIONS(120),
    [aux_sym__byte_name_token1] = ACTIONS(120),
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
    [aux_sym_local_label_token1] = ACTIONS(120),
    [aux_sym_global_label_token1] = ACTIONS(120),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(122),
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
    [aux_sym_local_label_token1] = ACTIONS(124),
    [aux_sym_global_label_token1] = ACTIONS(124),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(126),
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
    [aux_sym_local_label_token1] = ACTIONS(128),
    [aux_sym_global_label_token1] = ACTIONS(128),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      aux_sym_num_literal_token1,
    ACTIONS(134), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(136), 1,
      aux_sym_local_label_token1,
    ACTIONS(138), 1,
      aux_sym_global_label_token1,
    STATE(40), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [28] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      aux_sym_num_literal_token1,
    ACTIONS(134), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(136), 1,
      aux_sym_local_label_token1,
    ACTIONS(138), 1,
      aux_sym_global_label_token1,
    STATE(41), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [56] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      aux_sym_num_literal_token1,
    ACTIONS(134), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(136), 1,
      aux_sym_local_label_token1,
    ACTIONS(138), 1,
      aux_sym_global_label_token1,
    STATE(36), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [84] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      aux_sym_num_literal_token1,
    ACTIONS(144), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(146), 1,
      aux_sym_local_label_token1,
    ACTIONS(148), 1,
      aux_sym_global_label_token1,
    STATE(6), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      aux_sym_num_literal_token1,
    ACTIONS(144), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(146), 1,
      aux_sym_local_label_token1,
    ACTIONS(148), 1,
      aux_sym_global_label_token1,
    STATE(10), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [140] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      aux_sym_num_literal_token1,
    ACTIONS(144), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(146), 1,
      aux_sym_local_label_token1,
    ACTIONS(148), 1,
      aux_sym_global_label_token1,
    STATE(8), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [168] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      aux_sym_num_literal_token1,
    ACTIONS(144), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(146), 1,
      aux_sym_local_label_token1,
    ACTIONS(148), 1,
      aux_sym_global_label_token1,
    STATE(38), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [196] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      aux_sym_num_literal_token1,
    ACTIONS(144), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(146), 1,
      aux_sym_local_label_token1,
    ACTIONS(148), 1,
      aux_sym_global_label_token1,
    STATE(30), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [224] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      aux_sym_num_literal_token1,
    ACTIONS(134), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(136), 1,
      aux_sym_local_label_token1,
    ACTIONS(138), 1,
      aux_sym_global_label_token1,
    STATE(28), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [252] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      aux_sym_num_literal_token1,
    ACTIONS(134), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(136), 1,
      aux_sym_local_label_token1,
    ACTIONS(138), 1,
      aux_sym_global_label_token1,
    STATE(37), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [280] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      aux_sym_num_literal_token1,
    ACTIONS(144), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(146), 1,
      aux_sym_local_label_token1,
    ACTIONS(148), 1,
      aux_sym_global_label_token1,
    STATE(39), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [308] = 5,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__ws_end,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(59), 2,
      sym__reg_x,
      sym__reg_y,
    ACTIONS(154), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [332] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      aux_sym_num_literal_token1,
    ACTIONS(134), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(136), 1,
      aux_sym_local_label_token1,
    ACTIONS(138), 1,
      aux_sym_global_label_token1,
    STATE(35), 7,
      sym__expr,
      sym__identifier,
      sym_num_literal,
      sym_binary_expr,
      sym_unary_expr,
      sym_local_label,
      sym_global_label,
  [360] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      sym__reg_x,
    ACTIONS(104), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [383] = 3,
    ACTIONS(80), 1,
      sym__ws_end,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(82), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [401] = 3,
    ACTIONS(76), 1,
      sym__ws_end,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(78), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [419] = 3,
    ACTIONS(96), 1,
      sym__ws_end,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(98), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [437] = 3,
    ACTIONS(88), 1,
      sym__ws_end,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(90), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [455] = 3,
    ACTIONS(92), 1,
      sym__ws_end,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(94), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [473] = 3,
    ACTIONS(84), 1,
      sym__ws_end,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(86), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [491] = 3,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__ws_end,
    ACTIONS(154), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [542] = 3,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym__ws_end,
    ACTIONS(154), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [559] = 3,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__ws_end,
    ACTIONS(154), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [576] = 4,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__ws_end,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym__reg_y,
  [589] = 4,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      sym__ws_end,
    STATE(67), 1,
      sym__reg_y,
  [602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_x,
    ACTIONS(180), 1,
      anon_sym_y,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [622] = 3,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym__ws_sep,
    ACTIONS(188), 1,
      sym__ws_end,
  [632] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__ws_end,
  [639] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym__ws_end,
  [646] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym__ws_end,
  [653] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym__ws_end,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN2,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_POUND,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_section_directive_token1,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_extern_directive_token1,
  [688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_include_directive_token1,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [702] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__ws_sep,
  [709] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__ws_sep,
  [716] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym__ws_end,
  [723] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__ws_sep,
  [730] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym__ws_end,
  [737] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__ws_end,
  [744] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__ws_sep,
  [751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_x,
  [758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_y,
  [772] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__ws_end,
  [779] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__ws_end,
  [786] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__ws_end,
  [793] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__ws_end,
  [800] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__ws_sep,
  [807] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__ws_sep,
  [814] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__ws_sep,
  [821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [828] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__ws_sep,
  [835] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__ws_sep,
  [842] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__ws_sep,
  [849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [856] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__ws_sep,
  [863] = 2,
    ACTIONS(150), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__ws_sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 28,
  [SMALL_STATE(19)] = 56,
  [SMALL_STATE(20)] = 84,
  [SMALL_STATE(21)] = 112,
  [SMALL_STATE(22)] = 140,
  [SMALL_STATE(23)] = 168,
  [SMALL_STATE(24)] = 196,
  [SMALL_STATE(25)] = 224,
  [SMALL_STATE(26)] = 252,
  [SMALL_STATE(27)] = 280,
  [SMALL_STATE(28)] = 308,
  [SMALL_STATE(29)] = 332,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 383,
  [SMALL_STATE(32)] = 401,
  [SMALL_STATE(33)] = 419,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 455,
  [SMALL_STATE(36)] = 473,
  [SMALL_STATE(37)] = 491,
  [SMALL_STATE(38)] = 508,
  [SMALL_STATE(39)] = 525,
  [SMALL_STATE(40)] = 542,
  [SMALL_STATE(41)] = 559,
  [SMALL_STATE(42)] = 576,
  [SMALL_STATE(43)] = 589,
  [SMALL_STATE(44)] = 602,
  [SMALL_STATE(45)] = 612,
  [SMALL_STATE(46)] = 622,
  [SMALL_STATE(47)] = 632,
  [SMALL_STATE(48)] = 639,
  [SMALL_STATE(49)] = 646,
  [SMALL_STATE(50)] = 653,
  [SMALL_STATE(51)] = 660,
  [SMALL_STATE(52)] = 667,
  [SMALL_STATE(53)] = 674,
  [SMALL_STATE(54)] = 681,
  [SMALL_STATE(55)] = 688,
  [SMALL_STATE(56)] = 695,
  [SMALL_STATE(57)] = 702,
  [SMALL_STATE(58)] = 709,
  [SMALL_STATE(59)] = 716,
  [SMALL_STATE(60)] = 723,
  [SMALL_STATE(61)] = 730,
  [SMALL_STATE(62)] = 737,
  [SMALL_STATE(63)] = 744,
  [SMALL_STATE(64)] = 751,
  [SMALL_STATE(65)] = 758,
  [SMALL_STATE(66)] = 765,
  [SMALL_STATE(67)] = 772,
  [SMALL_STATE(68)] = 779,
  [SMALL_STATE(69)] = 786,
  [SMALL_STATE(70)] = 793,
  [SMALL_STATE(71)] = 800,
  [SMALL_STATE(72)] = 807,
  [SMALL_STATE(73)] = 814,
  [SMALL_STATE(74)] = 821,
  [SMALL_STATE(75)] = 828,
  [SMALL_STATE(76)] = 835,
  [SMALL_STATE(77)] = 842,
  [SMALL_STATE(78)] = 849,
  [SMALL_STATE(79)] = 856,
  [SMALL_STATE(80)] = 863,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_label, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_label, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label, 1),
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
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_directive, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_directive, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operation, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_directive, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_directive, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute_opcode, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implied_opcode, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_x, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_y, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 7, .dynamic_precedence = 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_opcode, 1),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1),
  [246] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_opcode, 1),
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
