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
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
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
  anon_sym_DQUOTE = 6,
  aux_sym_string_token1 = 7,
  aux_sym_string_token2 = 8,
  aux_sym_string_token3 = 9,
  aux_sym__inc_name_token1 = 10,
  aux_sym__ext_name_token1 = 11,
  aux_sym__sec_name_token1 = 12,
  aux_sym__word_name_token1 = 13,
  aux_sym__byte_name_token1 = 14,
  aux_sym__ascii_name_token1 = 15,
  aux_sym__asciiz_name_token1 = 16,
  anon_sym_EQ = 17,
  anon_sym_COLON = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  sym_num_literal = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_LT_LT = 26,
  anon_sym_GT_GT = 27,
  anon_sym_AMP = 28,
  anon_sym_PIPE = 29,
  aux_sym_unary_expr_token1 = 30,
  anon_sym_POUND = 31,
  anon_sym_LPAREN2 = 32,
  anon_sym_COMMA = 33,
  anon_sym_x = 34,
  anon_sym_y = 35,
  aux_sym__implied_opcode_token1 = 36,
  aux_sym__implied_opcode_token2 = 37,
  aux_sym__implied_opcode_token3 = 38,
  aux_sym__implied_opcode_token4 = 39,
  aux_sym__implied_opcode_token5 = 40,
  aux_sym__implied_opcode_token6 = 41,
  aux_sym__implied_opcode_token7 = 42,
  aux_sym__implied_opcode_token8 = 43,
  aux_sym__implied_opcode_token9 = 44,
  aux_sym__implied_opcode_token10 = 45,
  aux_sym__implied_opcode_token11 = 46,
  aux_sym__implied_opcode_token12 = 47,
  aux_sym__implied_opcode_token13 = 48,
  aux_sym__implied_opcode_token14 = 49,
  aux_sym__implied_opcode_token15 = 50,
  aux_sym__implied_opcode_token16 = 51,
  aux_sym__implied_opcode_token17 = 52,
  aux_sym__implied_opcode_token18 = 53,
  aux_sym__implied_opcode_token19 = 54,
  aux_sym__implied_opcode_token20 = 55,
  aux_sym__implied_opcode_token21 = 56,
  aux_sym__implied_opcode_token22 = 57,
  aux_sym__implied_opcode_token23 = 58,
  aux_sym__implied_opcode_token24 = 59,
  aux_sym__implied_opcode_token25 = 60,
  aux_sym__implied_opcode_token26 = 61,
  aux_sym__implied_opcode_token27 = 62,
  aux_sym__implied_opcode_token28 = 63,
  aux_sym__implied_opcode_token29 = 64,
  aux_sym__implied_opcode_token30 = 65,
  aux_sym__implied_opcode_token31 = 66,
  aux_sym__implied_opcode_token32 = 67,
  aux_sym__implied_opcode_token33 = 68,
  aux_sym__implied_opcode_token34 = 69,
  aux_sym__implied_opcode_token35 = 70,
  aux_sym__implied_opcode_token36 = 71,
  aux_sym__implied_opcode_token37 = 72,
  aux_sym__relative_opcode_token1 = 73,
  aux_sym__relative_opcode_token2 = 74,
  aux_sym__relative_opcode_token3 = 75,
  aux_sym__relative_opcode_token4 = 76,
  aux_sym__relative_opcode_token5 = 77,
  aux_sym__relative_opcode_token6 = 78,
  aux_sym__relative_opcode_token7 = 79,
  aux_sym__relative_opcode_token8 = 80,
  aux_sym__relative_opcode_token9 = 81,
  aux_sym__immediate_opcode_token1 = 82,
  aux_sym__immediate_opcode_token2 = 83,
  aux_sym__immediate_opcode_token3 = 84,
  aux_sym__immediate_opcode_token4 = 85,
  aux_sym__immediate_opcode_token5 = 86,
  aux_sym__immediate_opcode_token6 = 87,
  aux_sym__immediate_opcode_token7 = 88,
  aux_sym__immediate_opcode_token8 = 89,
  aux_sym__immediate_opcode_token9 = 90,
  aux_sym__immediate_opcode_token10 = 91,
  aux_sym__immediate_opcode_token11 = 92,
  aux_sym__immediate_opcode_token12 = 93,
  aux_sym__absolute_opcode_token1 = 94,
  aux_sym__absolute_opcode_token2 = 95,
  aux_sym__absolute_opcode_token3 = 96,
  aux_sym__absolute_opcode_token4 = 97,
  aux_sym__absolute_opcode_token5 = 98,
  aux_sym__absolute_opcode_token6 = 99,
  aux_sym__absolute_opcode_token7 = 100,
  aux_sym__absolute_opcode_token8 = 101,
  sym_local_label = 102,
  sym_global_label = 103,
  sym_source_file = 104,
  sym__statement = 105,
  sym__directive = 106,
  sym_file_directive = 107,
  sym_label_directive = 108,
  sym_section_directive = 109,
  sym_imm_directive = 110,
  sym_str_directive = 111,
  sym_string = 112,
  sym__inc_name = 113,
  sym__ext_name = 114,
  sym__sec_name = 115,
  sym__word_name = 116,
  sym__byte_name = 117,
  sym__ascii_name = 118,
  sym__asciiz_name = 119,
  sym_assignment = 120,
  sym_label = 121,
  sym__expr = 122,
  sym__identifier = 123,
  sym_binary_expr = 124,
  sym_unary_expr = 125,
  sym__operation = 126,
  sym_implied = 127,
  sym_relative = 128,
  sym_immediate = 129,
  sym_absolute = 130,
  sym_indirect = 131,
  sym__reg_x = 132,
  sym__reg_y = 133,
  sym__implied_opcode = 134,
  sym__relative_opcode = 135,
  sym__immediate_opcode = 136,
  sym__absolute_opcode = 137,
  sym__indirect_opcode = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_string_repeat1 = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__ws_sep] = "_ws_sep",
  [aux_sym_file_directive_token1] = "file_name",
  [aux_sym_file_directive_token2] = "file_name",
  [aux_sym_section_directive_token1] = "section_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "escape",
  [aux_sym_string_token3] = "escape",
  [aux_sym__inc_name_token1] = "directive",
  [aux_sym__ext_name_token1] = "directive",
  [aux_sym__sec_name_token1] = "directive",
  [aux_sym__word_name_token1] = "directive",
  [aux_sym__byte_name_token1] = "directive",
  [aux_sym__ascii_name_token1] = "directive",
  [aux_sym__asciiz_name_token1] = "directive",
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
  [sym_str_directive] = "str_directive",
  [sym_string] = "string",
  [sym__inc_name] = "_inc_name",
  [sym__ext_name] = "_ext_name",
  [sym__sec_name] = "_sec_name",
  [sym__word_name] = "_word_name",
  [sym__byte_name] = "_byte_name",
  [sym__ascii_name] = "_ascii_name",
  [sym__asciiz_name] = "_asciiz_name",
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
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__ws_sep] = sym__ws_sep,
  [aux_sym_file_directive_token1] = aux_sym_file_directive_token1,
  [aux_sym_file_directive_token2] = aux_sym_file_directive_token1,
  [aux_sym_section_directive_token1] = aux_sym_section_directive_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token2,
  [aux_sym__inc_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__ext_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__sec_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__word_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__byte_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__ascii_name_token1] = aux_sym__inc_name_token1,
  [aux_sym__asciiz_name_token1] = aux_sym__inc_name_token1,
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
  [sym_str_directive] = sym_str_directive,
  [sym_string] = sym_string,
  [sym__inc_name] = sym__inc_name,
  [sym__ext_name] = sym__ext_name,
  [sym__sec_name] = sym__sec_name,
  [sym__word_name] = sym__word_name,
  [sym__byte_name] = sym__byte_name,
  [sym__ascii_name] = sym__ascii_name,
  [sym__asciiz_name] = sym__asciiz_name,
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
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token3] = {
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
  [aux_sym__ascii_name_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__asciiz_name_token1] = {
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
  [sym_str_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [sym__ascii_name] = {
    .visible = false,
    .named = true,
  },
  [sym__asciiz_name] = {
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
  [aux_sym_string_repeat1] = {
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static inline bool aux_sym_string_token2_character_set_1(int32_t c) {
  return (c < 'e'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'W') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(172);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '~') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(164);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(188);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(380);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'w') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'y') ADVANCE(354);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(377);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(381);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(230);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(300);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(302);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(304);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(286);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(234);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(236);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(244);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(246);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(363);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 52:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 53:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(308);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(371);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(188);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(184);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(377);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(381);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 74:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(44);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(361);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 84:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 94:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 96:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 97:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(256);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 104:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(278);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 105:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(202);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 106:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 111:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 112:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      if (eof) ADVANCE(118);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'W') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(172);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 114:
      if (eof) ADVANCE(118);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'W') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 115:
      if (eof) ADVANCE(118);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'W') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'W') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(116)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'W') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(116)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__ws_sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_file_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_file_directive_token2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_section_directive_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__inc_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__ext_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__sec_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__word_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__byte_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__ascii_name_token1);
      if (lookahead == 'z') ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__ascii_name_token1);
      if (lookahead == 'z') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(337);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__ascii_name_token1);
      if (lookahead == 'z') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(393);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__asciiz_name_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__asciiz_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__asciiz_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_unary_expr_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (lookahead == 'l') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__implied_opcode_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__relative_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__immediate_opcode_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__absolute_opcode_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'c') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'd') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 's') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'u') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'x') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_local_label);
      if (lookahead == 'y') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_local_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(189);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'u') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(301);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(393);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(287);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(235);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(237);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(243);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(245);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(267);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(223);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(189);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(185);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(279);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(203);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_global_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 114},
  [2] = {.lex_state = 114},
  [3] = {.lex_state = 114},
  [4] = {.lex_state = 114},
  [5] = {.lex_state = 114},
  [6] = {.lex_state = 114},
  [7] = {.lex_state = 114},
  [8] = {.lex_state = 114},
  [9] = {.lex_state = 114},
  [10] = {.lex_state = 114},
  [11] = {.lex_state = 114},
  [12] = {.lex_state = 114},
  [13] = {.lex_state = 114},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 114},
  [16] = {.lex_state = 114},
  [17] = {.lex_state = 114},
  [18] = {.lex_state = 114},
  [19] = {.lex_state = 114},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 114},
  [22] = {.lex_state = 114},
  [23] = {.lex_state = 114},
  [24] = {.lex_state = 114},
  [25] = {.lex_state = 114},
  [26] = {.lex_state = 114},
  [27] = {.lex_state = 114},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 117},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 117},
  [49] = {.lex_state = 117},
  [50] = {.lex_state = 117},
  [51] = {.lex_state = 117},
  [52] = {.lex_state = 117},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 117},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 117},
  [57] = {.lex_state = 117},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 114},
  [60] = {.lex_state = 117},
  [61] = {.lex_state = 117},
  [62] = {.lex_state = 117},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 117},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [aux_sym__inc_name_token1] = ACTIONS(1),
    [aux_sym__ext_name_token1] = ACTIONS(1),
    [aux_sym__sec_name_token1] = ACTIONS(1),
    [aux_sym__word_name_token1] = ACTIONS(1),
    [aux_sym__byte_name_token1] = ACTIONS(1),
    [aux_sym__ascii_name_token1] = ACTIONS(1),
    [aux_sym__asciiz_name_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(46),
    [sym__statement] = STATE(3),
    [sym__directive] = STATE(3),
    [sym_file_directive] = STATE(3),
    [sym_label_directive] = STATE(3),
    [sym_section_directive] = STATE(3),
    [sym_imm_directive] = STATE(3),
    [sym_str_directive] = STATE(3),
    [sym__inc_name] = STATE(54),
    [sym__ext_name] = STATE(52),
    [sym__sec_name] = STATE(51),
    [sym__word_name] = STATE(33),
    [sym__byte_name] = STATE(33),
    [sym__ascii_name] = STATE(48),
    [sym__asciiz_name] = STATE(48),
    [sym_assignment] = STATE(3),
    [sym_label] = STATE(3),
    [sym__operation] = STATE(3),
    [sym_implied] = STATE(3),
    [sym_relative] = STATE(3),
    [sym_immediate] = STATE(3),
    [sym_absolute] = STATE(3),
    [sym_indirect] = STATE(3),
    [sym__implied_opcode] = STATE(18),
    [sym__relative_opcode] = STATE(45),
    [sym__immediate_opcode] = STATE(56),
    [sym__absolute_opcode] = STATE(49),
    [sym__indirect_opcode] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(7),
    [aux_sym__ext_name_token1] = ACTIONS(9),
    [aux_sym__sec_name_token1] = ACTIONS(11),
    [aux_sym__word_name_token1] = ACTIONS(13),
    [aux_sym__byte_name_token1] = ACTIONS(13),
    [aux_sym__ascii_name_token1] = ACTIONS(15),
    [aux_sym__asciiz_name_token1] = ACTIONS(15),
    [aux_sym__implied_opcode_token1] = ACTIONS(17),
    [aux_sym__implied_opcode_token2] = ACTIONS(17),
    [aux_sym__implied_opcode_token3] = ACTIONS(17),
    [aux_sym__implied_opcode_token4] = ACTIONS(17),
    [aux_sym__implied_opcode_token5] = ACTIONS(17),
    [aux_sym__implied_opcode_token6] = ACTIONS(17),
    [aux_sym__implied_opcode_token7] = ACTIONS(17),
    [aux_sym__implied_opcode_token8] = ACTIONS(17),
    [aux_sym__implied_opcode_token9] = ACTIONS(17),
    [aux_sym__implied_opcode_token10] = ACTIONS(17),
    [aux_sym__implied_opcode_token11] = ACTIONS(17),
    [aux_sym__implied_opcode_token12] = ACTIONS(17),
    [aux_sym__implied_opcode_token13] = ACTIONS(17),
    [aux_sym__implied_opcode_token14] = ACTIONS(17),
    [aux_sym__implied_opcode_token15] = ACTIONS(17),
    [aux_sym__implied_opcode_token16] = ACTIONS(17),
    [aux_sym__implied_opcode_token17] = ACTIONS(17),
    [aux_sym__implied_opcode_token18] = ACTIONS(17),
    [aux_sym__implied_opcode_token19] = ACTIONS(17),
    [aux_sym__implied_opcode_token20] = ACTIONS(17),
    [aux_sym__implied_opcode_token21] = ACTIONS(19),
    [aux_sym__implied_opcode_token22] = ACTIONS(19),
    [aux_sym__implied_opcode_token23] = ACTIONS(19),
    [aux_sym__implied_opcode_token24] = ACTIONS(19),
    [aux_sym__implied_opcode_token25] = ACTIONS(19),
    [aux_sym__implied_opcode_token26] = ACTIONS(19),
    [aux_sym__implied_opcode_token27] = ACTIONS(17),
    [aux_sym__implied_opcode_token28] = ACTIONS(17),
    [aux_sym__implied_opcode_token29] = ACTIONS(17),
    [aux_sym__implied_opcode_token30] = ACTIONS(17),
    [aux_sym__implied_opcode_token31] = ACTIONS(17),
    [aux_sym__implied_opcode_token32] = ACTIONS(17),
    [aux_sym__implied_opcode_token33] = ACTIONS(17),
    [aux_sym__implied_opcode_token34] = ACTIONS(17),
    [aux_sym__implied_opcode_token35] = ACTIONS(17),
    [aux_sym__implied_opcode_token36] = ACTIONS(17),
    [aux_sym__implied_opcode_token37] = ACTIONS(17),
    [aux_sym__relative_opcode_token1] = ACTIONS(21),
    [aux_sym__relative_opcode_token2] = ACTIONS(21),
    [aux_sym__relative_opcode_token3] = ACTIONS(21),
    [aux_sym__relative_opcode_token4] = ACTIONS(21),
    [aux_sym__relative_opcode_token5] = ACTIONS(21),
    [aux_sym__relative_opcode_token6] = ACTIONS(21),
    [aux_sym__relative_opcode_token7] = ACTIONS(21),
    [aux_sym__relative_opcode_token8] = ACTIONS(21),
    [aux_sym__relative_opcode_token9] = ACTIONS(21),
    [aux_sym__immediate_opcode_token1] = ACTIONS(23),
    [aux_sym__immediate_opcode_token2] = ACTIONS(23),
    [aux_sym__immediate_opcode_token3] = ACTIONS(25),
    [aux_sym__immediate_opcode_token4] = ACTIONS(23),
    [aux_sym__immediate_opcode_token5] = ACTIONS(25),
    [aux_sym__immediate_opcode_token6] = ACTIONS(25),
    [aux_sym__immediate_opcode_token7] = ACTIONS(23),
    [aux_sym__immediate_opcode_token8] = ACTIONS(23),
    [aux_sym__immediate_opcode_token9] = ACTIONS(25),
    [aux_sym__immediate_opcode_token10] = ACTIONS(25),
    [aux_sym__immediate_opcode_token11] = ACTIONS(23),
    [aux_sym__immediate_opcode_token12] = ACTIONS(23),
    [aux_sym__absolute_opcode_token1] = ACTIONS(27),
    [aux_sym__absolute_opcode_token2] = ACTIONS(29),
    [aux_sym__absolute_opcode_token3] = ACTIONS(27),
    [aux_sym__absolute_opcode_token4] = ACTIONS(29),
    [aux_sym__absolute_opcode_token5] = ACTIONS(29),
    [aux_sym__absolute_opcode_token6] = ACTIONS(29),
    [aux_sym__absolute_opcode_token7] = ACTIONS(29),
    [aux_sym__absolute_opcode_token8] = ACTIONS(29),
    [sym_local_label] = ACTIONS(31),
    [sym_global_label] = ACTIONS(33),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__directive] = STATE(2),
    [sym_file_directive] = STATE(2),
    [sym_label_directive] = STATE(2),
    [sym_section_directive] = STATE(2),
    [sym_imm_directive] = STATE(2),
    [sym_str_directive] = STATE(2),
    [sym__inc_name] = STATE(54),
    [sym__ext_name] = STATE(52),
    [sym__sec_name] = STATE(51),
    [sym__word_name] = STATE(33),
    [sym__byte_name] = STATE(33),
    [sym__ascii_name] = STATE(48),
    [sym__asciiz_name] = STATE(48),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(18),
    [sym__relative_opcode] = STATE(45),
    [sym__immediate_opcode] = STATE(56),
    [sym__absolute_opcode] = STATE(49),
    [sym__indirect_opcode] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(37),
    [aux_sym__ext_name_token1] = ACTIONS(40),
    [aux_sym__sec_name_token1] = ACTIONS(43),
    [aux_sym__word_name_token1] = ACTIONS(46),
    [aux_sym__byte_name_token1] = ACTIONS(46),
    [aux_sym__ascii_name_token1] = ACTIONS(49),
    [aux_sym__asciiz_name_token1] = ACTIONS(49),
    [aux_sym__implied_opcode_token1] = ACTIONS(52),
    [aux_sym__implied_opcode_token2] = ACTIONS(52),
    [aux_sym__implied_opcode_token3] = ACTIONS(52),
    [aux_sym__implied_opcode_token4] = ACTIONS(52),
    [aux_sym__implied_opcode_token5] = ACTIONS(52),
    [aux_sym__implied_opcode_token6] = ACTIONS(52),
    [aux_sym__implied_opcode_token7] = ACTIONS(52),
    [aux_sym__implied_opcode_token8] = ACTIONS(52),
    [aux_sym__implied_opcode_token9] = ACTIONS(52),
    [aux_sym__implied_opcode_token10] = ACTIONS(52),
    [aux_sym__implied_opcode_token11] = ACTIONS(52),
    [aux_sym__implied_opcode_token12] = ACTIONS(52),
    [aux_sym__implied_opcode_token13] = ACTIONS(52),
    [aux_sym__implied_opcode_token14] = ACTIONS(52),
    [aux_sym__implied_opcode_token15] = ACTIONS(52),
    [aux_sym__implied_opcode_token16] = ACTIONS(52),
    [aux_sym__implied_opcode_token17] = ACTIONS(52),
    [aux_sym__implied_opcode_token18] = ACTIONS(52),
    [aux_sym__implied_opcode_token19] = ACTIONS(52),
    [aux_sym__implied_opcode_token20] = ACTIONS(52),
    [aux_sym__implied_opcode_token21] = ACTIONS(55),
    [aux_sym__implied_opcode_token22] = ACTIONS(55),
    [aux_sym__implied_opcode_token23] = ACTIONS(55),
    [aux_sym__implied_opcode_token24] = ACTIONS(55),
    [aux_sym__implied_opcode_token25] = ACTIONS(55),
    [aux_sym__implied_opcode_token26] = ACTIONS(55),
    [aux_sym__implied_opcode_token27] = ACTIONS(52),
    [aux_sym__implied_opcode_token28] = ACTIONS(52),
    [aux_sym__implied_opcode_token29] = ACTIONS(52),
    [aux_sym__implied_opcode_token30] = ACTIONS(52),
    [aux_sym__implied_opcode_token31] = ACTIONS(52),
    [aux_sym__implied_opcode_token32] = ACTIONS(52),
    [aux_sym__implied_opcode_token33] = ACTIONS(52),
    [aux_sym__implied_opcode_token34] = ACTIONS(52),
    [aux_sym__implied_opcode_token35] = ACTIONS(52),
    [aux_sym__implied_opcode_token36] = ACTIONS(52),
    [aux_sym__implied_opcode_token37] = ACTIONS(52),
    [aux_sym__relative_opcode_token1] = ACTIONS(58),
    [aux_sym__relative_opcode_token2] = ACTIONS(58),
    [aux_sym__relative_opcode_token3] = ACTIONS(58),
    [aux_sym__relative_opcode_token4] = ACTIONS(58),
    [aux_sym__relative_opcode_token5] = ACTIONS(58),
    [aux_sym__relative_opcode_token6] = ACTIONS(58),
    [aux_sym__relative_opcode_token7] = ACTIONS(58),
    [aux_sym__relative_opcode_token8] = ACTIONS(58),
    [aux_sym__relative_opcode_token9] = ACTIONS(58),
    [aux_sym__immediate_opcode_token1] = ACTIONS(61),
    [aux_sym__immediate_opcode_token2] = ACTIONS(61),
    [aux_sym__immediate_opcode_token3] = ACTIONS(64),
    [aux_sym__immediate_opcode_token4] = ACTIONS(61),
    [aux_sym__immediate_opcode_token5] = ACTIONS(64),
    [aux_sym__immediate_opcode_token6] = ACTIONS(64),
    [aux_sym__immediate_opcode_token7] = ACTIONS(61),
    [aux_sym__immediate_opcode_token8] = ACTIONS(61),
    [aux_sym__immediate_opcode_token9] = ACTIONS(64),
    [aux_sym__immediate_opcode_token10] = ACTIONS(64),
    [aux_sym__immediate_opcode_token11] = ACTIONS(61),
    [aux_sym__immediate_opcode_token12] = ACTIONS(61),
    [aux_sym__absolute_opcode_token1] = ACTIONS(67),
    [aux_sym__absolute_opcode_token2] = ACTIONS(70),
    [aux_sym__absolute_opcode_token3] = ACTIONS(67),
    [aux_sym__absolute_opcode_token4] = ACTIONS(70),
    [aux_sym__absolute_opcode_token5] = ACTIONS(70),
    [aux_sym__absolute_opcode_token6] = ACTIONS(70),
    [aux_sym__absolute_opcode_token7] = ACTIONS(70),
    [aux_sym__absolute_opcode_token8] = ACTIONS(70),
    [sym_local_label] = ACTIONS(73),
    [sym_global_label] = ACTIONS(76),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__directive] = STATE(2),
    [sym_file_directive] = STATE(2),
    [sym_label_directive] = STATE(2),
    [sym_section_directive] = STATE(2),
    [sym_imm_directive] = STATE(2),
    [sym_str_directive] = STATE(2),
    [sym__inc_name] = STATE(54),
    [sym__ext_name] = STATE(52),
    [sym__sec_name] = STATE(51),
    [sym__word_name] = STATE(33),
    [sym__byte_name] = STATE(33),
    [sym__ascii_name] = STATE(48),
    [sym__asciiz_name] = STATE(48),
    [sym_assignment] = STATE(2),
    [sym_label] = STATE(2),
    [sym__operation] = STATE(2),
    [sym_implied] = STATE(2),
    [sym_relative] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym_absolute] = STATE(2),
    [sym_indirect] = STATE(2),
    [sym__implied_opcode] = STATE(18),
    [sym__relative_opcode] = STATE(45),
    [sym__immediate_opcode] = STATE(56),
    [sym__absolute_opcode] = STATE(49),
    [sym__indirect_opcode] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(7),
    [aux_sym__ext_name_token1] = ACTIONS(9),
    [aux_sym__sec_name_token1] = ACTIONS(11),
    [aux_sym__word_name_token1] = ACTIONS(13),
    [aux_sym__byte_name_token1] = ACTIONS(13),
    [aux_sym__ascii_name_token1] = ACTIONS(15),
    [aux_sym__asciiz_name_token1] = ACTIONS(15),
    [aux_sym__implied_opcode_token1] = ACTIONS(17),
    [aux_sym__implied_opcode_token2] = ACTIONS(17),
    [aux_sym__implied_opcode_token3] = ACTIONS(17),
    [aux_sym__implied_opcode_token4] = ACTIONS(17),
    [aux_sym__implied_opcode_token5] = ACTIONS(17),
    [aux_sym__implied_opcode_token6] = ACTIONS(17),
    [aux_sym__implied_opcode_token7] = ACTIONS(17),
    [aux_sym__implied_opcode_token8] = ACTIONS(17),
    [aux_sym__implied_opcode_token9] = ACTIONS(17),
    [aux_sym__implied_opcode_token10] = ACTIONS(17),
    [aux_sym__implied_opcode_token11] = ACTIONS(17),
    [aux_sym__implied_opcode_token12] = ACTIONS(17),
    [aux_sym__implied_opcode_token13] = ACTIONS(17),
    [aux_sym__implied_opcode_token14] = ACTIONS(17),
    [aux_sym__implied_opcode_token15] = ACTIONS(17),
    [aux_sym__implied_opcode_token16] = ACTIONS(17),
    [aux_sym__implied_opcode_token17] = ACTIONS(17),
    [aux_sym__implied_opcode_token18] = ACTIONS(17),
    [aux_sym__implied_opcode_token19] = ACTIONS(17),
    [aux_sym__implied_opcode_token20] = ACTIONS(17),
    [aux_sym__implied_opcode_token21] = ACTIONS(19),
    [aux_sym__implied_opcode_token22] = ACTIONS(19),
    [aux_sym__implied_opcode_token23] = ACTIONS(19),
    [aux_sym__implied_opcode_token24] = ACTIONS(19),
    [aux_sym__implied_opcode_token25] = ACTIONS(19),
    [aux_sym__implied_opcode_token26] = ACTIONS(19),
    [aux_sym__implied_opcode_token27] = ACTIONS(17),
    [aux_sym__implied_opcode_token28] = ACTIONS(17),
    [aux_sym__implied_opcode_token29] = ACTIONS(17),
    [aux_sym__implied_opcode_token30] = ACTIONS(17),
    [aux_sym__implied_opcode_token31] = ACTIONS(17),
    [aux_sym__implied_opcode_token32] = ACTIONS(17),
    [aux_sym__implied_opcode_token33] = ACTIONS(17),
    [aux_sym__implied_opcode_token34] = ACTIONS(17),
    [aux_sym__implied_opcode_token35] = ACTIONS(17),
    [aux_sym__implied_opcode_token36] = ACTIONS(17),
    [aux_sym__implied_opcode_token37] = ACTIONS(17),
    [aux_sym__relative_opcode_token1] = ACTIONS(21),
    [aux_sym__relative_opcode_token2] = ACTIONS(21),
    [aux_sym__relative_opcode_token3] = ACTIONS(21),
    [aux_sym__relative_opcode_token4] = ACTIONS(21),
    [aux_sym__relative_opcode_token5] = ACTIONS(21),
    [aux_sym__relative_opcode_token6] = ACTIONS(21),
    [aux_sym__relative_opcode_token7] = ACTIONS(21),
    [aux_sym__relative_opcode_token8] = ACTIONS(21),
    [aux_sym__relative_opcode_token9] = ACTIONS(21),
    [aux_sym__immediate_opcode_token1] = ACTIONS(23),
    [aux_sym__immediate_opcode_token2] = ACTIONS(23),
    [aux_sym__immediate_opcode_token3] = ACTIONS(25),
    [aux_sym__immediate_opcode_token4] = ACTIONS(23),
    [aux_sym__immediate_opcode_token5] = ACTIONS(25),
    [aux_sym__immediate_opcode_token6] = ACTIONS(25),
    [aux_sym__immediate_opcode_token7] = ACTIONS(23),
    [aux_sym__immediate_opcode_token8] = ACTIONS(23),
    [aux_sym__immediate_opcode_token9] = ACTIONS(25),
    [aux_sym__immediate_opcode_token10] = ACTIONS(25),
    [aux_sym__immediate_opcode_token11] = ACTIONS(23),
    [aux_sym__immediate_opcode_token12] = ACTIONS(23),
    [aux_sym__absolute_opcode_token1] = ACTIONS(27),
    [aux_sym__absolute_opcode_token2] = ACTIONS(29),
    [aux_sym__absolute_opcode_token3] = ACTIONS(27),
    [aux_sym__absolute_opcode_token4] = ACTIONS(29),
    [aux_sym__absolute_opcode_token5] = ACTIONS(29),
    [aux_sym__absolute_opcode_token6] = ACTIONS(29),
    [aux_sym__absolute_opcode_token7] = ACTIONS(29),
    [aux_sym__absolute_opcode_token8] = ACTIONS(29),
    [sym_local_label] = ACTIONS(31),
    [sym_global_label] = ACTIONS(33),
  },
  [4] = {
    [sym__reg_x] = STATE(17),
    [sym__reg_y] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(83),
    [aux_sym__ext_name_token1] = ACTIONS(83),
    [aux_sym__sec_name_token1] = ACTIONS(83),
    [aux_sym__word_name_token1] = ACTIONS(83),
    [aux_sym__byte_name_token1] = ACTIONS(83),
    [aux_sym__ascii_name_token1] = ACTIONS(83),
    [aux_sym__asciiz_name_token1] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [aux_sym__implied_opcode_token1] = ACTIONS(83),
    [aux_sym__implied_opcode_token2] = ACTIONS(83),
    [aux_sym__implied_opcode_token3] = ACTIONS(83),
    [aux_sym__implied_opcode_token4] = ACTIONS(83),
    [aux_sym__implied_opcode_token5] = ACTIONS(83),
    [aux_sym__implied_opcode_token6] = ACTIONS(83),
    [aux_sym__implied_opcode_token7] = ACTIONS(83),
    [aux_sym__implied_opcode_token8] = ACTIONS(83),
    [aux_sym__implied_opcode_token9] = ACTIONS(83),
    [aux_sym__implied_opcode_token10] = ACTIONS(83),
    [aux_sym__implied_opcode_token11] = ACTIONS(83),
    [aux_sym__implied_opcode_token12] = ACTIONS(83),
    [aux_sym__implied_opcode_token13] = ACTIONS(83),
    [aux_sym__implied_opcode_token14] = ACTIONS(83),
    [aux_sym__implied_opcode_token15] = ACTIONS(83),
    [aux_sym__implied_opcode_token16] = ACTIONS(83),
    [aux_sym__implied_opcode_token17] = ACTIONS(83),
    [aux_sym__implied_opcode_token18] = ACTIONS(83),
    [aux_sym__implied_opcode_token19] = ACTIONS(83),
    [aux_sym__implied_opcode_token20] = ACTIONS(83),
    [aux_sym__implied_opcode_token21] = ACTIONS(83),
    [aux_sym__implied_opcode_token22] = ACTIONS(83),
    [aux_sym__implied_opcode_token23] = ACTIONS(83),
    [aux_sym__implied_opcode_token24] = ACTIONS(83),
    [aux_sym__implied_opcode_token25] = ACTIONS(83),
    [aux_sym__implied_opcode_token26] = ACTIONS(83),
    [aux_sym__implied_opcode_token27] = ACTIONS(83),
    [aux_sym__implied_opcode_token28] = ACTIONS(83),
    [aux_sym__implied_opcode_token29] = ACTIONS(83),
    [aux_sym__implied_opcode_token30] = ACTIONS(83),
    [aux_sym__implied_opcode_token31] = ACTIONS(83),
    [aux_sym__implied_opcode_token32] = ACTIONS(83),
    [aux_sym__implied_opcode_token33] = ACTIONS(83),
    [aux_sym__implied_opcode_token34] = ACTIONS(83),
    [aux_sym__implied_opcode_token35] = ACTIONS(83),
    [aux_sym__implied_opcode_token36] = ACTIONS(83),
    [aux_sym__implied_opcode_token37] = ACTIONS(83),
    [aux_sym__relative_opcode_token1] = ACTIONS(83),
    [aux_sym__relative_opcode_token2] = ACTIONS(83),
    [aux_sym__relative_opcode_token3] = ACTIONS(83),
    [aux_sym__relative_opcode_token4] = ACTIONS(83),
    [aux_sym__relative_opcode_token5] = ACTIONS(83),
    [aux_sym__relative_opcode_token6] = ACTIONS(83),
    [aux_sym__relative_opcode_token7] = ACTIONS(83),
    [aux_sym__relative_opcode_token8] = ACTIONS(83),
    [aux_sym__relative_opcode_token9] = ACTIONS(83),
    [aux_sym__immediate_opcode_token1] = ACTIONS(83),
    [aux_sym__immediate_opcode_token2] = ACTIONS(83),
    [aux_sym__immediate_opcode_token3] = ACTIONS(83),
    [aux_sym__immediate_opcode_token4] = ACTIONS(83),
    [aux_sym__immediate_opcode_token5] = ACTIONS(83),
    [aux_sym__immediate_opcode_token6] = ACTIONS(83),
    [aux_sym__immediate_opcode_token7] = ACTIONS(83),
    [aux_sym__immediate_opcode_token8] = ACTIONS(83),
    [aux_sym__immediate_opcode_token9] = ACTIONS(83),
    [aux_sym__immediate_opcode_token10] = ACTIONS(83),
    [aux_sym__immediate_opcode_token11] = ACTIONS(83),
    [aux_sym__immediate_opcode_token12] = ACTIONS(83),
    [aux_sym__absolute_opcode_token1] = ACTIONS(83),
    [aux_sym__absolute_opcode_token2] = ACTIONS(83),
    [aux_sym__absolute_opcode_token3] = ACTIONS(83),
    [aux_sym__absolute_opcode_token4] = ACTIONS(83),
    [aux_sym__absolute_opcode_token5] = ACTIONS(83),
    [aux_sym__absolute_opcode_token6] = ACTIONS(83),
    [aux_sym__absolute_opcode_token7] = ACTIONS(83),
    [aux_sym__absolute_opcode_token8] = ACTIONS(83),
    [sym_local_label] = ACTIONS(83),
    [sym_global_label] = ACTIONS(83),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(91),
    [aux_sym__ext_name_token1] = ACTIONS(91),
    [aux_sym__sec_name_token1] = ACTIONS(91),
    [aux_sym__word_name_token1] = ACTIONS(91),
    [aux_sym__byte_name_token1] = ACTIONS(91),
    [aux_sym__ascii_name_token1] = ACTIONS(91),
    [aux_sym__asciiz_name_token1] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [aux_sym__implied_opcode_token1] = ACTIONS(91),
    [aux_sym__implied_opcode_token2] = ACTIONS(91),
    [aux_sym__implied_opcode_token3] = ACTIONS(91),
    [aux_sym__implied_opcode_token4] = ACTIONS(91),
    [aux_sym__implied_opcode_token5] = ACTIONS(91),
    [aux_sym__implied_opcode_token6] = ACTIONS(91),
    [aux_sym__implied_opcode_token7] = ACTIONS(91),
    [aux_sym__implied_opcode_token8] = ACTIONS(91),
    [aux_sym__implied_opcode_token9] = ACTIONS(91),
    [aux_sym__implied_opcode_token10] = ACTIONS(91),
    [aux_sym__implied_opcode_token11] = ACTIONS(91),
    [aux_sym__implied_opcode_token12] = ACTIONS(91),
    [aux_sym__implied_opcode_token13] = ACTIONS(91),
    [aux_sym__implied_opcode_token14] = ACTIONS(91),
    [aux_sym__implied_opcode_token15] = ACTIONS(91),
    [aux_sym__implied_opcode_token16] = ACTIONS(91),
    [aux_sym__implied_opcode_token17] = ACTIONS(91),
    [aux_sym__implied_opcode_token18] = ACTIONS(91),
    [aux_sym__implied_opcode_token19] = ACTIONS(91),
    [aux_sym__implied_opcode_token20] = ACTIONS(91),
    [aux_sym__implied_opcode_token21] = ACTIONS(91),
    [aux_sym__implied_opcode_token22] = ACTIONS(91),
    [aux_sym__implied_opcode_token23] = ACTIONS(91),
    [aux_sym__implied_opcode_token24] = ACTIONS(91),
    [aux_sym__implied_opcode_token25] = ACTIONS(91),
    [aux_sym__implied_opcode_token26] = ACTIONS(91),
    [aux_sym__implied_opcode_token27] = ACTIONS(91),
    [aux_sym__implied_opcode_token28] = ACTIONS(91),
    [aux_sym__implied_opcode_token29] = ACTIONS(91),
    [aux_sym__implied_opcode_token30] = ACTIONS(91),
    [aux_sym__implied_opcode_token31] = ACTIONS(91),
    [aux_sym__implied_opcode_token32] = ACTIONS(91),
    [aux_sym__implied_opcode_token33] = ACTIONS(91),
    [aux_sym__implied_opcode_token34] = ACTIONS(91),
    [aux_sym__implied_opcode_token35] = ACTIONS(91),
    [aux_sym__implied_opcode_token36] = ACTIONS(91),
    [aux_sym__implied_opcode_token37] = ACTIONS(91),
    [aux_sym__relative_opcode_token1] = ACTIONS(91),
    [aux_sym__relative_opcode_token2] = ACTIONS(91),
    [aux_sym__relative_opcode_token3] = ACTIONS(91),
    [aux_sym__relative_opcode_token4] = ACTIONS(91),
    [aux_sym__relative_opcode_token5] = ACTIONS(91),
    [aux_sym__relative_opcode_token6] = ACTIONS(91),
    [aux_sym__relative_opcode_token7] = ACTIONS(91),
    [aux_sym__relative_opcode_token8] = ACTIONS(91),
    [aux_sym__relative_opcode_token9] = ACTIONS(91),
    [aux_sym__immediate_opcode_token1] = ACTIONS(91),
    [aux_sym__immediate_opcode_token2] = ACTIONS(91),
    [aux_sym__immediate_opcode_token3] = ACTIONS(91),
    [aux_sym__immediate_opcode_token4] = ACTIONS(91),
    [aux_sym__immediate_opcode_token5] = ACTIONS(91),
    [aux_sym__immediate_opcode_token6] = ACTIONS(91),
    [aux_sym__immediate_opcode_token7] = ACTIONS(91),
    [aux_sym__immediate_opcode_token8] = ACTIONS(91),
    [aux_sym__immediate_opcode_token9] = ACTIONS(91),
    [aux_sym__immediate_opcode_token10] = ACTIONS(91),
    [aux_sym__immediate_opcode_token11] = ACTIONS(91),
    [aux_sym__immediate_opcode_token12] = ACTIONS(91),
    [aux_sym__absolute_opcode_token1] = ACTIONS(91),
    [aux_sym__absolute_opcode_token2] = ACTIONS(91),
    [aux_sym__absolute_opcode_token3] = ACTIONS(91),
    [aux_sym__absolute_opcode_token4] = ACTIONS(91),
    [aux_sym__absolute_opcode_token5] = ACTIONS(91),
    [aux_sym__absolute_opcode_token6] = ACTIONS(91),
    [aux_sym__absolute_opcode_token7] = ACTIONS(91),
    [aux_sym__absolute_opcode_token8] = ACTIONS(91),
    [sym_local_label] = ACTIONS(91),
    [sym_global_label] = ACTIONS(91),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(95),
    [aux_sym__ext_name_token1] = ACTIONS(95),
    [aux_sym__sec_name_token1] = ACTIONS(95),
    [aux_sym__word_name_token1] = ACTIONS(95),
    [aux_sym__byte_name_token1] = ACTIONS(95),
    [aux_sym__ascii_name_token1] = ACTIONS(95),
    [aux_sym__asciiz_name_token1] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [aux_sym__implied_opcode_token1] = ACTIONS(95),
    [aux_sym__implied_opcode_token2] = ACTIONS(95),
    [aux_sym__implied_opcode_token3] = ACTIONS(95),
    [aux_sym__implied_opcode_token4] = ACTIONS(95),
    [aux_sym__implied_opcode_token5] = ACTIONS(95),
    [aux_sym__implied_opcode_token6] = ACTIONS(95),
    [aux_sym__implied_opcode_token7] = ACTIONS(95),
    [aux_sym__implied_opcode_token8] = ACTIONS(95),
    [aux_sym__implied_opcode_token9] = ACTIONS(95),
    [aux_sym__implied_opcode_token10] = ACTIONS(95),
    [aux_sym__implied_opcode_token11] = ACTIONS(95),
    [aux_sym__implied_opcode_token12] = ACTIONS(95),
    [aux_sym__implied_opcode_token13] = ACTIONS(95),
    [aux_sym__implied_opcode_token14] = ACTIONS(95),
    [aux_sym__implied_opcode_token15] = ACTIONS(95),
    [aux_sym__implied_opcode_token16] = ACTIONS(95),
    [aux_sym__implied_opcode_token17] = ACTIONS(95),
    [aux_sym__implied_opcode_token18] = ACTIONS(95),
    [aux_sym__implied_opcode_token19] = ACTIONS(95),
    [aux_sym__implied_opcode_token20] = ACTIONS(95),
    [aux_sym__implied_opcode_token21] = ACTIONS(95),
    [aux_sym__implied_opcode_token22] = ACTIONS(95),
    [aux_sym__implied_opcode_token23] = ACTIONS(95),
    [aux_sym__implied_opcode_token24] = ACTIONS(95),
    [aux_sym__implied_opcode_token25] = ACTIONS(95),
    [aux_sym__implied_opcode_token26] = ACTIONS(95),
    [aux_sym__implied_opcode_token27] = ACTIONS(95),
    [aux_sym__implied_opcode_token28] = ACTIONS(95),
    [aux_sym__implied_opcode_token29] = ACTIONS(95),
    [aux_sym__implied_opcode_token30] = ACTIONS(95),
    [aux_sym__implied_opcode_token31] = ACTIONS(95),
    [aux_sym__implied_opcode_token32] = ACTIONS(95),
    [aux_sym__implied_opcode_token33] = ACTIONS(95),
    [aux_sym__implied_opcode_token34] = ACTIONS(95),
    [aux_sym__implied_opcode_token35] = ACTIONS(95),
    [aux_sym__implied_opcode_token36] = ACTIONS(95),
    [aux_sym__implied_opcode_token37] = ACTIONS(95),
    [aux_sym__relative_opcode_token1] = ACTIONS(95),
    [aux_sym__relative_opcode_token2] = ACTIONS(95),
    [aux_sym__relative_opcode_token3] = ACTIONS(95),
    [aux_sym__relative_opcode_token4] = ACTIONS(95),
    [aux_sym__relative_opcode_token5] = ACTIONS(95),
    [aux_sym__relative_opcode_token6] = ACTIONS(95),
    [aux_sym__relative_opcode_token7] = ACTIONS(95),
    [aux_sym__relative_opcode_token8] = ACTIONS(95),
    [aux_sym__relative_opcode_token9] = ACTIONS(95),
    [aux_sym__immediate_opcode_token1] = ACTIONS(95),
    [aux_sym__immediate_opcode_token2] = ACTIONS(95),
    [aux_sym__immediate_opcode_token3] = ACTIONS(95),
    [aux_sym__immediate_opcode_token4] = ACTIONS(95),
    [aux_sym__immediate_opcode_token5] = ACTIONS(95),
    [aux_sym__immediate_opcode_token6] = ACTIONS(95),
    [aux_sym__immediate_opcode_token7] = ACTIONS(95),
    [aux_sym__immediate_opcode_token8] = ACTIONS(95),
    [aux_sym__immediate_opcode_token9] = ACTIONS(95),
    [aux_sym__immediate_opcode_token10] = ACTIONS(95),
    [aux_sym__immediate_opcode_token11] = ACTIONS(95),
    [aux_sym__immediate_opcode_token12] = ACTIONS(95),
    [aux_sym__absolute_opcode_token1] = ACTIONS(95),
    [aux_sym__absolute_opcode_token2] = ACTIONS(95),
    [aux_sym__absolute_opcode_token3] = ACTIONS(95),
    [aux_sym__absolute_opcode_token4] = ACTIONS(95),
    [aux_sym__absolute_opcode_token5] = ACTIONS(95),
    [aux_sym__absolute_opcode_token6] = ACTIONS(95),
    [aux_sym__absolute_opcode_token7] = ACTIONS(95),
    [aux_sym__absolute_opcode_token8] = ACTIONS(95),
    [sym_local_label] = ACTIONS(95),
    [sym_global_label] = ACTIONS(95),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(99),
    [aux_sym__ext_name_token1] = ACTIONS(99),
    [aux_sym__sec_name_token1] = ACTIONS(99),
    [aux_sym__word_name_token1] = ACTIONS(99),
    [aux_sym__byte_name_token1] = ACTIONS(99),
    [aux_sym__ascii_name_token1] = ACTIONS(99),
    [aux_sym__asciiz_name_token1] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [aux_sym__implied_opcode_token1] = ACTIONS(99),
    [aux_sym__implied_opcode_token2] = ACTIONS(99),
    [aux_sym__implied_opcode_token3] = ACTIONS(99),
    [aux_sym__implied_opcode_token4] = ACTIONS(99),
    [aux_sym__implied_opcode_token5] = ACTIONS(99),
    [aux_sym__implied_opcode_token6] = ACTIONS(99),
    [aux_sym__implied_opcode_token7] = ACTIONS(99),
    [aux_sym__implied_opcode_token8] = ACTIONS(99),
    [aux_sym__implied_opcode_token9] = ACTIONS(99),
    [aux_sym__implied_opcode_token10] = ACTIONS(99),
    [aux_sym__implied_opcode_token11] = ACTIONS(99),
    [aux_sym__implied_opcode_token12] = ACTIONS(99),
    [aux_sym__implied_opcode_token13] = ACTIONS(99),
    [aux_sym__implied_opcode_token14] = ACTIONS(99),
    [aux_sym__implied_opcode_token15] = ACTIONS(99),
    [aux_sym__implied_opcode_token16] = ACTIONS(99),
    [aux_sym__implied_opcode_token17] = ACTIONS(99),
    [aux_sym__implied_opcode_token18] = ACTIONS(99),
    [aux_sym__implied_opcode_token19] = ACTIONS(99),
    [aux_sym__implied_opcode_token20] = ACTIONS(99),
    [aux_sym__implied_opcode_token21] = ACTIONS(99),
    [aux_sym__implied_opcode_token22] = ACTIONS(99),
    [aux_sym__implied_opcode_token23] = ACTIONS(99),
    [aux_sym__implied_opcode_token24] = ACTIONS(99),
    [aux_sym__implied_opcode_token25] = ACTIONS(99),
    [aux_sym__implied_opcode_token26] = ACTIONS(99),
    [aux_sym__implied_opcode_token27] = ACTIONS(99),
    [aux_sym__implied_opcode_token28] = ACTIONS(99),
    [aux_sym__implied_opcode_token29] = ACTIONS(99),
    [aux_sym__implied_opcode_token30] = ACTIONS(99),
    [aux_sym__implied_opcode_token31] = ACTIONS(99),
    [aux_sym__implied_opcode_token32] = ACTIONS(99),
    [aux_sym__implied_opcode_token33] = ACTIONS(99),
    [aux_sym__implied_opcode_token34] = ACTIONS(99),
    [aux_sym__implied_opcode_token35] = ACTIONS(99),
    [aux_sym__implied_opcode_token36] = ACTIONS(99),
    [aux_sym__implied_opcode_token37] = ACTIONS(99),
    [aux_sym__relative_opcode_token1] = ACTIONS(99),
    [aux_sym__relative_opcode_token2] = ACTIONS(99),
    [aux_sym__relative_opcode_token3] = ACTIONS(99),
    [aux_sym__relative_opcode_token4] = ACTIONS(99),
    [aux_sym__relative_opcode_token5] = ACTIONS(99),
    [aux_sym__relative_opcode_token6] = ACTIONS(99),
    [aux_sym__relative_opcode_token7] = ACTIONS(99),
    [aux_sym__relative_opcode_token8] = ACTIONS(99),
    [aux_sym__relative_opcode_token9] = ACTIONS(99),
    [aux_sym__immediate_opcode_token1] = ACTIONS(99),
    [aux_sym__immediate_opcode_token2] = ACTIONS(99),
    [aux_sym__immediate_opcode_token3] = ACTIONS(99),
    [aux_sym__immediate_opcode_token4] = ACTIONS(99),
    [aux_sym__immediate_opcode_token5] = ACTIONS(99),
    [aux_sym__immediate_opcode_token6] = ACTIONS(99),
    [aux_sym__immediate_opcode_token7] = ACTIONS(99),
    [aux_sym__immediate_opcode_token8] = ACTIONS(99),
    [aux_sym__immediate_opcode_token9] = ACTIONS(99),
    [aux_sym__immediate_opcode_token10] = ACTIONS(99),
    [aux_sym__immediate_opcode_token11] = ACTIONS(99),
    [aux_sym__immediate_opcode_token12] = ACTIONS(99),
    [aux_sym__absolute_opcode_token1] = ACTIONS(99),
    [aux_sym__absolute_opcode_token2] = ACTIONS(99),
    [aux_sym__absolute_opcode_token3] = ACTIONS(99),
    [aux_sym__absolute_opcode_token4] = ACTIONS(99),
    [aux_sym__absolute_opcode_token5] = ACTIONS(99),
    [aux_sym__absolute_opcode_token6] = ACTIONS(99),
    [aux_sym__absolute_opcode_token7] = ACTIONS(99),
    [aux_sym__absolute_opcode_token8] = ACTIONS(99),
    [sym_local_label] = ACTIONS(99),
    [sym_global_label] = ACTIONS(99),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(103),
    [aux_sym__ext_name_token1] = ACTIONS(103),
    [aux_sym__sec_name_token1] = ACTIONS(103),
    [aux_sym__word_name_token1] = ACTIONS(103),
    [aux_sym__byte_name_token1] = ACTIONS(103),
    [aux_sym__ascii_name_token1] = ACTIONS(103),
    [aux_sym__asciiz_name_token1] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [aux_sym__implied_opcode_token1] = ACTIONS(103),
    [aux_sym__implied_opcode_token2] = ACTIONS(103),
    [aux_sym__implied_opcode_token3] = ACTIONS(103),
    [aux_sym__implied_opcode_token4] = ACTIONS(103),
    [aux_sym__implied_opcode_token5] = ACTIONS(103),
    [aux_sym__implied_opcode_token6] = ACTIONS(103),
    [aux_sym__implied_opcode_token7] = ACTIONS(103),
    [aux_sym__implied_opcode_token8] = ACTIONS(103),
    [aux_sym__implied_opcode_token9] = ACTIONS(103),
    [aux_sym__implied_opcode_token10] = ACTIONS(103),
    [aux_sym__implied_opcode_token11] = ACTIONS(103),
    [aux_sym__implied_opcode_token12] = ACTIONS(103),
    [aux_sym__implied_opcode_token13] = ACTIONS(103),
    [aux_sym__implied_opcode_token14] = ACTIONS(103),
    [aux_sym__implied_opcode_token15] = ACTIONS(103),
    [aux_sym__implied_opcode_token16] = ACTIONS(103),
    [aux_sym__implied_opcode_token17] = ACTIONS(103),
    [aux_sym__implied_opcode_token18] = ACTIONS(103),
    [aux_sym__implied_opcode_token19] = ACTIONS(103),
    [aux_sym__implied_opcode_token20] = ACTIONS(103),
    [aux_sym__implied_opcode_token21] = ACTIONS(103),
    [aux_sym__implied_opcode_token22] = ACTIONS(103),
    [aux_sym__implied_opcode_token23] = ACTIONS(103),
    [aux_sym__implied_opcode_token24] = ACTIONS(103),
    [aux_sym__implied_opcode_token25] = ACTIONS(103),
    [aux_sym__implied_opcode_token26] = ACTIONS(103),
    [aux_sym__implied_opcode_token27] = ACTIONS(103),
    [aux_sym__implied_opcode_token28] = ACTIONS(103),
    [aux_sym__implied_opcode_token29] = ACTIONS(103),
    [aux_sym__implied_opcode_token30] = ACTIONS(103),
    [aux_sym__implied_opcode_token31] = ACTIONS(103),
    [aux_sym__implied_opcode_token32] = ACTIONS(103),
    [aux_sym__implied_opcode_token33] = ACTIONS(103),
    [aux_sym__implied_opcode_token34] = ACTIONS(103),
    [aux_sym__implied_opcode_token35] = ACTIONS(103),
    [aux_sym__implied_opcode_token36] = ACTIONS(103),
    [aux_sym__implied_opcode_token37] = ACTIONS(103),
    [aux_sym__relative_opcode_token1] = ACTIONS(103),
    [aux_sym__relative_opcode_token2] = ACTIONS(103),
    [aux_sym__relative_opcode_token3] = ACTIONS(103),
    [aux_sym__relative_opcode_token4] = ACTIONS(103),
    [aux_sym__relative_opcode_token5] = ACTIONS(103),
    [aux_sym__relative_opcode_token6] = ACTIONS(103),
    [aux_sym__relative_opcode_token7] = ACTIONS(103),
    [aux_sym__relative_opcode_token8] = ACTIONS(103),
    [aux_sym__relative_opcode_token9] = ACTIONS(103),
    [aux_sym__immediate_opcode_token1] = ACTIONS(103),
    [aux_sym__immediate_opcode_token2] = ACTIONS(103),
    [aux_sym__immediate_opcode_token3] = ACTIONS(103),
    [aux_sym__immediate_opcode_token4] = ACTIONS(103),
    [aux_sym__immediate_opcode_token5] = ACTIONS(103),
    [aux_sym__immediate_opcode_token6] = ACTIONS(103),
    [aux_sym__immediate_opcode_token7] = ACTIONS(103),
    [aux_sym__immediate_opcode_token8] = ACTIONS(103),
    [aux_sym__immediate_opcode_token9] = ACTIONS(103),
    [aux_sym__immediate_opcode_token10] = ACTIONS(103),
    [aux_sym__immediate_opcode_token11] = ACTIONS(103),
    [aux_sym__immediate_opcode_token12] = ACTIONS(103),
    [aux_sym__absolute_opcode_token1] = ACTIONS(103),
    [aux_sym__absolute_opcode_token2] = ACTIONS(103),
    [aux_sym__absolute_opcode_token3] = ACTIONS(103),
    [aux_sym__absolute_opcode_token4] = ACTIONS(103),
    [aux_sym__absolute_opcode_token5] = ACTIONS(103),
    [aux_sym__absolute_opcode_token6] = ACTIONS(103),
    [aux_sym__absolute_opcode_token7] = ACTIONS(103),
    [aux_sym__absolute_opcode_token8] = ACTIONS(103),
    [sym_local_label] = ACTIONS(103),
    [sym_global_label] = ACTIONS(103),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(107),
    [aux_sym__ext_name_token1] = ACTIONS(107),
    [aux_sym__sec_name_token1] = ACTIONS(107),
    [aux_sym__word_name_token1] = ACTIONS(107),
    [aux_sym__byte_name_token1] = ACTIONS(107),
    [aux_sym__ascii_name_token1] = ACTIONS(107),
    [aux_sym__asciiz_name_token1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [aux_sym__implied_opcode_token1] = ACTIONS(107),
    [aux_sym__implied_opcode_token2] = ACTIONS(107),
    [aux_sym__implied_opcode_token3] = ACTIONS(107),
    [aux_sym__implied_opcode_token4] = ACTIONS(107),
    [aux_sym__implied_opcode_token5] = ACTIONS(107),
    [aux_sym__implied_opcode_token6] = ACTIONS(107),
    [aux_sym__implied_opcode_token7] = ACTIONS(107),
    [aux_sym__implied_opcode_token8] = ACTIONS(107),
    [aux_sym__implied_opcode_token9] = ACTIONS(107),
    [aux_sym__implied_opcode_token10] = ACTIONS(107),
    [aux_sym__implied_opcode_token11] = ACTIONS(107),
    [aux_sym__implied_opcode_token12] = ACTIONS(107),
    [aux_sym__implied_opcode_token13] = ACTIONS(107),
    [aux_sym__implied_opcode_token14] = ACTIONS(107),
    [aux_sym__implied_opcode_token15] = ACTIONS(107),
    [aux_sym__implied_opcode_token16] = ACTIONS(107),
    [aux_sym__implied_opcode_token17] = ACTIONS(107),
    [aux_sym__implied_opcode_token18] = ACTIONS(107),
    [aux_sym__implied_opcode_token19] = ACTIONS(107),
    [aux_sym__implied_opcode_token20] = ACTIONS(107),
    [aux_sym__implied_opcode_token21] = ACTIONS(107),
    [aux_sym__implied_opcode_token22] = ACTIONS(107),
    [aux_sym__implied_opcode_token23] = ACTIONS(107),
    [aux_sym__implied_opcode_token24] = ACTIONS(107),
    [aux_sym__implied_opcode_token25] = ACTIONS(107),
    [aux_sym__implied_opcode_token26] = ACTIONS(107),
    [aux_sym__implied_opcode_token27] = ACTIONS(107),
    [aux_sym__implied_opcode_token28] = ACTIONS(107),
    [aux_sym__implied_opcode_token29] = ACTIONS(107),
    [aux_sym__implied_opcode_token30] = ACTIONS(107),
    [aux_sym__implied_opcode_token31] = ACTIONS(107),
    [aux_sym__implied_opcode_token32] = ACTIONS(107),
    [aux_sym__implied_opcode_token33] = ACTIONS(107),
    [aux_sym__implied_opcode_token34] = ACTIONS(107),
    [aux_sym__implied_opcode_token35] = ACTIONS(107),
    [aux_sym__implied_opcode_token36] = ACTIONS(107),
    [aux_sym__implied_opcode_token37] = ACTIONS(107),
    [aux_sym__relative_opcode_token1] = ACTIONS(107),
    [aux_sym__relative_opcode_token2] = ACTIONS(107),
    [aux_sym__relative_opcode_token3] = ACTIONS(107),
    [aux_sym__relative_opcode_token4] = ACTIONS(107),
    [aux_sym__relative_opcode_token5] = ACTIONS(107),
    [aux_sym__relative_opcode_token6] = ACTIONS(107),
    [aux_sym__relative_opcode_token7] = ACTIONS(107),
    [aux_sym__relative_opcode_token8] = ACTIONS(107),
    [aux_sym__relative_opcode_token9] = ACTIONS(107),
    [aux_sym__immediate_opcode_token1] = ACTIONS(107),
    [aux_sym__immediate_opcode_token2] = ACTIONS(107),
    [aux_sym__immediate_opcode_token3] = ACTIONS(107),
    [aux_sym__immediate_opcode_token4] = ACTIONS(107),
    [aux_sym__immediate_opcode_token5] = ACTIONS(107),
    [aux_sym__immediate_opcode_token6] = ACTIONS(107),
    [aux_sym__immediate_opcode_token7] = ACTIONS(107),
    [aux_sym__immediate_opcode_token8] = ACTIONS(107),
    [aux_sym__immediate_opcode_token9] = ACTIONS(107),
    [aux_sym__immediate_opcode_token10] = ACTIONS(107),
    [aux_sym__immediate_opcode_token11] = ACTIONS(107),
    [aux_sym__immediate_opcode_token12] = ACTIONS(107),
    [aux_sym__absolute_opcode_token1] = ACTIONS(107),
    [aux_sym__absolute_opcode_token2] = ACTIONS(107),
    [aux_sym__absolute_opcode_token3] = ACTIONS(107),
    [aux_sym__absolute_opcode_token4] = ACTIONS(107),
    [aux_sym__absolute_opcode_token5] = ACTIONS(107),
    [aux_sym__absolute_opcode_token6] = ACTIONS(107),
    [aux_sym__absolute_opcode_token7] = ACTIONS(107),
    [aux_sym__absolute_opcode_token8] = ACTIONS(107),
    [sym_local_label] = ACTIONS(107),
    [sym_global_label] = ACTIONS(107),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(111),
    [aux_sym__ext_name_token1] = ACTIONS(111),
    [aux_sym__sec_name_token1] = ACTIONS(111),
    [aux_sym__word_name_token1] = ACTIONS(111),
    [aux_sym__byte_name_token1] = ACTIONS(111),
    [aux_sym__ascii_name_token1] = ACTIONS(111),
    [aux_sym__asciiz_name_token1] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [aux_sym__implied_opcode_token1] = ACTIONS(111),
    [aux_sym__implied_opcode_token2] = ACTIONS(111),
    [aux_sym__implied_opcode_token3] = ACTIONS(111),
    [aux_sym__implied_opcode_token4] = ACTIONS(111),
    [aux_sym__implied_opcode_token5] = ACTIONS(111),
    [aux_sym__implied_opcode_token6] = ACTIONS(111),
    [aux_sym__implied_opcode_token7] = ACTIONS(111),
    [aux_sym__implied_opcode_token8] = ACTIONS(111),
    [aux_sym__implied_opcode_token9] = ACTIONS(111),
    [aux_sym__implied_opcode_token10] = ACTIONS(111),
    [aux_sym__implied_opcode_token11] = ACTIONS(111),
    [aux_sym__implied_opcode_token12] = ACTIONS(111),
    [aux_sym__implied_opcode_token13] = ACTIONS(111),
    [aux_sym__implied_opcode_token14] = ACTIONS(111),
    [aux_sym__implied_opcode_token15] = ACTIONS(111),
    [aux_sym__implied_opcode_token16] = ACTIONS(111),
    [aux_sym__implied_opcode_token17] = ACTIONS(111),
    [aux_sym__implied_opcode_token18] = ACTIONS(111),
    [aux_sym__implied_opcode_token19] = ACTIONS(111),
    [aux_sym__implied_opcode_token20] = ACTIONS(111),
    [aux_sym__implied_opcode_token21] = ACTIONS(111),
    [aux_sym__implied_opcode_token22] = ACTIONS(111),
    [aux_sym__implied_opcode_token23] = ACTIONS(111),
    [aux_sym__implied_opcode_token24] = ACTIONS(111),
    [aux_sym__implied_opcode_token25] = ACTIONS(111),
    [aux_sym__implied_opcode_token26] = ACTIONS(111),
    [aux_sym__implied_opcode_token27] = ACTIONS(111),
    [aux_sym__implied_opcode_token28] = ACTIONS(111),
    [aux_sym__implied_opcode_token29] = ACTIONS(111),
    [aux_sym__implied_opcode_token30] = ACTIONS(111),
    [aux_sym__implied_opcode_token31] = ACTIONS(111),
    [aux_sym__implied_opcode_token32] = ACTIONS(111),
    [aux_sym__implied_opcode_token33] = ACTIONS(111),
    [aux_sym__implied_opcode_token34] = ACTIONS(111),
    [aux_sym__implied_opcode_token35] = ACTIONS(111),
    [aux_sym__implied_opcode_token36] = ACTIONS(111),
    [aux_sym__implied_opcode_token37] = ACTIONS(111),
    [aux_sym__relative_opcode_token1] = ACTIONS(111),
    [aux_sym__relative_opcode_token2] = ACTIONS(111),
    [aux_sym__relative_opcode_token3] = ACTIONS(111),
    [aux_sym__relative_opcode_token4] = ACTIONS(111),
    [aux_sym__relative_opcode_token5] = ACTIONS(111),
    [aux_sym__relative_opcode_token6] = ACTIONS(111),
    [aux_sym__relative_opcode_token7] = ACTIONS(111),
    [aux_sym__relative_opcode_token8] = ACTIONS(111),
    [aux_sym__relative_opcode_token9] = ACTIONS(111),
    [aux_sym__immediate_opcode_token1] = ACTIONS(111),
    [aux_sym__immediate_opcode_token2] = ACTIONS(111),
    [aux_sym__immediate_opcode_token3] = ACTIONS(111),
    [aux_sym__immediate_opcode_token4] = ACTIONS(111),
    [aux_sym__immediate_opcode_token5] = ACTIONS(111),
    [aux_sym__immediate_opcode_token6] = ACTIONS(111),
    [aux_sym__immediate_opcode_token7] = ACTIONS(111),
    [aux_sym__immediate_opcode_token8] = ACTIONS(111),
    [aux_sym__immediate_opcode_token9] = ACTIONS(111),
    [aux_sym__immediate_opcode_token10] = ACTIONS(111),
    [aux_sym__immediate_opcode_token11] = ACTIONS(111),
    [aux_sym__immediate_opcode_token12] = ACTIONS(111),
    [aux_sym__absolute_opcode_token1] = ACTIONS(111),
    [aux_sym__absolute_opcode_token2] = ACTIONS(111),
    [aux_sym__absolute_opcode_token3] = ACTIONS(111),
    [aux_sym__absolute_opcode_token4] = ACTIONS(111),
    [aux_sym__absolute_opcode_token5] = ACTIONS(111),
    [aux_sym__absolute_opcode_token6] = ACTIONS(111),
    [aux_sym__absolute_opcode_token7] = ACTIONS(111),
    [aux_sym__absolute_opcode_token8] = ACTIONS(111),
    [sym_local_label] = ACTIONS(111),
    [sym_global_label] = ACTIONS(111),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(115),
    [aux_sym__ext_name_token1] = ACTIONS(115),
    [aux_sym__sec_name_token1] = ACTIONS(115),
    [aux_sym__word_name_token1] = ACTIONS(115),
    [aux_sym__byte_name_token1] = ACTIONS(115),
    [aux_sym__ascii_name_token1] = ACTIONS(115),
    [aux_sym__asciiz_name_token1] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [aux_sym__implied_opcode_token1] = ACTIONS(115),
    [aux_sym__implied_opcode_token2] = ACTIONS(115),
    [aux_sym__implied_opcode_token3] = ACTIONS(115),
    [aux_sym__implied_opcode_token4] = ACTIONS(115),
    [aux_sym__implied_opcode_token5] = ACTIONS(115),
    [aux_sym__implied_opcode_token6] = ACTIONS(115),
    [aux_sym__implied_opcode_token7] = ACTIONS(115),
    [aux_sym__implied_opcode_token8] = ACTIONS(115),
    [aux_sym__implied_opcode_token9] = ACTIONS(115),
    [aux_sym__implied_opcode_token10] = ACTIONS(115),
    [aux_sym__implied_opcode_token11] = ACTIONS(115),
    [aux_sym__implied_opcode_token12] = ACTIONS(115),
    [aux_sym__implied_opcode_token13] = ACTIONS(115),
    [aux_sym__implied_opcode_token14] = ACTIONS(115),
    [aux_sym__implied_opcode_token15] = ACTIONS(115),
    [aux_sym__implied_opcode_token16] = ACTIONS(115),
    [aux_sym__implied_opcode_token17] = ACTIONS(115),
    [aux_sym__implied_opcode_token18] = ACTIONS(115),
    [aux_sym__implied_opcode_token19] = ACTIONS(115),
    [aux_sym__implied_opcode_token20] = ACTIONS(115),
    [aux_sym__implied_opcode_token21] = ACTIONS(115),
    [aux_sym__implied_opcode_token22] = ACTIONS(115),
    [aux_sym__implied_opcode_token23] = ACTIONS(115),
    [aux_sym__implied_opcode_token24] = ACTIONS(115),
    [aux_sym__implied_opcode_token25] = ACTIONS(115),
    [aux_sym__implied_opcode_token26] = ACTIONS(115),
    [aux_sym__implied_opcode_token27] = ACTIONS(115),
    [aux_sym__implied_opcode_token28] = ACTIONS(115),
    [aux_sym__implied_opcode_token29] = ACTIONS(115),
    [aux_sym__implied_opcode_token30] = ACTIONS(115),
    [aux_sym__implied_opcode_token31] = ACTIONS(115),
    [aux_sym__implied_opcode_token32] = ACTIONS(115),
    [aux_sym__implied_opcode_token33] = ACTIONS(115),
    [aux_sym__implied_opcode_token34] = ACTIONS(115),
    [aux_sym__implied_opcode_token35] = ACTIONS(115),
    [aux_sym__implied_opcode_token36] = ACTIONS(115),
    [aux_sym__implied_opcode_token37] = ACTIONS(115),
    [aux_sym__relative_opcode_token1] = ACTIONS(115),
    [aux_sym__relative_opcode_token2] = ACTIONS(115),
    [aux_sym__relative_opcode_token3] = ACTIONS(115),
    [aux_sym__relative_opcode_token4] = ACTIONS(115),
    [aux_sym__relative_opcode_token5] = ACTIONS(115),
    [aux_sym__relative_opcode_token6] = ACTIONS(115),
    [aux_sym__relative_opcode_token7] = ACTIONS(115),
    [aux_sym__relative_opcode_token8] = ACTIONS(115),
    [aux_sym__relative_opcode_token9] = ACTIONS(115),
    [aux_sym__immediate_opcode_token1] = ACTIONS(115),
    [aux_sym__immediate_opcode_token2] = ACTIONS(115),
    [aux_sym__immediate_opcode_token3] = ACTIONS(115),
    [aux_sym__immediate_opcode_token4] = ACTIONS(115),
    [aux_sym__immediate_opcode_token5] = ACTIONS(115),
    [aux_sym__immediate_opcode_token6] = ACTIONS(115),
    [aux_sym__immediate_opcode_token7] = ACTIONS(115),
    [aux_sym__immediate_opcode_token8] = ACTIONS(115),
    [aux_sym__immediate_opcode_token9] = ACTIONS(115),
    [aux_sym__immediate_opcode_token10] = ACTIONS(115),
    [aux_sym__immediate_opcode_token11] = ACTIONS(115),
    [aux_sym__immediate_opcode_token12] = ACTIONS(115),
    [aux_sym__absolute_opcode_token1] = ACTIONS(115),
    [aux_sym__absolute_opcode_token2] = ACTIONS(115),
    [aux_sym__absolute_opcode_token3] = ACTIONS(115),
    [aux_sym__absolute_opcode_token4] = ACTIONS(115),
    [aux_sym__absolute_opcode_token5] = ACTIONS(115),
    [aux_sym__absolute_opcode_token6] = ACTIONS(115),
    [aux_sym__absolute_opcode_token7] = ACTIONS(115),
    [aux_sym__absolute_opcode_token8] = ACTIONS(115),
    [sym_local_label] = ACTIONS(115),
    [sym_global_label] = ACTIONS(115),
  },
  [12] = {
    [sym__reg_y] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(119),
    [aux_sym__ext_name_token1] = ACTIONS(119),
    [aux_sym__sec_name_token1] = ACTIONS(119),
    [aux_sym__word_name_token1] = ACTIONS(119),
    [aux_sym__byte_name_token1] = ACTIONS(119),
    [aux_sym__ascii_name_token1] = ACTIONS(119),
    [aux_sym__asciiz_name_token1] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(121),
    [aux_sym__implied_opcode_token1] = ACTIONS(119),
    [aux_sym__implied_opcode_token2] = ACTIONS(119),
    [aux_sym__implied_opcode_token3] = ACTIONS(119),
    [aux_sym__implied_opcode_token4] = ACTIONS(119),
    [aux_sym__implied_opcode_token5] = ACTIONS(119),
    [aux_sym__implied_opcode_token6] = ACTIONS(119),
    [aux_sym__implied_opcode_token7] = ACTIONS(119),
    [aux_sym__implied_opcode_token8] = ACTIONS(119),
    [aux_sym__implied_opcode_token9] = ACTIONS(119),
    [aux_sym__implied_opcode_token10] = ACTIONS(119),
    [aux_sym__implied_opcode_token11] = ACTIONS(119),
    [aux_sym__implied_opcode_token12] = ACTIONS(119),
    [aux_sym__implied_opcode_token13] = ACTIONS(119),
    [aux_sym__implied_opcode_token14] = ACTIONS(119),
    [aux_sym__implied_opcode_token15] = ACTIONS(119),
    [aux_sym__implied_opcode_token16] = ACTIONS(119),
    [aux_sym__implied_opcode_token17] = ACTIONS(119),
    [aux_sym__implied_opcode_token18] = ACTIONS(119),
    [aux_sym__implied_opcode_token19] = ACTIONS(119),
    [aux_sym__implied_opcode_token20] = ACTIONS(119),
    [aux_sym__implied_opcode_token21] = ACTIONS(119),
    [aux_sym__implied_opcode_token22] = ACTIONS(119),
    [aux_sym__implied_opcode_token23] = ACTIONS(119),
    [aux_sym__implied_opcode_token24] = ACTIONS(119),
    [aux_sym__implied_opcode_token25] = ACTIONS(119),
    [aux_sym__implied_opcode_token26] = ACTIONS(119),
    [aux_sym__implied_opcode_token27] = ACTIONS(119),
    [aux_sym__implied_opcode_token28] = ACTIONS(119),
    [aux_sym__implied_opcode_token29] = ACTIONS(119),
    [aux_sym__implied_opcode_token30] = ACTIONS(119),
    [aux_sym__implied_opcode_token31] = ACTIONS(119),
    [aux_sym__implied_opcode_token32] = ACTIONS(119),
    [aux_sym__implied_opcode_token33] = ACTIONS(119),
    [aux_sym__implied_opcode_token34] = ACTIONS(119),
    [aux_sym__implied_opcode_token35] = ACTIONS(119),
    [aux_sym__implied_opcode_token36] = ACTIONS(119),
    [aux_sym__implied_opcode_token37] = ACTIONS(119),
    [aux_sym__relative_opcode_token1] = ACTIONS(119),
    [aux_sym__relative_opcode_token2] = ACTIONS(119),
    [aux_sym__relative_opcode_token3] = ACTIONS(119),
    [aux_sym__relative_opcode_token4] = ACTIONS(119),
    [aux_sym__relative_opcode_token5] = ACTIONS(119),
    [aux_sym__relative_opcode_token6] = ACTIONS(119),
    [aux_sym__relative_opcode_token7] = ACTIONS(119),
    [aux_sym__relative_opcode_token8] = ACTIONS(119),
    [aux_sym__relative_opcode_token9] = ACTIONS(119),
    [aux_sym__immediate_opcode_token1] = ACTIONS(119),
    [aux_sym__immediate_opcode_token2] = ACTIONS(119),
    [aux_sym__immediate_opcode_token3] = ACTIONS(119),
    [aux_sym__immediate_opcode_token4] = ACTIONS(119),
    [aux_sym__immediate_opcode_token5] = ACTIONS(119),
    [aux_sym__immediate_opcode_token6] = ACTIONS(119),
    [aux_sym__immediate_opcode_token7] = ACTIONS(119),
    [aux_sym__immediate_opcode_token8] = ACTIONS(119),
    [aux_sym__immediate_opcode_token9] = ACTIONS(119),
    [aux_sym__immediate_opcode_token10] = ACTIONS(119),
    [aux_sym__immediate_opcode_token11] = ACTIONS(119),
    [aux_sym__immediate_opcode_token12] = ACTIONS(119),
    [aux_sym__absolute_opcode_token1] = ACTIONS(119),
    [aux_sym__absolute_opcode_token2] = ACTIONS(119),
    [aux_sym__absolute_opcode_token3] = ACTIONS(119),
    [aux_sym__absolute_opcode_token4] = ACTIONS(119),
    [aux_sym__absolute_opcode_token5] = ACTIONS(119),
    [aux_sym__absolute_opcode_token6] = ACTIONS(119),
    [aux_sym__absolute_opcode_token7] = ACTIONS(119),
    [aux_sym__absolute_opcode_token8] = ACTIONS(119),
    [sym_local_label] = ACTIONS(119),
    [sym_global_label] = ACTIONS(119),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(125),
    [aux_sym__ext_name_token1] = ACTIONS(125),
    [aux_sym__sec_name_token1] = ACTIONS(125),
    [aux_sym__word_name_token1] = ACTIONS(125),
    [aux_sym__byte_name_token1] = ACTIONS(125),
    [aux_sym__ascii_name_token1] = ACTIONS(125),
    [aux_sym__asciiz_name_token1] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(123),
    [aux_sym__implied_opcode_token1] = ACTIONS(125),
    [aux_sym__implied_opcode_token2] = ACTIONS(125),
    [aux_sym__implied_opcode_token3] = ACTIONS(125),
    [aux_sym__implied_opcode_token4] = ACTIONS(125),
    [aux_sym__implied_opcode_token5] = ACTIONS(125),
    [aux_sym__implied_opcode_token6] = ACTIONS(125),
    [aux_sym__implied_opcode_token7] = ACTIONS(125),
    [aux_sym__implied_opcode_token8] = ACTIONS(125),
    [aux_sym__implied_opcode_token9] = ACTIONS(125),
    [aux_sym__implied_opcode_token10] = ACTIONS(125),
    [aux_sym__implied_opcode_token11] = ACTIONS(125),
    [aux_sym__implied_opcode_token12] = ACTIONS(125),
    [aux_sym__implied_opcode_token13] = ACTIONS(125),
    [aux_sym__implied_opcode_token14] = ACTIONS(125),
    [aux_sym__implied_opcode_token15] = ACTIONS(125),
    [aux_sym__implied_opcode_token16] = ACTIONS(125),
    [aux_sym__implied_opcode_token17] = ACTIONS(125),
    [aux_sym__implied_opcode_token18] = ACTIONS(125),
    [aux_sym__implied_opcode_token19] = ACTIONS(125),
    [aux_sym__implied_opcode_token20] = ACTIONS(125),
    [aux_sym__implied_opcode_token21] = ACTIONS(125),
    [aux_sym__implied_opcode_token22] = ACTIONS(125),
    [aux_sym__implied_opcode_token23] = ACTIONS(125),
    [aux_sym__implied_opcode_token24] = ACTIONS(125),
    [aux_sym__implied_opcode_token25] = ACTIONS(125),
    [aux_sym__implied_opcode_token26] = ACTIONS(125),
    [aux_sym__implied_opcode_token27] = ACTIONS(125),
    [aux_sym__implied_opcode_token28] = ACTIONS(125),
    [aux_sym__implied_opcode_token29] = ACTIONS(125),
    [aux_sym__implied_opcode_token30] = ACTIONS(125),
    [aux_sym__implied_opcode_token31] = ACTIONS(125),
    [aux_sym__implied_opcode_token32] = ACTIONS(125),
    [aux_sym__implied_opcode_token33] = ACTIONS(125),
    [aux_sym__implied_opcode_token34] = ACTIONS(125),
    [aux_sym__implied_opcode_token35] = ACTIONS(125),
    [aux_sym__implied_opcode_token36] = ACTIONS(125),
    [aux_sym__implied_opcode_token37] = ACTIONS(125),
    [aux_sym__relative_opcode_token1] = ACTIONS(125),
    [aux_sym__relative_opcode_token2] = ACTIONS(125),
    [aux_sym__relative_opcode_token3] = ACTIONS(125),
    [aux_sym__relative_opcode_token4] = ACTIONS(125),
    [aux_sym__relative_opcode_token5] = ACTIONS(125),
    [aux_sym__relative_opcode_token6] = ACTIONS(125),
    [aux_sym__relative_opcode_token7] = ACTIONS(125),
    [aux_sym__relative_opcode_token8] = ACTIONS(125),
    [aux_sym__relative_opcode_token9] = ACTIONS(125),
    [aux_sym__immediate_opcode_token1] = ACTIONS(125),
    [aux_sym__immediate_opcode_token2] = ACTIONS(125),
    [aux_sym__immediate_opcode_token3] = ACTIONS(125),
    [aux_sym__immediate_opcode_token4] = ACTIONS(125),
    [aux_sym__immediate_opcode_token5] = ACTIONS(125),
    [aux_sym__immediate_opcode_token6] = ACTIONS(125),
    [aux_sym__immediate_opcode_token7] = ACTIONS(125),
    [aux_sym__immediate_opcode_token8] = ACTIONS(125),
    [aux_sym__immediate_opcode_token9] = ACTIONS(125),
    [aux_sym__immediate_opcode_token10] = ACTIONS(125),
    [aux_sym__immediate_opcode_token11] = ACTIONS(125),
    [aux_sym__immediate_opcode_token12] = ACTIONS(125),
    [aux_sym__absolute_opcode_token1] = ACTIONS(125),
    [aux_sym__absolute_opcode_token2] = ACTIONS(125),
    [aux_sym__absolute_opcode_token3] = ACTIONS(125),
    [aux_sym__absolute_opcode_token4] = ACTIONS(125),
    [aux_sym__absolute_opcode_token5] = ACTIONS(125),
    [aux_sym__absolute_opcode_token6] = ACTIONS(125),
    [aux_sym__absolute_opcode_token7] = ACTIONS(125),
    [aux_sym__absolute_opcode_token8] = ACTIONS(125),
    [sym_local_label] = ACTIONS(125),
    [sym_global_label] = ACTIONS(125),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(129),
    [sym__ws_sep] = ACTIONS(131),
    [aux_sym__inc_name_token1] = ACTIONS(133),
    [aux_sym__ext_name_token1] = ACTIONS(133),
    [aux_sym__sec_name_token1] = ACTIONS(133),
    [aux_sym__word_name_token1] = ACTIONS(133),
    [aux_sym__byte_name_token1] = ACTIONS(133),
    [aux_sym__ascii_name_token1] = ACTIONS(133),
    [aux_sym__asciiz_name_token1] = ACTIONS(133),
    [aux_sym__implied_opcode_token1] = ACTIONS(133),
    [aux_sym__implied_opcode_token2] = ACTIONS(133),
    [aux_sym__implied_opcode_token3] = ACTIONS(133),
    [aux_sym__implied_opcode_token4] = ACTIONS(133),
    [aux_sym__implied_opcode_token5] = ACTIONS(133),
    [aux_sym__implied_opcode_token6] = ACTIONS(133),
    [aux_sym__implied_opcode_token7] = ACTIONS(133),
    [aux_sym__implied_opcode_token8] = ACTIONS(133),
    [aux_sym__implied_opcode_token9] = ACTIONS(133),
    [aux_sym__implied_opcode_token10] = ACTIONS(133),
    [aux_sym__implied_opcode_token11] = ACTIONS(133),
    [aux_sym__implied_opcode_token12] = ACTIONS(133),
    [aux_sym__implied_opcode_token13] = ACTIONS(133),
    [aux_sym__implied_opcode_token14] = ACTIONS(133),
    [aux_sym__implied_opcode_token15] = ACTIONS(133),
    [aux_sym__implied_opcode_token16] = ACTIONS(133),
    [aux_sym__implied_opcode_token17] = ACTIONS(133),
    [aux_sym__implied_opcode_token18] = ACTIONS(133),
    [aux_sym__implied_opcode_token19] = ACTIONS(133),
    [aux_sym__implied_opcode_token20] = ACTIONS(133),
    [aux_sym__implied_opcode_token21] = ACTIONS(133),
    [aux_sym__implied_opcode_token22] = ACTIONS(133),
    [aux_sym__implied_opcode_token23] = ACTIONS(133),
    [aux_sym__implied_opcode_token24] = ACTIONS(133),
    [aux_sym__implied_opcode_token25] = ACTIONS(133),
    [aux_sym__implied_opcode_token26] = ACTIONS(133),
    [aux_sym__implied_opcode_token27] = ACTIONS(133),
    [aux_sym__implied_opcode_token28] = ACTIONS(133),
    [aux_sym__implied_opcode_token29] = ACTIONS(133),
    [aux_sym__implied_opcode_token30] = ACTIONS(133),
    [aux_sym__implied_opcode_token31] = ACTIONS(133),
    [aux_sym__implied_opcode_token32] = ACTIONS(133),
    [aux_sym__implied_opcode_token33] = ACTIONS(133),
    [aux_sym__implied_opcode_token34] = ACTIONS(133),
    [aux_sym__implied_opcode_token35] = ACTIONS(133),
    [aux_sym__implied_opcode_token36] = ACTIONS(133),
    [aux_sym__implied_opcode_token37] = ACTIONS(133),
    [aux_sym__relative_opcode_token1] = ACTIONS(133),
    [aux_sym__relative_opcode_token2] = ACTIONS(133),
    [aux_sym__relative_opcode_token3] = ACTIONS(133),
    [aux_sym__relative_opcode_token4] = ACTIONS(133),
    [aux_sym__relative_opcode_token5] = ACTIONS(133),
    [aux_sym__relative_opcode_token6] = ACTIONS(133),
    [aux_sym__relative_opcode_token7] = ACTIONS(133),
    [aux_sym__relative_opcode_token8] = ACTIONS(133),
    [aux_sym__relative_opcode_token9] = ACTIONS(133),
    [aux_sym__immediate_opcode_token1] = ACTIONS(133),
    [aux_sym__immediate_opcode_token2] = ACTIONS(133),
    [aux_sym__immediate_opcode_token3] = ACTIONS(133),
    [aux_sym__immediate_opcode_token4] = ACTIONS(133),
    [aux_sym__immediate_opcode_token5] = ACTIONS(133),
    [aux_sym__immediate_opcode_token6] = ACTIONS(133),
    [aux_sym__immediate_opcode_token7] = ACTIONS(133),
    [aux_sym__immediate_opcode_token8] = ACTIONS(133),
    [aux_sym__immediate_opcode_token9] = ACTIONS(133),
    [aux_sym__immediate_opcode_token10] = ACTIONS(133),
    [aux_sym__immediate_opcode_token11] = ACTIONS(133),
    [aux_sym__immediate_opcode_token12] = ACTIONS(133),
    [aux_sym__absolute_opcode_token1] = ACTIONS(133),
    [aux_sym__absolute_opcode_token2] = ACTIONS(133),
    [aux_sym__absolute_opcode_token3] = ACTIONS(133),
    [aux_sym__absolute_opcode_token4] = ACTIONS(133),
    [aux_sym__absolute_opcode_token5] = ACTIONS(133),
    [aux_sym__absolute_opcode_token6] = ACTIONS(133),
    [aux_sym__absolute_opcode_token7] = ACTIONS(133),
    [aux_sym__absolute_opcode_token8] = ACTIONS(133),
    [sym_local_label] = ACTIONS(133),
    [sym_global_label] = ACTIONS(133),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(137),
    [aux_sym__ext_name_token1] = ACTIONS(137),
    [aux_sym__sec_name_token1] = ACTIONS(137),
    [aux_sym__word_name_token1] = ACTIONS(137),
    [aux_sym__byte_name_token1] = ACTIONS(137),
    [aux_sym__ascii_name_token1] = ACTIONS(137),
    [aux_sym__asciiz_name_token1] = ACTIONS(137),
    [aux_sym__implied_opcode_token1] = ACTIONS(137),
    [aux_sym__implied_opcode_token2] = ACTIONS(137),
    [aux_sym__implied_opcode_token3] = ACTIONS(137),
    [aux_sym__implied_opcode_token4] = ACTIONS(137),
    [aux_sym__implied_opcode_token5] = ACTIONS(137),
    [aux_sym__implied_opcode_token6] = ACTIONS(137),
    [aux_sym__implied_opcode_token7] = ACTIONS(137),
    [aux_sym__implied_opcode_token8] = ACTIONS(137),
    [aux_sym__implied_opcode_token9] = ACTIONS(137),
    [aux_sym__implied_opcode_token10] = ACTIONS(137),
    [aux_sym__implied_opcode_token11] = ACTIONS(137),
    [aux_sym__implied_opcode_token12] = ACTIONS(137),
    [aux_sym__implied_opcode_token13] = ACTIONS(137),
    [aux_sym__implied_opcode_token14] = ACTIONS(137),
    [aux_sym__implied_opcode_token15] = ACTIONS(137),
    [aux_sym__implied_opcode_token16] = ACTIONS(137),
    [aux_sym__implied_opcode_token17] = ACTIONS(137),
    [aux_sym__implied_opcode_token18] = ACTIONS(137),
    [aux_sym__implied_opcode_token19] = ACTIONS(137),
    [aux_sym__implied_opcode_token20] = ACTIONS(137),
    [aux_sym__implied_opcode_token21] = ACTIONS(137),
    [aux_sym__implied_opcode_token22] = ACTIONS(137),
    [aux_sym__implied_opcode_token23] = ACTIONS(137),
    [aux_sym__implied_opcode_token24] = ACTIONS(137),
    [aux_sym__implied_opcode_token25] = ACTIONS(137),
    [aux_sym__implied_opcode_token26] = ACTIONS(137),
    [aux_sym__implied_opcode_token27] = ACTIONS(137),
    [aux_sym__implied_opcode_token28] = ACTIONS(137),
    [aux_sym__implied_opcode_token29] = ACTIONS(137),
    [aux_sym__implied_opcode_token30] = ACTIONS(137),
    [aux_sym__implied_opcode_token31] = ACTIONS(137),
    [aux_sym__implied_opcode_token32] = ACTIONS(137),
    [aux_sym__implied_opcode_token33] = ACTIONS(137),
    [aux_sym__implied_opcode_token34] = ACTIONS(137),
    [aux_sym__implied_opcode_token35] = ACTIONS(137),
    [aux_sym__implied_opcode_token36] = ACTIONS(137),
    [aux_sym__implied_opcode_token37] = ACTIONS(137),
    [aux_sym__relative_opcode_token1] = ACTIONS(137),
    [aux_sym__relative_opcode_token2] = ACTIONS(137),
    [aux_sym__relative_opcode_token3] = ACTIONS(137),
    [aux_sym__relative_opcode_token4] = ACTIONS(137),
    [aux_sym__relative_opcode_token5] = ACTIONS(137),
    [aux_sym__relative_opcode_token6] = ACTIONS(137),
    [aux_sym__relative_opcode_token7] = ACTIONS(137),
    [aux_sym__relative_opcode_token8] = ACTIONS(137),
    [aux_sym__relative_opcode_token9] = ACTIONS(137),
    [aux_sym__immediate_opcode_token1] = ACTIONS(137),
    [aux_sym__immediate_opcode_token2] = ACTIONS(137),
    [aux_sym__immediate_opcode_token3] = ACTIONS(137),
    [aux_sym__immediate_opcode_token4] = ACTIONS(137),
    [aux_sym__immediate_opcode_token5] = ACTIONS(137),
    [aux_sym__immediate_opcode_token6] = ACTIONS(137),
    [aux_sym__immediate_opcode_token7] = ACTIONS(137),
    [aux_sym__immediate_opcode_token8] = ACTIONS(137),
    [aux_sym__immediate_opcode_token9] = ACTIONS(137),
    [aux_sym__immediate_opcode_token10] = ACTIONS(137),
    [aux_sym__immediate_opcode_token11] = ACTIONS(137),
    [aux_sym__immediate_opcode_token12] = ACTIONS(137),
    [aux_sym__absolute_opcode_token1] = ACTIONS(137),
    [aux_sym__absolute_opcode_token2] = ACTIONS(137),
    [aux_sym__absolute_opcode_token3] = ACTIONS(137),
    [aux_sym__absolute_opcode_token4] = ACTIONS(137),
    [aux_sym__absolute_opcode_token5] = ACTIONS(137),
    [aux_sym__absolute_opcode_token6] = ACTIONS(137),
    [aux_sym__absolute_opcode_token7] = ACTIONS(137),
    [aux_sym__absolute_opcode_token8] = ACTIONS(137),
    [sym_local_label] = ACTIONS(137),
    [sym_global_label] = ACTIONS(137),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(133),
    [aux_sym__ext_name_token1] = ACTIONS(133),
    [aux_sym__sec_name_token1] = ACTIONS(133),
    [aux_sym__word_name_token1] = ACTIONS(133),
    [aux_sym__byte_name_token1] = ACTIONS(133),
    [aux_sym__ascii_name_token1] = ACTIONS(133),
    [aux_sym__asciiz_name_token1] = ACTIONS(133),
    [aux_sym__implied_opcode_token1] = ACTIONS(133),
    [aux_sym__implied_opcode_token2] = ACTIONS(133),
    [aux_sym__implied_opcode_token3] = ACTIONS(133),
    [aux_sym__implied_opcode_token4] = ACTIONS(133),
    [aux_sym__implied_opcode_token5] = ACTIONS(133),
    [aux_sym__implied_opcode_token6] = ACTIONS(133),
    [aux_sym__implied_opcode_token7] = ACTIONS(133),
    [aux_sym__implied_opcode_token8] = ACTIONS(133),
    [aux_sym__implied_opcode_token9] = ACTIONS(133),
    [aux_sym__implied_opcode_token10] = ACTIONS(133),
    [aux_sym__implied_opcode_token11] = ACTIONS(133),
    [aux_sym__implied_opcode_token12] = ACTIONS(133),
    [aux_sym__implied_opcode_token13] = ACTIONS(133),
    [aux_sym__implied_opcode_token14] = ACTIONS(133),
    [aux_sym__implied_opcode_token15] = ACTIONS(133),
    [aux_sym__implied_opcode_token16] = ACTIONS(133),
    [aux_sym__implied_opcode_token17] = ACTIONS(133),
    [aux_sym__implied_opcode_token18] = ACTIONS(133),
    [aux_sym__implied_opcode_token19] = ACTIONS(133),
    [aux_sym__implied_opcode_token20] = ACTIONS(133),
    [aux_sym__implied_opcode_token21] = ACTIONS(133),
    [aux_sym__implied_opcode_token22] = ACTIONS(133),
    [aux_sym__implied_opcode_token23] = ACTIONS(133),
    [aux_sym__implied_opcode_token24] = ACTIONS(133),
    [aux_sym__implied_opcode_token25] = ACTIONS(133),
    [aux_sym__implied_opcode_token26] = ACTIONS(133),
    [aux_sym__implied_opcode_token27] = ACTIONS(133),
    [aux_sym__implied_opcode_token28] = ACTIONS(133),
    [aux_sym__implied_opcode_token29] = ACTIONS(133),
    [aux_sym__implied_opcode_token30] = ACTIONS(133),
    [aux_sym__implied_opcode_token31] = ACTIONS(133),
    [aux_sym__implied_opcode_token32] = ACTIONS(133),
    [aux_sym__implied_opcode_token33] = ACTIONS(133),
    [aux_sym__implied_opcode_token34] = ACTIONS(133),
    [aux_sym__implied_opcode_token35] = ACTIONS(133),
    [aux_sym__implied_opcode_token36] = ACTIONS(133),
    [aux_sym__implied_opcode_token37] = ACTIONS(133),
    [aux_sym__relative_opcode_token1] = ACTIONS(133),
    [aux_sym__relative_opcode_token2] = ACTIONS(133),
    [aux_sym__relative_opcode_token3] = ACTIONS(133),
    [aux_sym__relative_opcode_token4] = ACTIONS(133),
    [aux_sym__relative_opcode_token5] = ACTIONS(133),
    [aux_sym__relative_opcode_token6] = ACTIONS(133),
    [aux_sym__relative_opcode_token7] = ACTIONS(133),
    [aux_sym__relative_opcode_token8] = ACTIONS(133),
    [aux_sym__relative_opcode_token9] = ACTIONS(133),
    [aux_sym__immediate_opcode_token1] = ACTIONS(133),
    [aux_sym__immediate_opcode_token2] = ACTIONS(133),
    [aux_sym__immediate_opcode_token3] = ACTIONS(133),
    [aux_sym__immediate_opcode_token4] = ACTIONS(133),
    [aux_sym__immediate_opcode_token5] = ACTIONS(133),
    [aux_sym__immediate_opcode_token6] = ACTIONS(133),
    [aux_sym__immediate_opcode_token7] = ACTIONS(133),
    [aux_sym__immediate_opcode_token8] = ACTIONS(133),
    [aux_sym__immediate_opcode_token9] = ACTIONS(133),
    [aux_sym__immediate_opcode_token10] = ACTIONS(133),
    [aux_sym__immediate_opcode_token11] = ACTIONS(133),
    [aux_sym__immediate_opcode_token12] = ACTIONS(133),
    [aux_sym__absolute_opcode_token1] = ACTIONS(133),
    [aux_sym__absolute_opcode_token2] = ACTIONS(133),
    [aux_sym__absolute_opcode_token3] = ACTIONS(133),
    [aux_sym__absolute_opcode_token4] = ACTIONS(133),
    [aux_sym__absolute_opcode_token5] = ACTIONS(133),
    [aux_sym__absolute_opcode_token6] = ACTIONS(133),
    [aux_sym__absolute_opcode_token7] = ACTIONS(133),
    [aux_sym__absolute_opcode_token8] = ACTIONS(133),
    [sym_local_label] = ACTIONS(133),
    [sym_global_label] = ACTIONS(133),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(141),
    [aux_sym__ext_name_token1] = ACTIONS(141),
    [aux_sym__sec_name_token1] = ACTIONS(141),
    [aux_sym__word_name_token1] = ACTIONS(141),
    [aux_sym__byte_name_token1] = ACTIONS(141),
    [aux_sym__ascii_name_token1] = ACTIONS(141),
    [aux_sym__asciiz_name_token1] = ACTIONS(141),
    [aux_sym__implied_opcode_token1] = ACTIONS(141),
    [aux_sym__implied_opcode_token2] = ACTIONS(141),
    [aux_sym__implied_opcode_token3] = ACTIONS(141),
    [aux_sym__implied_opcode_token4] = ACTIONS(141),
    [aux_sym__implied_opcode_token5] = ACTIONS(141),
    [aux_sym__implied_opcode_token6] = ACTIONS(141),
    [aux_sym__implied_opcode_token7] = ACTIONS(141),
    [aux_sym__implied_opcode_token8] = ACTIONS(141),
    [aux_sym__implied_opcode_token9] = ACTIONS(141),
    [aux_sym__implied_opcode_token10] = ACTIONS(141),
    [aux_sym__implied_opcode_token11] = ACTIONS(141),
    [aux_sym__implied_opcode_token12] = ACTIONS(141),
    [aux_sym__implied_opcode_token13] = ACTIONS(141),
    [aux_sym__implied_opcode_token14] = ACTIONS(141),
    [aux_sym__implied_opcode_token15] = ACTIONS(141),
    [aux_sym__implied_opcode_token16] = ACTIONS(141),
    [aux_sym__implied_opcode_token17] = ACTIONS(141),
    [aux_sym__implied_opcode_token18] = ACTIONS(141),
    [aux_sym__implied_opcode_token19] = ACTIONS(141),
    [aux_sym__implied_opcode_token20] = ACTIONS(141),
    [aux_sym__implied_opcode_token21] = ACTIONS(141),
    [aux_sym__implied_opcode_token22] = ACTIONS(141),
    [aux_sym__implied_opcode_token23] = ACTIONS(141),
    [aux_sym__implied_opcode_token24] = ACTIONS(141),
    [aux_sym__implied_opcode_token25] = ACTIONS(141),
    [aux_sym__implied_opcode_token26] = ACTIONS(141),
    [aux_sym__implied_opcode_token27] = ACTIONS(141),
    [aux_sym__implied_opcode_token28] = ACTIONS(141),
    [aux_sym__implied_opcode_token29] = ACTIONS(141),
    [aux_sym__implied_opcode_token30] = ACTIONS(141),
    [aux_sym__implied_opcode_token31] = ACTIONS(141),
    [aux_sym__implied_opcode_token32] = ACTIONS(141),
    [aux_sym__implied_opcode_token33] = ACTIONS(141),
    [aux_sym__implied_opcode_token34] = ACTIONS(141),
    [aux_sym__implied_opcode_token35] = ACTIONS(141),
    [aux_sym__implied_opcode_token36] = ACTIONS(141),
    [aux_sym__implied_opcode_token37] = ACTIONS(141),
    [aux_sym__relative_opcode_token1] = ACTIONS(141),
    [aux_sym__relative_opcode_token2] = ACTIONS(141),
    [aux_sym__relative_opcode_token3] = ACTIONS(141),
    [aux_sym__relative_opcode_token4] = ACTIONS(141),
    [aux_sym__relative_opcode_token5] = ACTIONS(141),
    [aux_sym__relative_opcode_token6] = ACTIONS(141),
    [aux_sym__relative_opcode_token7] = ACTIONS(141),
    [aux_sym__relative_opcode_token8] = ACTIONS(141),
    [aux_sym__relative_opcode_token9] = ACTIONS(141),
    [aux_sym__immediate_opcode_token1] = ACTIONS(141),
    [aux_sym__immediate_opcode_token2] = ACTIONS(141),
    [aux_sym__immediate_opcode_token3] = ACTIONS(141),
    [aux_sym__immediate_opcode_token4] = ACTIONS(141),
    [aux_sym__immediate_opcode_token5] = ACTIONS(141),
    [aux_sym__immediate_opcode_token6] = ACTIONS(141),
    [aux_sym__immediate_opcode_token7] = ACTIONS(141),
    [aux_sym__immediate_opcode_token8] = ACTIONS(141),
    [aux_sym__immediate_opcode_token9] = ACTIONS(141),
    [aux_sym__immediate_opcode_token10] = ACTIONS(141),
    [aux_sym__immediate_opcode_token11] = ACTIONS(141),
    [aux_sym__immediate_opcode_token12] = ACTIONS(141),
    [aux_sym__absolute_opcode_token1] = ACTIONS(141),
    [aux_sym__absolute_opcode_token2] = ACTIONS(141),
    [aux_sym__absolute_opcode_token3] = ACTIONS(141),
    [aux_sym__absolute_opcode_token4] = ACTIONS(141),
    [aux_sym__absolute_opcode_token5] = ACTIONS(141),
    [aux_sym__absolute_opcode_token6] = ACTIONS(141),
    [aux_sym__absolute_opcode_token7] = ACTIONS(141),
    [aux_sym__absolute_opcode_token8] = ACTIONS(141),
    [sym_local_label] = ACTIONS(141),
    [sym_global_label] = ACTIONS(141),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(145),
    [aux_sym__ext_name_token1] = ACTIONS(145),
    [aux_sym__sec_name_token1] = ACTIONS(145),
    [aux_sym__word_name_token1] = ACTIONS(145),
    [aux_sym__byte_name_token1] = ACTIONS(145),
    [aux_sym__ascii_name_token1] = ACTIONS(145),
    [aux_sym__asciiz_name_token1] = ACTIONS(145),
    [aux_sym__implied_opcode_token1] = ACTIONS(145),
    [aux_sym__implied_opcode_token2] = ACTIONS(145),
    [aux_sym__implied_opcode_token3] = ACTIONS(145),
    [aux_sym__implied_opcode_token4] = ACTIONS(145),
    [aux_sym__implied_opcode_token5] = ACTIONS(145),
    [aux_sym__implied_opcode_token6] = ACTIONS(145),
    [aux_sym__implied_opcode_token7] = ACTIONS(145),
    [aux_sym__implied_opcode_token8] = ACTIONS(145),
    [aux_sym__implied_opcode_token9] = ACTIONS(145),
    [aux_sym__implied_opcode_token10] = ACTIONS(145),
    [aux_sym__implied_opcode_token11] = ACTIONS(145),
    [aux_sym__implied_opcode_token12] = ACTIONS(145),
    [aux_sym__implied_opcode_token13] = ACTIONS(145),
    [aux_sym__implied_opcode_token14] = ACTIONS(145),
    [aux_sym__implied_opcode_token15] = ACTIONS(145),
    [aux_sym__implied_opcode_token16] = ACTIONS(145),
    [aux_sym__implied_opcode_token17] = ACTIONS(145),
    [aux_sym__implied_opcode_token18] = ACTIONS(145),
    [aux_sym__implied_opcode_token19] = ACTIONS(145),
    [aux_sym__implied_opcode_token20] = ACTIONS(145),
    [aux_sym__implied_opcode_token21] = ACTIONS(145),
    [aux_sym__implied_opcode_token22] = ACTIONS(145),
    [aux_sym__implied_opcode_token23] = ACTIONS(145),
    [aux_sym__implied_opcode_token24] = ACTIONS(145),
    [aux_sym__implied_opcode_token25] = ACTIONS(145),
    [aux_sym__implied_opcode_token26] = ACTIONS(145),
    [aux_sym__implied_opcode_token27] = ACTIONS(145),
    [aux_sym__implied_opcode_token28] = ACTIONS(145),
    [aux_sym__implied_opcode_token29] = ACTIONS(145),
    [aux_sym__implied_opcode_token30] = ACTIONS(145),
    [aux_sym__implied_opcode_token31] = ACTIONS(145),
    [aux_sym__implied_opcode_token32] = ACTIONS(145),
    [aux_sym__implied_opcode_token33] = ACTIONS(145),
    [aux_sym__implied_opcode_token34] = ACTIONS(145),
    [aux_sym__implied_opcode_token35] = ACTIONS(145),
    [aux_sym__implied_opcode_token36] = ACTIONS(145),
    [aux_sym__implied_opcode_token37] = ACTIONS(145),
    [aux_sym__relative_opcode_token1] = ACTIONS(145),
    [aux_sym__relative_opcode_token2] = ACTIONS(145),
    [aux_sym__relative_opcode_token3] = ACTIONS(145),
    [aux_sym__relative_opcode_token4] = ACTIONS(145),
    [aux_sym__relative_opcode_token5] = ACTIONS(145),
    [aux_sym__relative_opcode_token6] = ACTIONS(145),
    [aux_sym__relative_opcode_token7] = ACTIONS(145),
    [aux_sym__relative_opcode_token8] = ACTIONS(145),
    [aux_sym__relative_opcode_token9] = ACTIONS(145),
    [aux_sym__immediate_opcode_token1] = ACTIONS(145),
    [aux_sym__immediate_opcode_token2] = ACTIONS(145),
    [aux_sym__immediate_opcode_token3] = ACTIONS(145),
    [aux_sym__immediate_opcode_token4] = ACTIONS(145),
    [aux_sym__immediate_opcode_token5] = ACTIONS(145),
    [aux_sym__immediate_opcode_token6] = ACTIONS(145),
    [aux_sym__immediate_opcode_token7] = ACTIONS(145),
    [aux_sym__immediate_opcode_token8] = ACTIONS(145),
    [aux_sym__immediate_opcode_token9] = ACTIONS(145),
    [aux_sym__immediate_opcode_token10] = ACTIONS(145),
    [aux_sym__immediate_opcode_token11] = ACTIONS(145),
    [aux_sym__immediate_opcode_token12] = ACTIONS(145),
    [aux_sym__absolute_opcode_token1] = ACTIONS(145),
    [aux_sym__absolute_opcode_token2] = ACTIONS(145),
    [aux_sym__absolute_opcode_token3] = ACTIONS(145),
    [aux_sym__absolute_opcode_token4] = ACTIONS(145),
    [aux_sym__absolute_opcode_token5] = ACTIONS(145),
    [aux_sym__absolute_opcode_token6] = ACTIONS(145),
    [aux_sym__absolute_opcode_token7] = ACTIONS(145),
    [aux_sym__absolute_opcode_token8] = ACTIONS(145),
    [sym_local_label] = ACTIONS(145),
    [sym_global_label] = ACTIONS(145),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(149),
    [aux_sym__ext_name_token1] = ACTIONS(149),
    [aux_sym__sec_name_token1] = ACTIONS(149),
    [aux_sym__word_name_token1] = ACTIONS(149),
    [aux_sym__byte_name_token1] = ACTIONS(149),
    [aux_sym__ascii_name_token1] = ACTIONS(149),
    [aux_sym__asciiz_name_token1] = ACTIONS(149),
    [aux_sym__implied_opcode_token1] = ACTIONS(149),
    [aux_sym__implied_opcode_token2] = ACTIONS(149),
    [aux_sym__implied_opcode_token3] = ACTIONS(149),
    [aux_sym__implied_opcode_token4] = ACTIONS(149),
    [aux_sym__implied_opcode_token5] = ACTIONS(149),
    [aux_sym__implied_opcode_token6] = ACTIONS(149),
    [aux_sym__implied_opcode_token7] = ACTIONS(149),
    [aux_sym__implied_opcode_token8] = ACTIONS(149),
    [aux_sym__implied_opcode_token9] = ACTIONS(149),
    [aux_sym__implied_opcode_token10] = ACTIONS(149),
    [aux_sym__implied_opcode_token11] = ACTIONS(149),
    [aux_sym__implied_opcode_token12] = ACTIONS(149),
    [aux_sym__implied_opcode_token13] = ACTIONS(149),
    [aux_sym__implied_opcode_token14] = ACTIONS(149),
    [aux_sym__implied_opcode_token15] = ACTIONS(149),
    [aux_sym__implied_opcode_token16] = ACTIONS(149),
    [aux_sym__implied_opcode_token17] = ACTIONS(149),
    [aux_sym__implied_opcode_token18] = ACTIONS(149),
    [aux_sym__implied_opcode_token19] = ACTIONS(149),
    [aux_sym__implied_opcode_token20] = ACTIONS(149),
    [aux_sym__implied_opcode_token21] = ACTIONS(149),
    [aux_sym__implied_opcode_token22] = ACTIONS(149),
    [aux_sym__implied_opcode_token23] = ACTIONS(149),
    [aux_sym__implied_opcode_token24] = ACTIONS(149),
    [aux_sym__implied_opcode_token25] = ACTIONS(149),
    [aux_sym__implied_opcode_token26] = ACTIONS(149),
    [aux_sym__implied_opcode_token27] = ACTIONS(149),
    [aux_sym__implied_opcode_token28] = ACTIONS(149),
    [aux_sym__implied_opcode_token29] = ACTIONS(149),
    [aux_sym__implied_opcode_token30] = ACTIONS(149),
    [aux_sym__implied_opcode_token31] = ACTIONS(149),
    [aux_sym__implied_opcode_token32] = ACTIONS(149),
    [aux_sym__implied_opcode_token33] = ACTIONS(149),
    [aux_sym__implied_opcode_token34] = ACTIONS(149),
    [aux_sym__implied_opcode_token35] = ACTIONS(149),
    [aux_sym__implied_opcode_token36] = ACTIONS(149),
    [aux_sym__implied_opcode_token37] = ACTIONS(149),
    [aux_sym__relative_opcode_token1] = ACTIONS(149),
    [aux_sym__relative_opcode_token2] = ACTIONS(149),
    [aux_sym__relative_opcode_token3] = ACTIONS(149),
    [aux_sym__relative_opcode_token4] = ACTIONS(149),
    [aux_sym__relative_opcode_token5] = ACTIONS(149),
    [aux_sym__relative_opcode_token6] = ACTIONS(149),
    [aux_sym__relative_opcode_token7] = ACTIONS(149),
    [aux_sym__relative_opcode_token8] = ACTIONS(149),
    [aux_sym__relative_opcode_token9] = ACTIONS(149),
    [aux_sym__immediate_opcode_token1] = ACTIONS(149),
    [aux_sym__immediate_opcode_token2] = ACTIONS(149),
    [aux_sym__immediate_opcode_token3] = ACTIONS(149),
    [aux_sym__immediate_opcode_token4] = ACTIONS(149),
    [aux_sym__immediate_opcode_token5] = ACTIONS(149),
    [aux_sym__immediate_opcode_token6] = ACTIONS(149),
    [aux_sym__immediate_opcode_token7] = ACTIONS(149),
    [aux_sym__immediate_opcode_token8] = ACTIONS(149),
    [aux_sym__immediate_opcode_token9] = ACTIONS(149),
    [aux_sym__immediate_opcode_token10] = ACTIONS(149),
    [aux_sym__immediate_opcode_token11] = ACTIONS(149),
    [aux_sym__immediate_opcode_token12] = ACTIONS(149),
    [aux_sym__absolute_opcode_token1] = ACTIONS(149),
    [aux_sym__absolute_opcode_token2] = ACTIONS(149),
    [aux_sym__absolute_opcode_token3] = ACTIONS(149),
    [aux_sym__absolute_opcode_token4] = ACTIONS(149),
    [aux_sym__absolute_opcode_token5] = ACTIONS(149),
    [aux_sym__absolute_opcode_token6] = ACTIONS(149),
    [aux_sym__absolute_opcode_token7] = ACTIONS(149),
    [aux_sym__absolute_opcode_token8] = ACTIONS(149),
    [sym_local_label] = ACTIONS(149),
    [sym_global_label] = ACTIONS(149),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(153),
    [aux_sym__ext_name_token1] = ACTIONS(153),
    [aux_sym__sec_name_token1] = ACTIONS(153),
    [aux_sym__word_name_token1] = ACTIONS(153),
    [aux_sym__byte_name_token1] = ACTIONS(153),
    [aux_sym__ascii_name_token1] = ACTIONS(153),
    [aux_sym__asciiz_name_token1] = ACTIONS(153),
    [aux_sym__implied_opcode_token1] = ACTIONS(153),
    [aux_sym__implied_opcode_token2] = ACTIONS(153),
    [aux_sym__implied_opcode_token3] = ACTIONS(153),
    [aux_sym__implied_opcode_token4] = ACTIONS(153),
    [aux_sym__implied_opcode_token5] = ACTIONS(153),
    [aux_sym__implied_opcode_token6] = ACTIONS(153),
    [aux_sym__implied_opcode_token7] = ACTIONS(153),
    [aux_sym__implied_opcode_token8] = ACTIONS(153),
    [aux_sym__implied_opcode_token9] = ACTIONS(153),
    [aux_sym__implied_opcode_token10] = ACTIONS(153),
    [aux_sym__implied_opcode_token11] = ACTIONS(153),
    [aux_sym__implied_opcode_token12] = ACTIONS(153),
    [aux_sym__implied_opcode_token13] = ACTIONS(153),
    [aux_sym__implied_opcode_token14] = ACTIONS(153),
    [aux_sym__implied_opcode_token15] = ACTIONS(153),
    [aux_sym__implied_opcode_token16] = ACTIONS(153),
    [aux_sym__implied_opcode_token17] = ACTIONS(153),
    [aux_sym__implied_opcode_token18] = ACTIONS(153),
    [aux_sym__implied_opcode_token19] = ACTIONS(153),
    [aux_sym__implied_opcode_token20] = ACTIONS(153),
    [aux_sym__implied_opcode_token21] = ACTIONS(153),
    [aux_sym__implied_opcode_token22] = ACTIONS(153),
    [aux_sym__implied_opcode_token23] = ACTIONS(153),
    [aux_sym__implied_opcode_token24] = ACTIONS(153),
    [aux_sym__implied_opcode_token25] = ACTIONS(153),
    [aux_sym__implied_opcode_token26] = ACTIONS(153),
    [aux_sym__implied_opcode_token27] = ACTIONS(153),
    [aux_sym__implied_opcode_token28] = ACTIONS(153),
    [aux_sym__implied_opcode_token29] = ACTIONS(153),
    [aux_sym__implied_opcode_token30] = ACTIONS(153),
    [aux_sym__implied_opcode_token31] = ACTIONS(153),
    [aux_sym__implied_opcode_token32] = ACTIONS(153),
    [aux_sym__implied_opcode_token33] = ACTIONS(153),
    [aux_sym__implied_opcode_token34] = ACTIONS(153),
    [aux_sym__implied_opcode_token35] = ACTIONS(153),
    [aux_sym__implied_opcode_token36] = ACTIONS(153),
    [aux_sym__implied_opcode_token37] = ACTIONS(153),
    [aux_sym__relative_opcode_token1] = ACTIONS(153),
    [aux_sym__relative_opcode_token2] = ACTIONS(153),
    [aux_sym__relative_opcode_token3] = ACTIONS(153),
    [aux_sym__relative_opcode_token4] = ACTIONS(153),
    [aux_sym__relative_opcode_token5] = ACTIONS(153),
    [aux_sym__relative_opcode_token6] = ACTIONS(153),
    [aux_sym__relative_opcode_token7] = ACTIONS(153),
    [aux_sym__relative_opcode_token8] = ACTIONS(153),
    [aux_sym__relative_opcode_token9] = ACTIONS(153),
    [aux_sym__immediate_opcode_token1] = ACTIONS(153),
    [aux_sym__immediate_opcode_token2] = ACTIONS(153),
    [aux_sym__immediate_opcode_token3] = ACTIONS(153),
    [aux_sym__immediate_opcode_token4] = ACTIONS(153),
    [aux_sym__immediate_opcode_token5] = ACTIONS(153),
    [aux_sym__immediate_opcode_token6] = ACTIONS(153),
    [aux_sym__immediate_opcode_token7] = ACTIONS(153),
    [aux_sym__immediate_opcode_token8] = ACTIONS(153),
    [aux_sym__immediate_opcode_token9] = ACTIONS(153),
    [aux_sym__immediate_opcode_token10] = ACTIONS(153),
    [aux_sym__immediate_opcode_token11] = ACTIONS(153),
    [aux_sym__immediate_opcode_token12] = ACTIONS(153),
    [aux_sym__absolute_opcode_token1] = ACTIONS(153),
    [aux_sym__absolute_opcode_token2] = ACTIONS(153),
    [aux_sym__absolute_opcode_token3] = ACTIONS(153),
    [aux_sym__absolute_opcode_token4] = ACTIONS(153),
    [aux_sym__absolute_opcode_token5] = ACTIONS(153),
    [aux_sym__absolute_opcode_token6] = ACTIONS(153),
    [aux_sym__absolute_opcode_token7] = ACTIONS(153),
    [aux_sym__absolute_opcode_token8] = ACTIONS(153),
    [sym_local_label] = ACTIONS(153),
    [sym_global_label] = ACTIONS(153),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(157),
    [aux_sym__ext_name_token1] = ACTIONS(157),
    [aux_sym__sec_name_token1] = ACTIONS(157),
    [aux_sym__word_name_token1] = ACTIONS(157),
    [aux_sym__byte_name_token1] = ACTIONS(157),
    [aux_sym__ascii_name_token1] = ACTIONS(157),
    [aux_sym__asciiz_name_token1] = ACTIONS(157),
    [aux_sym__implied_opcode_token1] = ACTIONS(157),
    [aux_sym__implied_opcode_token2] = ACTIONS(157),
    [aux_sym__implied_opcode_token3] = ACTIONS(157),
    [aux_sym__implied_opcode_token4] = ACTIONS(157),
    [aux_sym__implied_opcode_token5] = ACTIONS(157),
    [aux_sym__implied_opcode_token6] = ACTIONS(157),
    [aux_sym__implied_opcode_token7] = ACTIONS(157),
    [aux_sym__implied_opcode_token8] = ACTIONS(157),
    [aux_sym__implied_opcode_token9] = ACTIONS(157),
    [aux_sym__implied_opcode_token10] = ACTIONS(157),
    [aux_sym__implied_opcode_token11] = ACTIONS(157),
    [aux_sym__implied_opcode_token12] = ACTIONS(157),
    [aux_sym__implied_opcode_token13] = ACTIONS(157),
    [aux_sym__implied_opcode_token14] = ACTIONS(157),
    [aux_sym__implied_opcode_token15] = ACTIONS(157),
    [aux_sym__implied_opcode_token16] = ACTIONS(157),
    [aux_sym__implied_opcode_token17] = ACTIONS(157),
    [aux_sym__implied_opcode_token18] = ACTIONS(157),
    [aux_sym__implied_opcode_token19] = ACTIONS(157),
    [aux_sym__implied_opcode_token20] = ACTIONS(157),
    [aux_sym__implied_opcode_token21] = ACTIONS(157),
    [aux_sym__implied_opcode_token22] = ACTIONS(157),
    [aux_sym__implied_opcode_token23] = ACTIONS(157),
    [aux_sym__implied_opcode_token24] = ACTIONS(157),
    [aux_sym__implied_opcode_token25] = ACTIONS(157),
    [aux_sym__implied_opcode_token26] = ACTIONS(157),
    [aux_sym__implied_opcode_token27] = ACTIONS(157),
    [aux_sym__implied_opcode_token28] = ACTIONS(157),
    [aux_sym__implied_opcode_token29] = ACTIONS(157),
    [aux_sym__implied_opcode_token30] = ACTIONS(157),
    [aux_sym__implied_opcode_token31] = ACTIONS(157),
    [aux_sym__implied_opcode_token32] = ACTIONS(157),
    [aux_sym__implied_opcode_token33] = ACTIONS(157),
    [aux_sym__implied_opcode_token34] = ACTIONS(157),
    [aux_sym__implied_opcode_token35] = ACTIONS(157),
    [aux_sym__implied_opcode_token36] = ACTIONS(157),
    [aux_sym__implied_opcode_token37] = ACTIONS(157),
    [aux_sym__relative_opcode_token1] = ACTIONS(157),
    [aux_sym__relative_opcode_token2] = ACTIONS(157),
    [aux_sym__relative_opcode_token3] = ACTIONS(157),
    [aux_sym__relative_opcode_token4] = ACTIONS(157),
    [aux_sym__relative_opcode_token5] = ACTIONS(157),
    [aux_sym__relative_opcode_token6] = ACTIONS(157),
    [aux_sym__relative_opcode_token7] = ACTIONS(157),
    [aux_sym__relative_opcode_token8] = ACTIONS(157),
    [aux_sym__relative_opcode_token9] = ACTIONS(157),
    [aux_sym__immediate_opcode_token1] = ACTIONS(157),
    [aux_sym__immediate_opcode_token2] = ACTIONS(157),
    [aux_sym__immediate_opcode_token3] = ACTIONS(157),
    [aux_sym__immediate_opcode_token4] = ACTIONS(157),
    [aux_sym__immediate_opcode_token5] = ACTIONS(157),
    [aux_sym__immediate_opcode_token6] = ACTIONS(157),
    [aux_sym__immediate_opcode_token7] = ACTIONS(157),
    [aux_sym__immediate_opcode_token8] = ACTIONS(157),
    [aux_sym__immediate_opcode_token9] = ACTIONS(157),
    [aux_sym__immediate_opcode_token10] = ACTIONS(157),
    [aux_sym__immediate_opcode_token11] = ACTIONS(157),
    [aux_sym__immediate_opcode_token12] = ACTIONS(157),
    [aux_sym__absolute_opcode_token1] = ACTIONS(157),
    [aux_sym__absolute_opcode_token2] = ACTIONS(157),
    [aux_sym__absolute_opcode_token3] = ACTIONS(157),
    [aux_sym__absolute_opcode_token4] = ACTIONS(157),
    [aux_sym__absolute_opcode_token5] = ACTIONS(157),
    [aux_sym__absolute_opcode_token6] = ACTIONS(157),
    [aux_sym__absolute_opcode_token7] = ACTIONS(157),
    [aux_sym__absolute_opcode_token8] = ACTIONS(157),
    [sym_local_label] = ACTIONS(157),
    [sym_global_label] = ACTIONS(157),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(161),
    [aux_sym__ext_name_token1] = ACTIONS(161),
    [aux_sym__sec_name_token1] = ACTIONS(161),
    [aux_sym__word_name_token1] = ACTIONS(161),
    [aux_sym__byte_name_token1] = ACTIONS(161),
    [aux_sym__ascii_name_token1] = ACTIONS(161),
    [aux_sym__asciiz_name_token1] = ACTIONS(161),
    [aux_sym__implied_opcode_token1] = ACTIONS(161),
    [aux_sym__implied_opcode_token2] = ACTIONS(161),
    [aux_sym__implied_opcode_token3] = ACTIONS(161),
    [aux_sym__implied_opcode_token4] = ACTIONS(161),
    [aux_sym__implied_opcode_token5] = ACTIONS(161),
    [aux_sym__implied_opcode_token6] = ACTIONS(161),
    [aux_sym__implied_opcode_token7] = ACTIONS(161),
    [aux_sym__implied_opcode_token8] = ACTIONS(161),
    [aux_sym__implied_opcode_token9] = ACTIONS(161),
    [aux_sym__implied_opcode_token10] = ACTIONS(161),
    [aux_sym__implied_opcode_token11] = ACTIONS(161),
    [aux_sym__implied_opcode_token12] = ACTIONS(161),
    [aux_sym__implied_opcode_token13] = ACTIONS(161),
    [aux_sym__implied_opcode_token14] = ACTIONS(161),
    [aux_sym__implied_opcode_token15] = ACTIONS(161),
    [aux_sym__implied_opcode_token16] = ACTIONS(161),
    [aux_sym__implied_opcode_token17] = ACTIONS(161),
    [aux_sym__implied_opcode_token18] = ACTIONS(161),
    [aux_sym__implied_opcode_token19] = ACTIONS(161),
    [aux_sym__implied_opcode_token20] = ACTIONS(161),
    [aux_sym__implied_opcode_token21] = ACTIONS(161),
    [aux_sym__implied_opcode_token22] = ACTIONS(161),
    [aux_sym__implied_opcode_token23] = ACTIONS(161),
    [aux_sym__implied_opcode_token24] = ACTIONS(161),
    [aux_sym__implied_opcode_token25] = ACTIONS(161),
    [aux_sym__implied_opcode_token26] = ACTIONS(161),
    [aux_sym__implied_opcode_token27] = ACTIONS(161),
    [aux_sym__implied_opcode_token28] = ACTIONS(161),
    [aux_sym__implied_opcode_token29] = ACTIONS(161),
    [aux_sym__implied_opcode_token30] = ACTIONS(161),
    [aux_sym__implied_opcode_token31] = ACTIONS(161),
    [aux_sym__implied_opcode_token32] = ACTIONS(161),
    [aux_sym__implied_opcode_token33] = ACTIONS(161),
    [aux_sym__implied_opcode_token34] = ACTIONS(161),
    [aux_sym__implied_opcode_token35] = ACTIONS(161),
    [aux_sym__implied_opcode_token36] = ACTIONS(161),
    [aux_sym__implied_opcode_token37] = ACTIONS(161),
    [aux_sym__relative_opcode_token1] = ACTIONS(161),
    [aux_sym__relative_opcode_token2] = ACTIONS(161),
    [aux_sym__relative_opcode_token3] = ACTIONS(161),
    [aux_sym__relative_opcode_token4] = ACTIONS(161),
    [aux_sym__relative_opcode_token5] = ACTIONS(161),
    [aux_sym__relative_opcode_token6] = ACTIONS(161),
    [aux_sym__relative_opcode_token7] = ACTIONS(161),
    [aux_sym__relative_opcode_token8] = ACTIONS(161),
    [aux_sym__relative_opcode_token9] = ACTIONS(161),
    [aux_sym__immediate_opcode_token1] = ACTIONS(161),
    [aux_sym__immediate_opcode_token2] = ACTIONS(161),
    [aux_sym__immediate_opcode_token3] = ACTIONS(161),
    [aux_sym__immediate_opcode_token4] = ACTIONS(161),
    [aux_sym__immediate_opcode_token5] = ACTIONS(161),
    [aux_sym__immediate_opcode_token6] = ACTIONS(161),
    [aux_sym__immediate_opcode_token7] = ACTIONS(161),
    [aux_sym__immediate_opcode_token8] = ACTIONS(161),
    [aux_sym__immediate_opcode_token9] = ACTIONS(161),
    [aux_sym__immediate_opcode_token10] = ACTIONS(161),
    [aux_sym__immediate_opcode_token11] = ACTIONS(161),
    [aux_sym__immediate_opcode_token12] = ACTIONS(161),
    [aux_sym__absolute_opcode_token1] = ACTIONS(161),
    [aux_sym__absolute_opcode_token2] = ACTIONS(161),
    [aux_sym__absolute_opcode_token3] = ACTIONS(161),
    [aux_sym__absolute_opcode_token4] = ACTIONS(161),
    [aux_sym__absolute_opcode_token5] = ACTIONS(161),
    [aux_sym__absolute_opcode_token6] = ACTIONS(161),
    [aux_sym__absolute_opcode_token7] = ACTIONS(161),
    [aux_sym__absolute_opcode_token8] = ACTIONS(161),
    [sym_local_label] = ACTIONS(161),
    [sym_global_label] = ACTIONS(161),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(165),
    [aux_sym__ext_name_token1] = ACTIONS(165),
    [aux_sym__sec_name_token1] = ACTIONS(165),
    [aux_sym__word_name_token1] = ACTIONS(165),
    [aux_sym__byte_name_token1] = ACTIONS(165),
    [aux_sym__ascii_name_token1] = ACTIONS(165),
    [aux_sym__asciiz_name_token1] = ACTIONS(165),
    [aux_sym__implied_opcode_token1] = ACTIONS(165),
    [aux_sym__implied_opcode_token2] = ACTIONS(165),
    [aux_sym__implied_opcode_token3] = ACTIONS(165),
    [aux_sym__implied_opcode_token4] = ACTIONS(165),
    [aux_sym__implied_opcode_token5] = ACTIONS(165),
    [aux_sym__implied_opcode_token6] = ACTIONS(165),
    [aux_sym__implied_opcode_token7] = ACTIONS(165),
    [aux_sym__implied_opcode_token8] = ACTIONS(165),
    [aux_sym__implied_opcode_token9] = ACTIONS(165),
    [aux_sym__implied_opcode_token10] = ACTIONS(165),
    [aux_sym__implied_opcode_token11] = ACTIONS(165),
    [aux_sym__implied_opcode_token12] = ACTIONS(165),
    [aux_sym__implied_opcode_token13] = ACTIONS(165),
    [aux_sym__implied_opcode_token14] = ACTIONS(165),
    [aux_sym__implied_opcode_token15] = ACTIONS(165),
    [aux_sym__implied_opcode_token16] = ACTIONS(165),
    [aux_sym__implied_opcode_token17] = ACTIONS(165),
    [aux_sym__implied_opcode_token18] = ACTIONS(165),
    [aux_sym__implied_opcode_token19] = ACTIONS(165),
    [aux_sym__implied_opcode_token20] = ACTIONS(165),
    [aux_sym__implied_opcode_token21] = ACTIONS(165),
    [aux_sym__implied_opcode_token22] = ACTIONS(165),
    [aux_sym__implied_opcode_token23] = ACTIONS(165),
    [aux_sym__implied_opcode_token24] = ACTIONS(165),
    [aux_sym__implied_opcode_token25] = ACTIONS(165),
    [aux_sym__implied_opcode_token26] = ACTIONS(165),
    [aux_sym__implied_opcode_token27] = ACTIONS(165),
    [aux_sym__implied_opcode_token28] = ACTIONS(165),
    [aux_sym__implied_opcode_token29] = ACTIONS(165),
    [aux_sym__implied_opcode_token30] = ACTIONS(165),
    [aux_sym__implied_opcode_token31] = ACTIONS(165),
    [aux_sym__implied_opcode_token32] = ACTIONS(165),
    [aux_sym__implied_opcode_token33] = ACTIONS(165),
    [aux_sym__implied_opcode_token34] = ACTIONS(165),
    [aux_sym__implied_opcode_token35] = ACTIONS(165),
    [aux_sym__implied_opcode_token36] = ACTIONS(165),
    [aux_sym__implied_opcode_token37] = ACTIONS(165),
    [aux_sym__relative_opcode_token1] = ACTIONS(165),
    [aux_sym__relative_opcode_token2] = ACTIONS(165),
    [aux_sym__relative_opcode_token3] = ACTIONS(165),
    [aux_sym__relative_opcode_token4] = ACTIONS(165),
    [aux_sym__relative_opcode_token5] = ACTIONS(165),
    [aux_sym__relative_opcode_token6] = ACTIONS(165),
    [aux_sym__relative_opcode_token7] = ACTIONS(165),
    [aux_sym__relative_opcode_token8] = ACTIONS(165),
    [aux_sym__relative_opcode_token9] = ACTIONS(165),
    [aux_sym__immediate_opcode_token1] = ACTIONS(165),
    [aux_sym__immediate_opcode_token2] = ACTIONS(165),
    [aux_sym__immediate_opcode_token3] = ACTIONS(165),
    [aux_sym__immediate_opcode_token4] = ACTIONS(165),
    [aux_sym__immediate_opcode_token5] = ACTIONS(165),
    [aux_sym__immediate_opcode_token6] = ACTIONS(165),
    [aux_sym__immediate_opcode_token7] = ACTIONS(165),
    [aux_sym__immediate_opcode_token8] = ACTIONS(165),
    [aux_sym__immediate_opcode_token9] = ACTIONS(165),
    [aux_sym__immediate_opcode_token10] = ACTIONS(165),
    [aux_sym__immediate_opcode_token11] = ACTIONS(165),
    [aux_sym__immediate_opcode_token12] = ACTIONS(165),
    [aux_sym__absolute_opcode_token1] = ACTIONS(165),
    [aux_sym__absolute_opcode_token2] = ACTIONS(165),
    [aux_sym__absolute_opcode_token3] = ACTIONS(165),
    [aux_sym__absolute_opcode_token4] = ACTIONS(165),
    [aux_sym__absolute_opcode_token5] = ACTIONS(165),
    [aux_sym__absolute_opcode_token6] = ACTIONS(165),
    [aux_sym__absolute_opcode_token7] = ACTIONS(165),
    [aux_sym__absolute_opcode_token8] = ACTIONS(165),
    [sym_local_label] = ACTIONS(165),
    [sym_global_label] = ACTIONS(165),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(169),
    [aux_sym__ext_name_token1] = ACTIONS(169),
    [aux_sym__sec_name_token1] = ACTIONS(169),
    [aux_sym__word_name_token1] = ACTIONS(169),
    [aux_sym__byte_name_token1] = ACTIONS(169),
    [aux_sym__ascii_name_token1] = ACTIONS(169),
    [aux_sym__asciiz_name_token1] = ACTIONS(169),
    [aux_sym__implied_opcode_token1] = ACTIONS(169),
    [aux_sym__implied_opcode_token2] = ACTIONS(169),
    [aux_sym__implied_opcode_token3] = ACTIONS(169),
    [aux_sym__implied_opcode_token4] = ACTIONS(169),
    [aux_sym__implied_opcode_token5] = ACTIONS(169),
    [aux_sym__implied_opcode_token6] = ACTIONS(169),
    [aux_sym__implied_opcode_token7] = ACTIONS(169),
    [aux_sym__implied_opcode_token8] = ACTIONS(169),
    [aux_sym__implied_opcode_token9] = ACTIONS(169),
    [aux_sym__implied_opcode_token10] = ACTIONS(169),
    [aux_sym__implied_opcode_token11] = ACTIONS(169),
    [aux_sym__implied_opcode_token12] = ACTIONS(169),
    [aux_sym__implied_opcode_token13] = ACTIONS(169),
    [aux_sym__implied_opcode_token14] = ACTIONS(169),
    [aux_sym__implied_opcode_token15] = ACTIONS(169),
    [aux_sym__implied_opcode_token16] = ACTIONS(169),
    [aux_sym__implied_opcode_token17] = ACTIONS(169),
    [aux_sym__implied_opcode_token18] = ACTIONS(169),
    [aux_sym__implied_opcode_token19] = ACTIONS(169),
    [aux_sym__implied_opcode_token20] = ACTIONS(169),
    [aux_sym__implied_opcode_token21] = ACTIONS(169),
    [aux_sym__implied_opcode_token22] = ACTIONS(169),
    [aux_sym__implied_opcode_token23] = ACTIONS(169),
    [aux_sym__implied_opcode_token24] = ACTIONS(169),
    [aux_sym__implied_opcode_token25] = ACTIONS(169),
    [aux_sym__implied_opcode_token26] = ACTIONS(169),
    [aux_sym__implied_opcode_token27] = ACTIONS(169),
    [aux_sym__implied_opcode_token28] = ACTIONS(169),
    [aux_sym__implied_opcode_token29] = ACTIONS(169),
    [aux_sym__implied_opcode_token30] = ACTIONS(169),
    [aux_sym__implied_opcode_token31] = ACTIONS(169),
    [aux_sym__implied_opcode_token32] = ACTIONS(169),
    [aux_sym__implied_opcode_token33] = ACTIONS(169),
    [aux_sym__implied_opcode_token34] = ACTIONS(169),
    [aux_sym__implied_opcode_token35] = ACTIONS(169),
    [aux_sym__implied_opcode_token36] = ACTIONS(169),
    [aux_sym__implied_opcode_token37] = ACTIONS(169),
    [aux_sym__relative_opcode_token1] = ACTIONS(169),
    [aux_sym__relative_opcode_token2] = ACTIONS(169),
    [aux_sym__relative_opcode_token3] = ACTIONS(169),
    [aux_sym__relative_opcode_token4] = ACTIONS(169),
    [aux_sym__relative_opcode_token5] = ACTIONS(169),
    [aux_sym__relative_opcode_token6] = ACTIONS(169),
    [aux_sym__relative_opcode_token7] = ACTIONS(169),
    [aux_sym__relative_opcode_token8] = ACTIONS(169),
    [aux_sym__relative_opcode_token9] = ACTIONS(169),
    [aux_sym__immediate_opcode_token1] = ACTIONS(169),
    [aux_sym__immediate_opcode_token2] = ACTIONS(169),
    [aux_sym__immediate_opcode_token3] = ACTIONS(169),
    [aux_sym__immediate_opcode_token4] = ACTIONS(169),
    [aux_sym__immediate_opcode_token5] = ACTIONS(169),
    [aux_sym__immediate_opcode_token6] = ACTIONS(169),
    [aux_sym__immediate_opcode_token7] = ACTIONS(169),
    [aux_sym__immediate_opcode_token8] = ACTIONS(169),
    [aux_sym__immediate_opcode_token9] = ACTIONS(169),
    [aux_sym__immediate_opcode_token10] = ACTIONS(169),
    [aux_sym__immediate_opcode_token11] = ACTIONS(169),
    [aux_sym__immediate_opcode_token12] = ACTIONS(169),
    [aux_sym__absolute_opcode_token1] = ACTIONS(169),
    [aux_sym__absolute_opcode_token2] = ACTIONS(169),
    [aux_sym__absolute_opcode_token3] = ACTIONS(169),
    [aux_sym__absolute_opcode_token4] = ACTIONS(169),
    [aux_sym__absolute_opcode_token5] = ACTIONS(169),
    [aux_sym__absolute_opcode_token6] = ACTIONS(169),
    [aux_sym__absolute_opcode_token7] = ACTIONS(169),
    [aux_sym__absolute_opcode_token8] = ACTIONS(169),
    [sym_local_label] = ACTIONS(169),
    [sym_global_label] = ACTIONS(169),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(173),
    [aux_sym__ext_name_token1] = ACTIONS(173),
    [aux_sym__sec_name_token1] = ACTIONS(173),
    [aux_sym__word_name_token1] = ACTIONS(173),
    [aux_sym__byte_name_token1] = ACTIONS(173),
    [aux_sym__ascii_name_token1] = ACTIONS(173),
    [aux_sym__asciiz_name_token1] = ACTIONS(173),
    [aux_sym__implied_opcode_token1] = ACTIONS(173),
    [aux_sym__implied_opcode_token2] = ACTIONS(173),
    [aux_sym__implied_opcode_token3] = ACTIONS(173),
    [aux_sym__implied_opcode_token4] = ACTIONS(173),
    [aux_sym__implied_opcode_token5] = ACTIONS(173),
    [aux_sym__implied_opcode_token6] = ACTIONS(173),
    [aux_sym__implied_opcode_token7] = ACTIONS(173),
    [aux_sym__implied_opcode_token8] = ACTIONS(173),
    [aux_sym__implied_opcode_token9] = ACTIONS(173),
    [aux_sym__implied_opcode_token10] = ACTIONS(173),
    [aux_sym__implied_opcode_token11] = ACTIONS(173),
    [aux_sym__implied_opcode_token12] = ACTIONS(173),
    [aux_sym__implied_opcode_token13] = ACTIONS(173),
    [aux_sym__implied_opcode_token14] = ACTIONS(173),
    [aux_sym__implied_opcode_token15] = ACTIONS(173),
    [aux_sym__implied_opcode_token16] = ACTIONS(173),
    [aux_sym__implied_opcode_token17] = ACTIONS(173),
    [aux_sym__implied_opcode_token18] = ACTIONS(173),
    [aux_sym__implied_opcode_token19] = ACTIONS(173),
    [aux_sym__implied_opcode_token20] = ACTIONS(173),
    [aux_sym__implied_opcode_token21] = ACTIONS(173),
    [aux_sym__implied_opcode_token22] = ACTIONS(173),
    [aux_sym__implied_opcode_token23] = ACTIONS(173),
    [aux_sym__implied_opcode_token24] = ACTIONS(173),
    [aux_sym__implied_opcode_token25] = ACTIONS(173),
    [aux_sym__implied_opcode_token26] = ACTIONS(173),
    [aux_sym__implied_opcode_token27] = ACTIONS(173),
    [aux_sym__implied_opcode_token28] = ACTIONS(173),
    [aux_sym__implied_opcode_token29] = ACTIONS(173),
    [aux_sym__implied_opcode_token30] = ACTIONS(173),
    [aux_sym__implied_opcode_token31] = ACTIONS(173),
    [aux_sym__implied_opcode_token32] = ACTIONS(173),
    [aux_sym__implied_opcode_token33] = ACTIONS(173),
    [aux_sym__implied_opcode_token34] = ACTIONS(173),
    [aux_sym__implied_opcode_token35] = ACTIONS(173),
    [aux_sym__implied_opcode_token36] = ACTIONS(173),
    [aux_sym__implied_opcode_token37] = ACTIONS(173),
    [aux_sym__relative_opcode_token1] = ACTIONS(173),
    [aux_sym__relative_opcode_token2] = ACTIONS(173),
    [aux_sym__relative_opcode_token3] = ACTIONS(173),
    [aux_sym__relative_opcode_token4] = ACTIONS(173),
    [aux_sym__relative_opcode_token5] = ACTIONS(173),
    [aux_sym__relative_opcode_token6] = ACTIONS(173),
    [aux_sym__relative_opcode_token7] = ACTIONS(173),
    [aux_sym__relative_opcode_token8] = ACTIONS(173),
    [aux_sym__relative_opcode_token9] = ACTIONS(173),
    [aux_sym__immediate_opcode_token1] = ACTIONS(173),
    [aux_sym__immediate_opcode_token2] = ACTIONS(173),
    [aux_sym__immediate_opcode_token3] = ACTIONS(173),
    [aux_sym__immediate_opcode_token4] = ACTIONS(173),
    [aux_sym__immediate_opcode_token5] = ACTIONS(173),
    [aux_sym__immediate_opcode_token6] = ACTIONS(173),
    [aux_sym__immediate_opcode_token7] = ACTIONS(173),
    [aux_sym__immediate_opcode_token8] = ACTIONS(173),
    [aux_sym__immediate_opcode_token9] = ACTIONS(173),
    [aux_sym__immediate_opcode_token10] = ACTIONS(173),
    [aux_sym__immediate_opcode_token11] = ACTIONS(173),
    [aux_sym__immediate_opcode_token12] = ACTIONS(173),
    [aux_sym__absolute_opcode_token1] = ACTIONS(173),
    [aux_sym__absolute_opcode_token2] = ACTIONS(173),
    [aux_sym__absolute_opcode_token3] = ACTIONS(173),
    [aux_sym__absolute_opcode_token4] = ACTIONS(173),
    [aux_sym__absolute_opcode_token5] = ACTIONS(173),
    [aux_sym__absolute_opcode_token6] = ACTIONS(173),
    [aux_sym__absolute_opcode_token7] = ACTIONS(173),
    [aux_sym__absolute_opcode_token8] = ACTIONS(173),
    [sym_local_label] = ACTIONS(173),
    [sym_global_label] = ACTIONS(173),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [aux_sym__inc_name_token1] = ACTIONS(177),
    [aux_sym__ext_name_token1] = ACTIONS(177),
    [aux_sym__sec_name_token1] = ACTIONS(177),
    [aux_sym__word_name_token1] = ACTIONS(177),
    [aux_sym__byte_name_token1] = ACTIONS(177),
    [aux_sym__ascii_name_token1] = ACTIONS(177),
    [aux_sym__asciiz_name_token1] = ACTIONS(177),
    [aux_sym__implied_opcode_token1] = ACTIONS(177),
    [aux_sym__implied_opcode_token2] = ACTIONS(177),
    [aux_sym__implied_opcode_token3] = ACTIONS(177),
    [aux_sym__implied_opcode_token4] = ACTIONS(177),
    [aux_sym__implied_opcode_token5] = ACTIONS(177),
    [aux_sym__implied_opcode_token6] = ACTIONS(177),
    [aux_sym__implied_opcode_token7] = ACTIONS(177),
    [aux_sym__implied_opcode_token8] = ACTIONS(177),
    [aux_sym__implied_opcode_token9] = ACTIONS(177),
    [aux_sym__implied_opcode_token10] = ACTIONS(177),
    [aux_sym__implied_opcode_token11] = ACTIONS(177),
    [aux_sym__implied_opcode_token12] = ACTIONS(177),
    [aux_sym__implied_opcode_token13] = ACTIONS(177),
    [aux_sym__implied_opcode_token14] = ACTIONS(177),
    [aux_sym__implied_opcode_token15] = ACTIONS(177),
    [aux_sym__implied_opcode_token16] = ACTIONS(177),
    [aux_sym__implied_opcode_token17] = ACTIONS(177),
    [aux_sym__implied_opcode_token18] = ACTIONS(177),
    [aux_sym__implied_opcode_token19] = ACTIONS(177),
    [aux_sym__implied_opcode_token20] = ACTIONS(177),
    [aux_sym__implied_opcode_token21] = ACTIONS(177),
    [aux_sym__implied_opcode_token22] = ACTIONS(177),
    [aux_sym__implied_opcode_token23] = ACTIONS(177),
    [aux_sym__implied_opcode_token24] = ACTIONS(177),
    [aux_sym__implied_opcode_token25] = ACTIONS(177),
    [aux_sym__implied_opcode_token26] = ACTIONS(177),
    [aux_sym__implied_opcode_token27] = ACTIONS(177),
    [aux_sym__implied_opcode_token28] = ACTIONS(177),
    [aux_sym__implied_opcode_token29] = ACTIONS(177),
    [aux_sym__implied_opcode_token30] = ACTIONS(177),
    [aux_sym__implied_opcode_token31] = ACTIONS(177),
    [aux_sym__implied_opcode_token32] = ACTIONS(177),
    [aux_sym__implied_opcode_token33] = ACTIONS(177),
    [aux_sym__implied_opcode_token34] = ACTIONS(177),
    [aux_sym__implied_opcode_token35] = ACTIONS(177),
    [aux_sym__implied_opcode_token36] = ACTIONS(177),
    [aux_sym__implied_opcode_token37] = ACTIONS(177),
    [aux_sym__relative_opcode_token1] = ACTIONS(177),
    [aux_sym__relative_opcode_token2] = ACTIONS(177),
    [aux_sym__relative_opcode_token3] = ACTIONS(177),
    [aux_sym__relative_opcode_token4] = ACTIONS(177),
    [aux_sym__relative_opcode_token5] = ACTIONS(177),
    [aux_sym__relative_opcode_token6] = ACTIONS(177),
    [aux_sym__relative_opcode_token7] = ACTIONS(177),
    [aux_sym__relative_opcode_token8] = ACTIONS(177),
    [aux_sym__relative_opcode_token9] = ACTIONS(177),
    [aux_sym__immediate_opcode_token1] = ACTIONS(177),
    [aux_sym__immediate_opcode_token2] = ACTIONS(177),
    [aux_sym__immediate_opcode_token3] = ACTIONS(177),
    [aux_sym__immediate_opcode_token4] = ACTIONS(177),
    [aux_sym__immediate_opcode_token5] = ACTIONS(177),
    [aux_sym__immediate_opcode_token6] = ACTIONS(177),
    [aux_sym__immediate_opcode_token7] = ACTIONS(177),
    [aux_sym__immediate_opcode_token8] = ACTIONS(177),
    [aux_sym__immediate_opcode_token9] = ACTIONS(177),
    [aux_sym__immediate_opcode_token10] = ACTIONS(177),
    [aux_sym__immediate_opcode_token11] = ACTIONS(177),
    [aux_sym__immediate_opcode_token12] = ACTIONS(177),
    [aux_sym__absolute_opcode_token1] = ACTIONS(177),
    [aux_sym__absolute_opcode_token2] = ACTIONS(177),
    [aux_sym__absolute_opcode_token3] = ACTIONS(177),
    [aux_sym__absolute_opcode_token4] = ACTIONS(177),
    [aux_sym__absolute_opcode_token5] = ACTIONS(177),
    [aux_sym__absolute_opcode_token6] = ACTIONS(177),
    [aux_sym__absolute_opcode_token7] = ACTIONS(177),
    [aux_sym__absolute_opcode_token8] = ACTIONS(177),
    [sym_local_label] = ACTIONS(177),
    [sym_global_label] = ACTIONS(177),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      sym__reg_x,
    ACTIONS(85), 8,
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
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(185), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(11), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(189), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(35), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [65] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(191), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(6), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [86] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(193), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(10), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(195), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(4), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(197), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(9), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(199), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(8), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(203), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(27), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_unary_expr_token1,
    ACTIONS(205), 3,
      sym_num_literal,
      sym_local_label,
      sym_global_label,
    STATE(5), 4,
      sym__expr,
      sym__identifier,
      sym_binary_expr,
      sym_unary_expr,
  [229] = 4,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_string_repeat1,
    ACTIONS(209), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [244] = 4,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_string_repeat1,
    ACTIONS(214), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [259] = 4,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(218), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_string,
  [284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_x,
    ACTIONS(228), 1,
      anon_sym_y,
  [304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      aux_sym_file_directive_token1,
      aux_sym_file_directive_token2,
  [312] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__ws_sep,
  [319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_POUND,
  [333] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__ws_sep,
  [340] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__ws_sep,
  [347] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__ws_sep,
  [354] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym__ws_sep,
  [361] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__ws_sep,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_global_label,
  [375] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__ws_sep,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_section_directive_token1,
  [389] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym__ws_sep,
  [396] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__ws_sep,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN2,
  [417] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym__ws_sep,
  [424] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__ws_sep,
  [431] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__ws_sep,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_x,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_y,
  [459] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__ws_sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 23,
  [SMALL_STATE(29)] = 44,
  [SMALL_STATE(30)] = 65,
  [SMALL_STATE(31)] = 86,
  [SMALL_STATE(32)] = 107,
  [SMALL_STATE(33)] = 128,
  [SMALL_STATE(34)] = 149,
  [SMALL_STATE(35)] = 170,
  [SMALL_STATE(36)] = 187,
  [SMALL_STATE(37)] = 208,
  [SMALL_STATE(38)] = 229,
  [SMALL_STATE(39)] = 244,
  [SMALL_STATE(40)] = 259,
  [SMALL_STATE(41)] = 274,
  [SMALL_STATE(42)] = 284,
  [SMALL_STATE(43)] = 294,
  [SMALL_STATE(44)] = 304,
  [SMALL_STATE(45)] = 312,
  [SMALL_STATE(46)] = 319,
  [SMALL_STATE(47)] = 326,
  [SMALL_STATE(48)] = 333,
  [SMALL_STATE(49)] = 340,
  [SMALL_STATE(50)] = 347,
  [SMALL_STATE(51)] = 354,
  [SMALL_STATE(52)] = 361,
  [SMALL_STATE(53)] = 368,
  [SMALL_STATE(54)] = 375,
  [SMALL_STATE(55)] = 382,
  [SMALL_STATE(56)] = 389,
  [SMALL_STATE(57)] = 396,
  [SMALL_STATE(58)] = 403,
  [SMALL_STATE(59)] = 410,
  [SMALL_STATE(60)] = 417,
  [SMALL_STATE(61)] = 424,
  [SMALL_STATE(62)] = 431,
  [SMALL_STATE(63)] = 438,
  [SMALL_STATE(64)] = 445,
  [SMALL_STATE(65)] = 452,
  [SMALL_STATE(66)] = 459,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 3, .dynamic_precedence = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_directive, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_directive, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 5, .dynamic_precedence = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_x, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_x, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implied_opcode, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_opcode, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implied_opcode, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .dynamic_precedence = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implied, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implied, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_directive, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_directive, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_y, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_y, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_directive, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_directive, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_directive, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_directive, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 6, .dynamic_precedence = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_opcode, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [268] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__immediate_opcode, 1), REDUCE(sym__absolute_opcode, 1), REDUCE(sym__indirect_opcode, 1),
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
