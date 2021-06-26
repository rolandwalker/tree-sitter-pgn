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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 35

enum {
  sym__empty_line = 1,
  sym_rest_of_line_comment_delimiter_open = 2,
  aux_sym_rest_of_line_comment_token1 = 3,
  sym_rest_of_line_comment_text = 4,
  sym_old_style_twic_section_comment = 5,
  sym_tagpair_delimiter_open = 6,
  sym_tagpair_delimiter_close = 7,
  sym_double_quote = 8,
  sym_tagpair_key = 9,
  aux_sym_tagpair_value_contents_token1 = 10,
  aux_sym_tagpair_value_contents_token2 = 11,
  sym_variation_delimiter_open = 12,
  sym_variation_delimiter_close = 13,
  sym_inline_comment_delimiter_open = 14,
  sym_inline_comment_delimiter_close = 15,
  sym_inline_comment_text = 16,
  sym_move_number = 17,
  sym__san_file = 18,
  sym__san_rank = 19,
  sym__san_promotable_piece = 20,
  sym__san_major_or_minor_piece = 21,
  sym__san_capture_symbol = 22,
  sym__san_promotion_symbol = 23,
  anon_sym_P = 24,
  anon_sym_ = 25,
  anon_sym_2 = 26,
  anon_sym_AT = 27,
  sym__san_move_castle = 28,
  sym__san_null_move = 29,
  sym_check_or_mate_condition = 30,
  sym_annotation = 31,
  anon_sym_1 = 32,
  anon_sym_DASH = 33,
  aux_sym_result_code_token1 = 34,
  anon_sym_3 = 35,
  aux_sym_result_code_token2 = 36,
  anon_sym_4 = 37,
  aux_sym_result_code_token3 = 38,
  anon_sym_5 = 39,
  aux_sym_result_code_token4 = 40,
  anon_sym_6 = 41,
  aux_sym_result_code_token5 = 42,
  anon_sym_O = 43,
  anon_sym_0 = 44,
  anon_sym_o = 45,
  anon_sym_SLASH = 46,
  aux_sym_result_code_token6 = 47,
  anon_sym_7 = 48,
  aux_sym_result_code_token7 = 49,
  anon_sym_22 = 50,
  anon_sym_8 = 51,
  aux_sym_result_code_token8 = 52,
  anon_sym_STAR = 53,
  aux_sym_result_code_token9 = 54,
  anon_sym_9 = 55,
  aux_sym_result_code_token10 = 56,
  anon_sym_10 = 57,
  aux_sym_result_code_token11 = 58,
  anon_sym_11 = 59,
  aux_sym_result_code_token12 = 60,
  sym_series_of_games = 61,
  sym_game = 62,
  sym_freestanding_comment = 63,
  sym_rest_of_line_comment = 64,
  sym_header = 65,
  sym_tagpair = 66,
  sym__tagpair_value = 67,
  sym_tagpair_value_contents = 68,
  sym_movetext = 69,
  sym_variation_movetext = 70,
  sym__movetext_element = 71,
  sym__variation_movetext_element = 72,
  sym_variation = 73,
  sym_inline_comment = 74,
  sym_san_move = 75,
  sym__san_move_piece = 76,
  sym__san_destination = 77,
  sym__san_promotion = 78,
  sym__san_move_pawn = 79,
  sym__san_drop_pawn = 80,
  sym__san_move_major_or_minor_piece = 81,
  sym__san_drop_major_or_minor_piece = 82,
  sym_result_code = 83,
  aux_sym_series_of_games_repeat1 = 84,
  aux_sym_freestanding_comment_repeat1 = 85,
  aux_sym_header_repeat1 = 86,
  aux_sym_tagpair_value_contents_repeat1 = 87,
  aux_sym_movetext_repeat1 = 88,
  aux_sym_variation_movetext_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__empty_line] = "_empty_line",
  [sym_rest_of_line_comment_delimiter_open] = "rest_of_line_comment_delimiter_open",
  [aux_sym_rest_of_line_comment_token1] = "rest_of_line_comment_token1",
  [sym_rest_of_line_comment_text] = "rest_of_line_comment_text",
  [sym_old_style_twic_section_comment] = "old_style_twic_section_comment",
  [sym_tagpair_delimiter_open] = "tagpair_delimiter_open",
  [sym_tagpair_delimiter_close] = "tagpair_delimiter_close",
  [sym_double_quote] = "double_quote",
  [sym_tagpair_key] = "tagpair_key",
  [aux_sym_tagpair_value_contents_token1] = "tagpair_value_contents_token1",
  [aux_sym_tagpair_value_contents_token2] = "tagpair_value_contents_token2",
  [sym_variation_delimiter_open] = "variation_delimiter_open",
  [sym_variation_delimiter_close] = "variation_delimiter_close",
  [sym_inline_comment_delimiter_open] = "inline_comment_delimiter_open",
  [sym_inline_comment_delimiter_close] = "inline_comment_delimiter_close",
  [sym_inline_comment_text] = "inline_comment_text",
  [sym_move_number] = "move_number",
  [sym__san_file] = "_san_file",
  [sym__san_rank] = "_san_rank",
  [sym__san_promotable_piece] = "_san_promotable_piece",
  [sym__san_major_or_minor_piece] = "_san_major_or_minor_piece",
  [sym__san_capture_symbol] = "_san_capture_symbol",
  [sym__san_promotion_symbol] = "_san_promotion_symbol",
  [anon_sym_P] = "P",
  [anon_sym_] = "♙",
  [anon_sym_2] = "♟︎",
  [anon_sym_AT] = "@",
  [sym__san_move_castle] = "_san_move_castle",
  [sym__san_null_move] = "_san_null_move",
  [sym_check_or_mate_condition] = "check_or_mate_condition",
  [sym_annotation] = "annotation",
  [anon_sym_1] = "1",
  [anon_sym_DASH] = "-",
  [aux_sym_result_code_token1] = "result_code_token1",
  [anon_sym_3] = "−",
  [aux_sym_result_code_token2] = "result_code_token2",
  [anon_sym_4] = "‐",
  [aux_sym_result_code_token3] = "result_code_token3",
  [anon_sym_5] = "–",
  [aux_sym_result_code_token4] = "result_code_token4",
  [anon_sym_6] = "—",
  [aux_sym_result_code_token5] = "result_code_token5",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [aux_sym_result_code_token6] = "result_code_token6",
  [anon_sym_7] = "∕",
  [aux_sym_result_code_token7] = "result_code_token7",
  [anon_sym_22] = "2",
  [anon_sym_8] = "½",
  [aux_sym_result_code_token8] = "result_code_token8",
  [anon_sym_STAR] = "*",
  [aux_sym_result_code_token9] = "result_code_token9",
  [anon_sym_9] = "∗",
  [aux_sym_result_code_token10] = "result_code_token10",
  [anon_sym_10] = "✱",
  [aux_sym_result_code_token11] = "result_code_token11",
  [anon_sym_11] = "⁎",
  [aux_sym_result_code_token12] = "result_code_token12",
  [sym_series_of_games] = "series_of_games",
  [sym_game] = "game",
  [sym_freestanding_comment] = "freestanding_comment",
  [sym_rest_of_line_comment] = "rest_of_line_comment",
  [sym_header] = "header",
  [sym_tagpair] = "tagpair",
  [sym__tagpair_value] = "_tagpair_value",
  [sym_tagpair_value_contents] = "tagpair_value_contents",
  [sym_movetext] = "movetext",
  [sym_variation_movetext] = "variation_movetext",
  [sym__movetext_element] = "_movetext_element",
  [sym__variation_movetext_element] = "_variation_movetext_element",
  [sym_variation] = "variation",
  [sym_inline_comment] = "inline_comment",
  [sym_san_move] = "san_move",
  [sym__san_move_piece] = "_san_move_piece",
  [sym__san_destination] = "_san_destination",
  [sym__san_promotion] = "_san_promotion",
  [sym__san_move_pawn] = "_san_move_pawn",
  [sym__san_drop_pawn] = "_san_drop_pawn",
  [sym__san_move_major_or_minor_piece] = "_san_move_major_or_minor_piece",
  [sym__san_drop_major_or_minor_piece] = "_san_drop_major_or_minor_piece",
  [sym_result_code] = "result_code",
  [aux_sym_series_of_games_repeat1] = "series_of_games_repeat1",
  [aux_sym_freestanding_comment_repeat1] = "freestanding_comment_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_tagpair_value_contents_repeat1] = "tagpair_value_contents_repeat1",
  [aux_sym_movetext_repeat1] = "movetext_repeat1",
  [aux_sym_variation_movetext_repeat1] = "variation_movetext_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__empty_line] = sym__empty_line,
  [sym_rest_of_line_comment_delimiter_open] = sym_rest_of_line_comment_delimiter_open,
  [aux_sym_rest_of_line_comment_token1] = aux_sym_rest_of_line_comment_token1,
  [sym_rest_of_line_comment_text] = sym_rest_of_line_comment_text,
  [sym_old_style_twic_section_comment] = sym_old_style_twic_section_comment,
  [sym_tagpair_delimiter_open] = sym_tagpair_delimiter_open,
  [sym_tagpair_delimiter_close] = sym_tagpair_delimiter_close,
  [sym_double_quote] = sym_double_quote,
  [sym_tagpair_key] = sym_tagpair_key,
  [aux_sym_tagpair_value_contents_token1] = aux_sym_tagpair_value_contents_token1,
  [aux_sym_tagpair_value_contents_token2] = aux_sym_tagpair_value_contents_token2,
  [sym_variation_delimiter_open] = sym_variation_delimiter_open,
  [sym_variation_delimiter_close] = sym_variation_delimiter_close,
  [sym_inline_comment_delimiter_open] = sym_inline_comment_delimiter_open,
  [sym_inline_comment_delimiter_close] = sym_inline_comment_delimiter_close,
  [sym_inline_comment_text] = sym_inline_comment_text,
  [sym_move_number] = sym_move_number,
  [sym__san_file] = sym__san_file,
  [sym__san_rank] = sym__san_rank,
  [sym__san_promotable_piece] = sym__san_promotable_piece,
  [sym__san_major_or_minor_piece] = sym__san_major_or_minor_piece,
  [sym__san_capture_symbol] = sym__san_capture_symbol,
  [sym__san_promotion_symbol] = sym__san_promotion_symbol,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_AT] = anon_sym_AT,
  [sym__san_move_castle] = sym__san_move_castle,
  [sym__san_null_move] = sym__san_null_move,
  [sym_check_or_mate_condition] = sym_check_or_mate_condition,
  [sym_annotation] = sym_annotation,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_result_code_token1] = aux_sym_result_code_token1,
  [anon_sym_3] = anon_sym_3,
  [aux_sym_result_code_token2] = aux_sym_result_code_token2,
  [anon_sym_4] = anon_sym_4,
  [aux_sym_result_code_token3] = aux_sym_result_code_token3,
  [anon_sym_5] = anon_sym_5,
  [aux_sym_result_code_token4] = aux_sym_result_code_token4,
  [anon_sym_6] = anon_sym_6,
  [aux_sym_result_code_token5] = aux_sym_result_code_token5,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_result_code_token6] = aux_sym_result_code_token6,
  [anon_sym_7] = anon_sym_7,
  [aux_sym_result_code_token7] = aux_sym_result_code_token7,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_8] = anon_sym_8,
  [aux_sym_result_code_token8] = aux_sym_result_code_token8,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_result_code_token9] = aux_sym_result_code_token9,
  [anon_sym_9] = anon_sym_9,
  [aux_sym_result_code_token10] = aux_sym_result_code_token10,
  [anon_sym_10] = anon_sym_10,
  [aux_sym_result_code_token11] = aux_sym_result_code_token11,
  [anon_sym_11] = anon_sym_11,
  [aux_sym_result_code_token12] = aux_sym_result_code_token12,
  [sym_series_of_games] = sym_series_of_games,
  [sym_game] = sym_game,
  [sym_freestanding_comment] = sym_freestanding_comment,
  [sym_rest_of_line_comment] = sym_rest_of_line_comment,
  [sym_header] = sym_header,
  [sym_tagpair] = sym_tagpair,
  [sym__tagpair_value] = sym__tagpair_value,
  [sym_tagpair_value_contents] = sym_tagpair_value_contents,
  [sym_movetext] = sym_movetext,
  [sym_variation_movetext] = sym_variation_movetext,
  [sym__movetext_element] = sym__movetext_element,
  [sym__variation_movetext_element] = sym__variation_movetext_element,
  [sym_variation] = sym_variation,
  [sym_inline_comment] = sym_inline_comment,
  [sym_san_move] = sym_san_move,
  [sym__san_move_piece] = sym__san_move_piece,
  [sym__san_destination] = sym__san_destination,
  [sym__san_promotion] = sym__san_promotion,
  [sym__san_move_pawn] = sym__san_move_pawn,
  [sym__san_drop_pawn] = sym__san_drop_pawn,
  [sym__san_move_major_or_minor_piece] = sym__san_move_major_or_minor_piece,
  [sym__san_drop_major_or_minor_piece] = sym__san_drop_major_or_minor_piece,
  [sym_result_code] = sym_result_code,
  [aux_sym_series_of_games_repeat1] = aux_sym_series_of_games_repeat1,
  [aux_sym_freestanding_comment_repeat1] = aux_sym_freestanding_comment_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_tagpair_value_contents_repeat1] = aux_sym_tagpair_value_contents_repeat1,
  [aux_sym_movetext_repeat1] = aux_sym_movetext_repeat1,
  [aux_sym_variation_movetext_repeat1] = aux_sym_variation_movetext_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [sym_rest_of_line_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rest_of_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rest_of_line_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_old_style_twic_section_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tagpair_value_contents_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_value_contents_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_variation_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_move_number] = {
    .visible = true,
    .named = true,
  },
  [sym__san_file] = {
    .visible = false,
    .named = true,
  },
  [sym__san_rank] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotable_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_capture_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotion_symbol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__san_move_castle] = {
    .visible = false,
    .named = true,
  },
  [sym__san_null_move] = {
    .visible = false,
    .named = true,
  },
  [sym_check_or_mate_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token12] = {
    .visible = false,
    .named = false,
  },
  [sym_series_of_games] = {
    .visible = true,
    .named = true,
  },
  [sym_game] = {
    .visible = true,
    .named = true,
  },
  [sym_freestanding_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair] = {
    .visible = true,
    .named = true,
  },
  [sym__tagpair_value] = {
    .visible = false,
    .named = true,
  },
  [sym_tagpair_value_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym__movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_san_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_move_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_destination] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotion] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym_result_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_series_of_games_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_freestanding_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_value_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variation_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_annotation = 1,
  field_comment = 2,
  field_comment_content = 3,
  field_comment_delimiter = 4,
  field_freestanding_comment = 5,
  field_game = 6,
  field_header = 7,
  field_move_number = 8,
  field_movetext = 9,
  field_result_code = 10,
  field_san_move = 11,
  field_tagpair = 12,
  field_tagpair_delimiter = 13,
  field_tagpair_key = 14,
  field_tagpair_value_contents = 15,
  field_tagpair_value_delimiter = 16,
  field_variation_annotation = 17,
  field_variation_comment = 18,
  field_variation_content = 19,
  field_variation_delimiter = 20,
  field_variation_move_number = 21,
  field_variation_san_move = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_annotation] = "annotation",
  [field_comment] = "comment",
  [field_comment_content] = "comment_content",
  [field_comment_delimiter] = "comment_delimiter",
  [field_freestanding_comment] = "freestanding_comment",
  [field_game] = "game",
  [field_header] = "header",
  [field_move_number] = "move_number",
  [field_movetext] = "movetext",
  [field_result_code] = "result_code",
  [field_san_move] = "san_move",
  [field_tagpair] = "tagpair",
  [field_tagpair_delimiter] = "tagpair_delimiter",
  [field_tagpair_key] = "tagpair_key",
  [field_tagpair_value_contents] = "tagpair_value_contents",
  [field_tagpair_value_delimiter] = "tagpair_value_delimiter",
  [field_variation_annotation] = "variation_annotation",
  [field_variation_comment] = "variation_comment",
  [field_variation_content] = "variation_content",
  [field_variation_delimiter] = "variation_delimiter",
  [field_variation_move_number] = "variation_move_number",
  [field_variation_san_move] = "variation_san_move",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 4},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 4},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 1},
  [23] = {.index = 39, .length = 1},
  [24] = {.index = 40, .length = 4},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 3},
  [27] = {.index = 48, .length = 8},
  [28] = {.index = 56, .length = 2},
  [29] = {.index = 58, .length = 5},
  [30] = {.index = 63, .length = 3},
  [31] = {.index = 66, .length = 3},
  [32] = {.index = 69, .length = 8},
  [33] = {.index = 77, .length = 3},
  [34] = {.index = 80, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_game, 0},
  [1] =
    {field_freestanding_comment, 0},
  [2] =
    {field_tagpair, 0},
  [3] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_game, 0, .inherited = true},
  [5] =
    {field_tagpair, 0, .inherited = true},
  [6] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [8] =
    {field_freestanding_comment, 0},
    {field_game, 1},
  [10] =
    {field_move_number, 0},
  [11] =
    {field_annotation, 0},
  [12] =
    {field_comment, 0},
  [13] =
    {field_header, 0},
    {field_movetext, 1},
  [15] =
    {field_annotation, 0, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_san_move, 0, .inherited = true},
  [19] =
    {field_san_move, 0},
  [20] =
    {field_header, 0},
    {field_result_code, 1},
  [22] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [25] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [29] =
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [31] =
    {field_header, 0},
    {field_movetext, 2},
  [33] =
    {field_header, 0},
    {field_result_code, 2},
  [35] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [37] =
    {field_variation_move_number, 0},
  [38] =
    {field_variation_annotation, 0},
  [39] =
    {field_variation_comment, 0},
  [40] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [44] =
    {field_variation_san_move, 0},
  [45] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [48] =
    {field_annotation, 0, .inherited = true},
    {field_annotation, 1, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_move_number, 1, .inherited = true},
    {field_san_move, 0, .inherited = true},
    {field_san_move, 1, .inherited = true},
  [56] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [58] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [63] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [66] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [69] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_annotation, 1, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_comment, 1, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_move_number, 1, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
    {field_variation_san_move, 1, .inherited = true},
  [77] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [80] =
    {field_tagpair_value_contents, 1},
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_annotation_character_set_1(int32_t c) {
  return (c < 8979
    ? (c < 8663
      ? (c < 8593
        ? (c < 8252
          ? c == 177
          : (c <= 8252 || (c >= 8263 && c <= 8265)))
        : (c <= 8594 || (c < 8660
          ? c == 8646
          : c <= 8660)))
      : (c <= 8663 || (c < 8804
        ? (c < 8723
          ? (c >= 8710 && c <= 8711)
          : (c <= 8723 || c == 8734))
        : (c <= 8804 || (c < 8869
          ? c == 8862
          : c <= 8869)))))
    : (c <= 8979 || (c < 9794
      ? (c < 9675
        ? (c < 9496
          ? c == 9492
          : (c <= 9496 || c == 9633))
        : (c <= 9675 || (c < 9727
          ? c == 9722
          : c <= 9727)))
      : (c <= 9794 || (c < 10752
        ? (c < 10218
          ? c == 10005
          : (c <= 10219 || c == 10227))
        : (c <= 10753 || (c < 11026
          ? (c >= 10865 && c <= 10866)
          : c <= 11027)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1270);
      if (lookahead == '"') ADVANCE(1286);
      if (lookahead == '#') ADVANCE(1337);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(723);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1340);
      if (lookahead == '-') ADVANCE(1363);
      if (lookahead == '/') ADVANCE(1386);
      if (lookahead == '0') ADVANCE(1380);
      if (lookahead == '1') ADVANCE(1359);
      if (lookahead == '2') ADVANCE(1390);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(1305);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1316);
      if (lookahead == '=') ADVANCE(1318);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1306);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1310);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1321);
      if (lookahead == '[') ADVANCE(1283);
      if (lookahead == '\\') ADVANCE(1262);
      if (lookahead == ']') ADVANCE(1285);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(1295);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8208) ADVANCE(1367);
      if (lookahead == 8211) ADVANCE(1369);
      if (lookahead == 8212) ADVANCE(1371);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8722) ADVANCE(1365);
      if (lookahead == 8725) ADVANCE(1388);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1268)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(748);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == 'D') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(311);
      if (lookahead == 'P') ADVANCE(317);
      if (lookahead == 'R') ADVANCE(235);
      if (lookahead == 'S') ADVANCE(294);
      if (lookahead == 'U') ADVANCE(353);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == 'q') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == 'x') ADVANCE(345);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'h') ADVANCE(433);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'q') ADVANCE(427);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(432);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(311);
      if (lookahead == 'P') ADVANCE(317);
      if (lookahead == 'R') ADVANCE(235);
      if (lookahead == 'S') ADVANCE(294);
      if (lookahead == 'U') ADVANCE(353);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead == 'q') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == 'x') ADVANCE(345);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(434);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1351);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(17);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '1') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '7') ADVANCE(178);
      if (lookahead == '8') ADVANCE(194);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == '1') ADVANCE(150);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '7') ADVANCE(167);
      if (lookahead == '8') ADVANCE(175);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == '1') ADVANCE(151);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '7') ADVANCE(167);
      if (lookahead == '8') ADVANCE(175);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '5') ADVANCE(98);
      if (lookahead == '6') ADVANCE(134);
      if (lookahead == '7') ADVANCE(47);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '7') ADVANCE(58);
      if (lookahead == ';') ADVANCE(1398);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(155);
      if (lookahead == '6') ADVANCE(97);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == '5') ADVANCE(66);
      if (lookahead == '6') ADVANCE(162);
      if (lookahead == '7') ADVANCE(72);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == '5') ADVANCE(66);
      if (lookahead == '6') ADVANCE(162);
      if (lookahead == '7') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(64);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == '6') ADVANCE(155);
      if (lookahead == '9') ADVANCE(444);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(184);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '3') ADVANCE(145);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == '7') ADVANCE(141);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '8') ADVANCE(194);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '3') ADVANCE(199);
      if (lookahead == '4') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == '1') ADVANCE(218);
      if (lookahead == '3') ADVANCE(210);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '7') ADVANCE(195);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(196);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(207);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(207);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '7') ADVANCE(192);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(209);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(208);
      if (lookahead == '3') ADVANCE(208);
      if (lookahead == '4') ADVANCE(208);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(217);
      if (lookahead == '3') ADVANCE(217);
      if (lookahead == '4') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(219);
      if (lookahead == '3') ADVANCE(219);
      if (lookahead == '4') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(186);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(187);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(188);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '2') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '7') ADVANCE(178);
      if (lookahead == '8') ADVANCE(194);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(139);
      if (lookahead == '4') ADVANCE(114);
      if (lookahead == '6') ADVANCE(40);
      if (lookahead == '8') ADVANCE(99);
      if (lookahead == '9') ADVANCE(160);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(100);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(204);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(204);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '2') ADVANCE(122);
      if (lookahead == '3') ADVANCE(155);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(183);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == ';') ADVANCE(1338);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == '3') ADVANCE(440);
      if (lookahead == '4') ADVANCE(177);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(154);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(438);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '4') ADVANCE(116);
      if (lookahead == '8') ADVANCE(117);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(107);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '4') ADVANCE(143);
      if (lookahead == '8') ADVANCE(109);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(101);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(125);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead == '3') ADVANCE(81);
      if (lookahead == '9') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead == '3') ADVANCE(81);
      if (lookahead == '9') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(182);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(199);
      if (lookahead == '2') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(124);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(208);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(127);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(217);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(128);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(148);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(55);
      if (lookahead == '3') ADVANCE(139);
      if (lookahead == '4') ADVANCE(115);
      if (lookahead == '6') ADVANCE(40);
      if (lookahead == '8') ADVANCE(99);
      if (lookahead == '9') ADVANCE(160);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(129);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == '4') ADVANCE(136);
      if (lookahead == '8') ADVANCE(118);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(111);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == '4') ADVANCE(137);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(106);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == '5') ADVANCE(207);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == '6') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == '7') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == '9') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '5') ADVANCE(190);
      if (lookahead == '6') ADVANCE(158);
      if (lookahead == '7') ADVANCE(61);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == '9') ADVANCE(180);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(30);
      if (lookahead == '3') ADVANCE(441);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(59);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(173);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(181);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(443);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(96);
      if (lookahead == '9') ADVANCE(155);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '7') ADVANCE(105);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '7') ADVANCE(123);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(44);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(43);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(125);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(211);
      if (lookahead == '3') ADVANCE(198);
      if (lookahead == '5') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(211);
      if (lookahead == '3') ADVANCE(206);
      if (lookahead == '5') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(211);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(179);
      if (lookahead == '7') ADVANCE(119);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(49);
      if (lookahead == '7') ADVANCE(113);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(182);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '3') ADVANCE(446);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(199);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '7') ADVANCE(215);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(199);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '7') ADVANCE(215);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(98);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(213);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == '5') ADVANCE(209);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(127);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(31);
      if (lookahead == '3') ADVANCE(441);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(59);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(53);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(50);
      if (lookahead == '7') ADVANCE(126);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '7') ADVANCE(131);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead == '5') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '5') ADVANCE(208);
      if (lookahead == '7') ADVANCE(209);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(442);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(210);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(198);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(81);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(206);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(196);
      if (lookahead == '5') ADVANCE(204);
      if (lookahead == '7') ADVANCE(207);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(196);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(216);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(137);
      if (lookahead == '6') ADVANCE(137);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(120);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(137);
      if (lookahead == '7') ADVANCE(166);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(137);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(145);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(140);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(142);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(144);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead == '7') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead == '8') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(171);
      if (lookahead == '8') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(102);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(165);
      if (lookahead == '8') ADVANCE(109);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(174);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(445);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(191);
      if (lookahead == '6') ADVANCE(147);
      if (lookahead == '7') ADVANCE(108);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(166);
      if (lookahead == '8') ADVANCE(110);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(112);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(98);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(172);
      if (lookahead == '8') ADVANCE(133);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(204);
      if (lookahead == '6') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(204);
      if (lookahead == '7') ADVANCE(207);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(93);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(198);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(206);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(196);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(204);
      if (lookahead == '7') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(164);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(60);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(138);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(204);
      if (lookahead == '8') ADVANCE(204);
      if (lookahead == '9') ADVANCE(204);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(47);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(189);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(192);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(215);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(204);
      if (lookahead == '9') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(208);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(135);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(95);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(166);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(58);
      if (lookahead == ';') ADVANCE(1344);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(213);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(170);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1339);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1338);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1338);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1347);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1351);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1351);
      if (lookahead == 'f') ADVANCE(402);
      if (lookahead == 'q') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1351);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1351);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1336);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1344);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1398);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1394);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1410);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1402);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1406);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1345);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(376);
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(376);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(277);
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead == 'U') ADVANCE(357);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(314);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(329);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'y') ADVANCE(355);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'v') ADVANCE(328);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(229);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(403);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(387);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(345);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(349);
      if (lookahead == 'q') ADVANCE(425);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(273);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(410);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(278);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(280);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == 'q') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 'q') ADVANCE(415);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(422);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(359);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(382);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(386);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(391);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(282);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(254);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(356);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(361);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(362);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(363);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 65038) ADVANCE(1327);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(210);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1336);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(447);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1336);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1331);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1332);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(1243);
      if (lookahead == '\r') ADVANCE(455);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(1243);
      if (lookahead == '\r') SKIP(1244)
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(1281);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(457);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(458);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(460);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(461);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(462);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(463);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(464);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(465);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(466);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(467);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(468);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(469);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(470);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(471);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(472);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(473);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(474);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(475);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(476);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(477);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(480);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(481);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(482);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(484);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(485);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(486);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(487);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(488);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(489);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(491);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(492);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(493);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(494);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(495);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(496);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(497);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(498);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(500);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(502);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(503);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(504);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(505);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(506);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(507);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(508);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(509);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(510);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(511);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(512);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(513);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(514);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(515);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(516);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(517);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(518);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(519);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(520);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(522);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(523);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(524);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(525);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(526);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(527);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(528);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(530);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(533);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(536);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(539);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(553);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(560);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(456);
      if (lookahead == '-') ADVANCE(572);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1282);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(575);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(576);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(581);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(582);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(583);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(584);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(585);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(586);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(587);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(588);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(589);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(590);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(591);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(592);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(594);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(595);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(596);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(597);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(598);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(599);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(600);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(601);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(605);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(606);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(607);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(608);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(610);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(611);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(612);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(613);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(619);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(623);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(627);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(628);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(631);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(632);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(633);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(636);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(640);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(641);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(642);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(644);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(646);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(647);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(648);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(649);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(650);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(651);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(652);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(653);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(654);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(656);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(657);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(658);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(661);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(664);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(669);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(676);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(574);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(692);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1271);
      if (lookahead == '\r') ADVANCE(692);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1271);
      if (lookahead == '\r') ADVANCE(693);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-') ADVANCE(1346);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1271);
      if (lookahead == '\r') ADVANCE(693);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(749);
      if (lookahead == '\r') ADVANCE(698);
      if (lookahead == '.') ADVANCE(1299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(749);
      if (lookahead == '\r') ADVANCE(698);
      if (lookahead == '.') ADVANCE(1299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(749);
      if (lookahead == '.') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(750);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead == '\r') ADVANCE(692);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead == '\r') ADVANCE(699);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(708);
      if (lookahead == '\r') ADVANCE(701);
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(726);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(1381);
      if (lookahead == '1') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'N') ADVANCE(1315);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (lookahead == '[') ADVANCE(1283);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(701);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(708);
      if (lookahead == '\r') ADVANCE(701);
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(726);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(1381);
      if (lookahead == '1') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (lookahead == '[') ADVANCE(1283);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(701);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(703);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(713);
      if (lookahead == '\r') ADVANCE(704);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '0') ADVANCE(1378);
      if (lookahead == '1') ADVANCE(1360);
      if (lookahead == 'O') ADVANCE(1375);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(712);
      if (lookahead == '\r') ADVANCE(704);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '0') ADVANCE(1378);
      if (lookahead == '1') ADVANCE(1360);
      if (lookahead == 'O') ADVANCE(1375);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(712);
      if (lookahead == '\r') ADVANCE(705);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '0') ADVANCE(1378);
      if (lookahead == '1') ADVANCE(1360);
      if (lookahead == 'O') ADVANCE(1375);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(701);
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(726);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(1381);
      if (lookahead == '1') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'N') ADVANCE(1315);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (lookahead == '[') ADVANCE(1283);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(701);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(707);
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(726);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(1381);
      if (lookahead == '1') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'N') ADVANCE(1315);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (lookahead == '[') ADVANCE(1283);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(701);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(709);
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(733);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(740);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'N') ADVANCE(1315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(709);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(709);
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(733);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(740);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(709);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1273);
      if (lookahead == '\r') ADVANCE(704);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '0') ADVANCE(1378);
      if (lookahead == '1') ADVANCE(1360);
      if (lookahead == 'O') ADVANCE(1375);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1273);
      if (lookahead == '\r') ADVANCE(711);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '0') ADVANCE(1378);
      if (lookahead == '1') ADVANCE(1360);
      if (lookahead == 'O') ADVANCE(1375);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1273);
      if (lookahead == '\r') ADVANCE(711);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '0') ADVANCE(1378);
      if (lookahead == '1') ADVANCE(1360);
      if (lookahead == 'O') ADVANCE(1375);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(714);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(714);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1274);
      if (lookahead == '\r') ADVANCE(703);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'N') ADVANCE(1313);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 716:
      if (lookahead == ' ') SKIP(716)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1287);
      if (lookahead != 0) ADVANCE(1288);
      END_STATE();
    case 717:
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '#') ADVANCE(1337);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(731);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1341);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(740);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1320);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1306);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1309);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(720);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 718:
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '#') ADVANCE(1337);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(737);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1341);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(1381);
      if (lookahead == '1') ADVANCE(1362);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1316);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(719);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 719:
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(726);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(1381);
      if (lookahead == '1') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'N') ADVANCE(1315);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(719);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 720:
      if (lookahead == '!') ADVANCE(1357);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(733);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1352);
      if (lookahead == '0') ADVANCE(740);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '=') ADVANCE(1356);
      if (lookahead == '?') ADVANCE(1357);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'N') ADVANCE(1315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == 'P') ADVANCE(1323);
      if (lookahead == 'R') ADVANCE(1314);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1295);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1342);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(720);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 721:
      if (lookahead == '"') ADVANCE(1286);
      if (lookahead == '\\') ADVANCE(1262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1289);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(722)
      if (lookahead != 0) ADVANCE(1290);
      END_STATE();
    case 722:
      if (lookahead == '"') ADVANCE(1286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(722)
      END_STATE();
    case 723:
      if (lookahead == '#') ADVANCE(806);
      if (lookahead == 'a') ADVANCE(1178);
      if (lookahead == 'd') ADVANCE(1015);
      if (lookahead == 'f') ADVANCE(1167);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead == 'l') ADVANCE(1142);
      if (lookahead == 'm') ADVANCE(1045);
      if (lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'p') ADVANCE(1109);
      if (lookahead == 's') ADVANCE(1146);
      END_STATE();
    case 724:
      if (lookahead == '#') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(1122);
      END_STATE();
    case 725:
      if (lookahead == '#') ADVANCE(926);
      if (lookahead == 'd') ADVANCE(1033);
      if (lookahead == 'h') ADVANCE(1238);
      if (lookahead == 'm') ADVANCE(1050);
      if (lookahead == 'n') ADVANCE(1049);
      END_STATE();
    case 726:
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'D') ADVANCE(1067);
      if (lookahead == 'L') ADVANCE(1023);
      if (lookahead == 'M') ADVANCE(1107);
      if (lookahead == 'P') ADVANCE(1124);
      if (lookahead == 'R') ADVANCE(1024);
      if (lookahead == 'S') ADVANCE(1085);
      if (lookahead == 'U') ADVANCE(1152);
      if (lookahead == 'a') ADVANCE(1178);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'f') ADVANCE(1167);
      if (lookahead == 'h') ADVANCE(1013);
      if (lookahead == 'i') ADVANCE(1128);
      if (lookahead == 'l') ADVANCE(1057);
      if (lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(1014);
      if (lookahead == 'p') ADVANCE(1060);
      if (lookahead == 'q') ADVANCE(1218);
      if (lookahead == 'r') ADVANCE(1018);
      if (lookahead == 's') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == 'x') ADVANCE(1143);
      END_STATE();
    case 727:
      if (lookahead == '#') ADVANCE(922);
      if (lookahead == 'e') ADVANCE(1237);
      if (lookahead == 'q') ADVANCE(1233);
      END_STATE();
    case 728:
      if (lookahead == '#') ADVANCE(949);
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 729:
      if (lookahead == '#') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(1178);
      if (lookahead == 'd') ADVANCE(1015);
      if (lookahead == 'f') ADVANCE(1167);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead == 'l') ADVANCE(1142);
      if (lookahead == 'm') ADVANCE(1045);
      if (lookahead == 'n') ADVANCE(1048);
      if (lookahead == 's') ADVANCE(1146);
      END_STATE();
    case 730:
      if (lookahead == '#') ADVANCE(927);
      if (lookahead == 'd') ADVANCE(1036);
      if (lookahead == 'h') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(1054);
      if (lookahead == 'n') ADVANCE(1053);
      if (lookahead == 's') ADVANCE(1149);
      END_STATE();
    case 731:
      if (lookahead == '#') ADVANCE(817);
      if (lookahead == 'D') ADVANCE(1067);
      if (lookahead == 'L') ADVANCE(1023);
      if (lookahead == 'M') ADVANCE(1107);
      if (lookahead == 'P') ADVANCE(1124);
      if (lookahead == 'R') ADVANCE(1024);
      if (lookahead == 'S') ADVANCE(1085);
      if (lookahead == 'U') ADVANCE(1152);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'h') ADVANCE(1020);
      if (lookahead == 'i') ADVANCE(1128);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1022);
      if (lookahead == 'n') ADVANCE(1014);
      if (lookahead == 'p') ADVANCE(1061);
      if (lookahead == 'q') ADVANCE(1218);
      if (lookahead == 'r') ADVANCE(1018);
      if (lookahead == 's') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == 'x') ADVANCE(1143);
      END_STATE();
    case 732:
      if (lookahead == '#') ADVANCE(847);
      if (lookahead == 'd') ADVANCE(1037);
      if (lookahead == 'h') ADVANCE(1241);
      if (lookahead == 'm') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1055);
      if (lookahead == 'p') ADVANCE(1126);
      if (lookahead == 's') ADVANCE(1151);
      END_STATE();
    case 733:
      if (lookahead == '#') ADVANCE(851);
      if (lookahead == 'D') ADVANCE(1067);
      if (lookahead == 'L') ADVANCE(1023);
      if (lookahead == 'M') ADVANCE(1107);
      if (lookahead == 'P') ADVANCE(1124);
      if (lookahead == 'R') ADVANCE(1024);
      if (lookahead == 'S') ADVANCE(1085);
      if (lookahead == 'U') ADVANCE(1152);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'h') ADVANCE(1020);
      if (lookahead == 'i') ADVANCE(1128);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(1022);
      if (lookahead == 'n') ADVANCE(1014);
      if (lookahead == 'p') ADVANCE(1060);
      if (lookahead == 'q') ADVANCE(1218);
      if (lookahead == 'r') ADVANCE(1018);
      if (lookahead == 's') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == 'x') ADVANCE(1143);
      END_STATE();
    case 734:
      if (lookahead == '#') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(1036);
      if (lookahead == 'h') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(1054);
      if (lookahead == 'n') ADVANCE(1053);
      if (lookahead == 'p') ADVANCE(1122);
      if (lookahead == 's') ADVANCE(1149);
      END_STATE();
    case 735:
      if (lookahead == '#') ADVANCE(848);
      if (lookahead == 'p') ADVANCE(1126);
      END_STATE();
    case 736:
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == 'd') ADVANCE(1034);
      if (lookahead == 'h') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1052);
      if (lookahead == 'n') ADVANCE(1051);
      END_STATE();
    case 737:
      if (lookahead == '#') ADVANCE(850);
      if (lookahead == 'D') ADVANCE(1067);
      if (lookahead == 'L') ADVANCE(1023);
      if (lookahead == 'M') ADVANCE(1107);
      if (lookahead == 'P') ADVANCE(1124);
      if (lookahead == 'R') ADVANCE(1024);
      if (lookahead == 'S') ADVANCE(1085);
      if (lookahead == 'U') ADVANCE(1152);
      if (lookahead == 'a') ADVANCE(1178);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'f') ADVANCE(1167);
      if (lookahead == 'h') ADVANCE(1013);
      if (lookahead == 'i') ADVANCE(1128);
      if (lookahead == 'l') ADVANCE(1057);
      if (lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(1014);
      if (lookahead == 'p') ADVANCE(1061);
      if (lookahead == 'q') ADVANCE(1218);
      if (lookahead == 'r') ADVANCE(1018);
      if (lookahead == 's') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == 'x') ADVANCE(1143);
      END_STATE();
    case 738:
      if (lookahead == '#') ADVANCE(935);
      if (lookahead == 'd') ADVANCE(1036);
      if (lookahead == 'h') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(1054);
      if (lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 739:
      if (lookahead == '&') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1258);
      END_STATE();
    case 740:
      if (lookahead == '&') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1258);
      if (lookahead == '.') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 741:
      if (lookahead == '&') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1342);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(744);
      END_STATE();
    case 742:
      if (lookahead == '&') ADVANCE(728);
      END_STATE();
    case 743:
      if (lookahead == '&') ADVANCE(735);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1342);
      END_STATE();
    case 744:
      if (lookahead == '&') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1342);
      END_STATE();
    case 745:
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 746:
      if (lookahead == '-') ADVANCE(745);
      END_STATE();
    case 747:
      if (lookahead == '-') ADVANCE(746);
      END_STATE();
    case 748:
      if (lookahead == '-') ADVANCE(747);
      END_STATE();
    case 749:
      if (lookahead == '-') ADVANCE(747);
      if (lookahead == '.') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(750);
      END_STATE();
    case 750:
      if (lookahead == '.') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(750);
      END_STATE();
    case 751:
      if (lookahead == '.') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 752:
      if (lookahead == '0') ADVANCE(767);
      if (lookahead == '8') ADVANCE(965);
      END_STATE();
    case 753:
      if (lookahead == '0') ADVANCE(956);
      if (lookahead == '1') ADVANCE(824);
      if (lookahead == '7') ADVANCE(781);
      END_STATE();
    case 754:
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == '2') ADVANCE(818);
      if (lookahead == '7') ADVANCE(905);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(973);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(971);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(974);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(975);
      END_STATE();
    case 755:
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == '2') ADVANCE(818);
      if (lookahead == '7') ADVANCE(904);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(973);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(974);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(975);
      END_STATE();
    case 756:
      if (lookahead == '0') ADVANCE(757);
      if (lookahead == '1') ADVANCE(780);
      if (lookahead == '7') ADVANCE(951);
      if (lookahead == '8') ADVANCE(965);
      END_STATE();
    case 757:
      if (lookahead == '0') ADVANCE(795);
      if (lookahead == '1') ADVANCE(924);
      if (lookahead == '2') ADVANCE(811);
      if (lookahead == '7') ADVANCE(936);
      if (lookahead == '8') ADVANCE(946);
      END_STATE();
    case 758:
      if (lookahead == '0') ADVANCE(795);
      if (lookahead == '1') ADVANCE(925);
      if (lookahead == '2') ADVANCE(811);
      if (lookahead == '7') ADVANCE(936);
      if (lookahead == '8') ADVANCE(946);
      END_STATE();
    case 759:
      if (lookahead == '0') ADVANCE(930);
      if (lookahead == '6') ADVANCE(883);
      END_STATE();
    case 760:
      if (lookahead == '0') ADVANCE(838);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '2') ADVANCE(762);
      if (lookahead == '3') ADVANCE(840);
      if (lookahead == '5') ADVANCE(814);
      if (lookahead == '6') ADVANCE(934);
      if (lookahead == '7') ADVANCE(841);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(772);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(812);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(987);
      END_STATE();
    case 761:
      if (lookahead == '0') ADVANCE(838);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '2') ADVANCE(762);
      if (lookahead == '3') ADVANCE(840);
      if (lookahead == '5') ADVANCE(814);
      if (lookahead == '6') ADVANCE(934);
      if (lookahead == '7') ADVANCE(842);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(772);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(813);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(987);
      END_STATE();
    case 762:
      if (lookahead == '0') ADVANCE(948);
      if (lookahead == '1') ADVANCE(886);
      if (lookahead == '6') ADVANCE(930);
      if (lookahead == '9') ADVANCE(1254);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 763:
      if (lookahead == '0') ADVANCE(948);
      if (lookahead == '1') ADVANCE(887);
      if (lookahead == '6') ADVANCE(930);
      if (lookahead == '9') ADVANCE(1254);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 764:
      if (lookahead == '0') ADVANCE(1377);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'O') ADVANCE(1373);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      END_STATE();
    case 765:
      if (lookahead == '0') ADVANCE(1377);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(1305);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1316);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'O') ADVANCE(1373);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(764)
      END_STATE();
    case 766:
      if (lookahead == '0') ADVANCE(919);
      END_STATE();
    case 767:
      if (lookahead == '0') ADVANCE(919);
      if (lookahead == '1') ADVANCE(920);
      END_STATE();
    case 768:
      if (lookahead == '0') ADVANCE(776);
      if (lookahead == '1') ADVANCE(780);
      if (lookahead == '7') ADVANCE(951);
      END_STATE();
    case 769:
      if (lookahead == '0') ADVANCE(839);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '2') ADVANCE(763);
      if (lookahead == '3') ADVANCE(840);
      if (lookahead == '5') ADVANCE(814);
      if (lookahead == '6') ADVANCE(934);
      if (lookahead == '7') ADVANCE(844);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(813);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(987);
      END_STATE();
    case 770:
      if (lookahead == '0') ADVANCE(839);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '2') ADVANCE(763);
      if (lookahead == '3') ADVANCE(840);
      if (lookahead == '5') ADVANCE(814);
      if (lookahead == '6') ADVANCE(934);
      if (lookahead == '7') ADVANCE(843);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(812);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(987);
      END_STATE();
    case 771:
      if (lookahead == '0') ADVANCE(783);
      if (lookahead == '7') ADVANCE(828);
      END_STATE();
    case 772:
      if (lookahead == '0') ADVANCE(783);
      if (lookahead == '7') ADVANCE(828);
      if (lookahead == ';') ADVANCE(1397);
      END_STATE();
    case 773:
      if (lookahead == '0') ADVANCE(766);
      if (lookahead == '8') ADVANCE(965);
      END_STATE();
    case 774:
      if (lookahead == '0') ADVANCE(834);
      END_STATE();
    case 775:
      if (lookahead == '0') ADVANCE(794);
      if (lookahead == '1') ADVANCE(924);
      if (lookahead == '2') ADVANCE(811);
      if (lookahead == '7') ADVANCE(936);
      if (lookahead == '8') ADVANCE(946);
      END_STATE();
    case 776:
      if (lookahead == '0') ADVANCE(794);
      if (lookahead == '1') ADVANCE(925);
      if (lookahead == '2') ADVANCE(811);
      if (lookahead == '7') ADVANCE(936);
      if (lookahead == '8') ADVANCE(946);
      END_STATE();
    case 777:
      if (lookahead == '0') ADVANCE(832);
      if (lookahead == '2') ADVANCE(822);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(972);
      END_STATE();
    case 778:
      if (lookahead == '0') ADVANCE(977);
      if (lookahead == '3') ADVANCE(978);
      if (lookahead == '4') ADVANCE(979);
      END_STATE();
    case 779:
      if (lookahead == '0') ADVANCE(972);
      if (lookahead == '3') ADVANCE(972);
      if (lookahead == '4') ADVANCE(972);
      END_STATE();
    case 780:
      if (lookahead == '0') ADVANCE(865);
      END_STATE();
    case 781:
      if (lookahead == '0') ADVANCE(980);
      END_STATE();
    case 782:
      if (lookahead == '0') ADVANCE(1000);
      if (lookahead == '3') ADVANCE(1000);
      if (lookahead == '4') ADVANCE(1000);
      END_STATE();
    case 783:
      if (lookahead == '0') ADVANCE(988);
      if (lookahead == '1') ADVANCE(988);
      END_STATE();
    case 784:
      if (lookahead == '0') ADVANCE(988);
      if (lookahead == '3') ADVANCE(988);
      END_STATE();
    case 785:
      if (lookahead == '0') ADVANCE(988);
      if (lookahead == '3') ADVANCE(988);
      if (lookahead == '4') ADVANCE(988);
      END_STATE();
    case 786:
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '3') ADVANCE(987);
      if (lookahead == '4') ADVANCE(987);
      END_STATE();
    case 787:
      if (lookahead == '0') ADVANCE(997);
      if (lookahead == '1') ADVANCE(1001);
      if (lookahead == '3') ADVANCE(996);
      END_STATE();
    case 788:
      if (lookahead == '0') ADVANCE(994);
      if (lookahead == '3') ADVANCE(994);
      if (lookahead == '4') ADVANCE(994);
      END_STATE();
    case 789:
      if (lookahead == '0') ADVANCE(957);
      if (lookahead == '1') ADVANCE(823);
      END_STATE();
    case 790:
      if (lookahead == '0') ADVANCE(849);
      END_STATE();
    case 791:
      if (lookahead == '0') ADVANCE(958);
      if (lookahead == '1') ADVANCE(826);
      END_STATE();
    case 792:
      if (lookahead == '0') ADVANCE(961);
      if (lookahead == '1') ADVANCE(830);
      if (lookahead == '5') ADVANCE(878);
      if (lookahead == '6') ADVANCE(911);
      END_STATE();
    case 793:
      if (lookahead == '0') ADVANCE(961);
      if (lookahead == '1') ADVANCE(830);
      if (lookahead == '5') ADVANCE(878);
      if (lookahead == '6') ADVANCE(911);
      if (lookahead == '7') ADVANCE(781);
      END_STATE();
    case 794:
      if (lookahead == '0') ADVANCE(941);
      END_STATE();
    case 795:
      if (lookahead == '0') ADVANCE(941);
      if (lookahead == '3') ADVANCE(908);
      END_STATE();
    case 796:
      if (lookahead == '0') ADVANCE(959);
      if (lookahead == '1') ADVANCE(828);
      END_STATE();
    case 797:
      if (lookahead == '0') ADVANCE(962);
      if (lookahead == '1') ADVANCE(831);
      END_STATE();
    case 798:
      if (lookahead == '0') ADVANCE(836);
      if (lookahead == '2') ADVANCE(835);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1000);
      END_STATE();
    case 799:
      if (lookahead == '0') ADVANCE(845);
      if (lookahead == '2') ADVANCE(815);
      if (lookahead == '7') ADVANCE(967);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(970);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(988);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(993);
      END_STATE();
    case 800:
      if (lookahead == '0') ADVANCE(845);
      if (lookahead == '2') ADVANCE(815);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(988);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(993);
      END_STATE();
    case 801:
      if (lookahead == '0') ADVANCE(845);
      if (lookahead == '2') ADVANCE(837);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(988);
      END_STATE();
    case 802:
      if (lookahead == '0') ADVANCE(846);
      if (lookahead == '2') ADVANCE(833);
      if (lookahead == '7') ADVANCE(968);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(988);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(994);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(995);
      END_STATE();
    case 803:
      if (lookahead == '0') ADVANCE(758);
      if (lookahead == '1') ADVANCE(780);
      if (lookahead == '7') ADVANCE(951);
      if (lookahead == '8') ADVANCE(965);
      END_STATE();
    case 804:
      if (lookahead == '0') ADVANCE(775);
      if (lookahead == '1') ADVANCE(780);
      if (lookahead == '7') ADVANCE(951);
      END_STATE();
    case 805:
      if (lookahead == '1') ADVANCE(1359);
      if (lookahead == '2') ADVANCE(1390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      END_STATE();
    case 806:
      if (lookahead == '1') ADVANCE(752);
      if (lookahead == '4') ADVANCE(852);
      if (lookahead == '8') ADVANCE(856);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(857);
      END_STATE();
    case 807:
      if (lookahead == '1') ADVANCE(774);
      if (lookahead == '4') ADVANCE(906);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(858);
      END_STATE();
    case 808:
      if (lookahead == '1') ADVANCE(774);
      if (lookahead == '4') ADVANCE(907);
      if (lookahead == '8') ADVANCE(899);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(892);
      END_STATE();
    case 809:
      if (lookahead == '1') ADVANCE(778);
      if (lookahead == '4') ADVANCE(1253);
      END_STATE();
    case 810:
      if (lookahead == '1') ADVANCE(756);
      if (lookahead == '3') ADVANCE(913);
      if (lookahead == '4') ADVANCE(853);
      if (lookahead == '6') ADVANCE(787);
      if (lookahead == '8') ADVANCE(861);
      if (lookahead == '9') ADVANCE(929);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(862);
      END_STATE();
    case 811:
      if (lookahead == '1') ADVANCE(960);
      if (lookahead == '2') ADVANCE(951);
      END_STATE();
    case 812:
      if (lookahead == '1') ADVANCE(879);
      if (lookahead == ';') ADVANCE(741);
      END_STATE();
    case 813:
      if (lookahead == '1') ADVANCE(879);
      if (lookahead == ';') ADVANCE(1341);
      END_STATE();
    case 814:
      if (lookahead == '1') ADVANCE(932);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1248);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1247);
      END_STATE();
    case 815:
      if (lookahead == '1') ADVANCE(880);
      END_STATE();
    case 816:
      if (lookahead == '1') ADVANCE(773);
      if (lookahead == '4') ADVANCE(855);
      if (lookahead == '8') ADVANCE(856);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(860);
      END_STATE();
    case 817:
      if (lookahead == '1') ADVANCE(768);
      if (lookahead == '3') ADVANCE(913);
      if (lookahead == '4') ADVANCE(917);
      if (lookahead == '6') ADVANCE(787);
      if (lookahead == '8') ADVANCE(867);
      if (lookahead == '9') ADVANCE(929);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(870);
      END_STATE();
    case 818:
      if (lookahead == '1') ADVANCE(876);
      END_STATE();
    case 819:
      if (lookahead == '1') ADVANCE(783);
      if (lookahead == '2') ADVANCE(885);
      if (lookahead == '3') ADVANCE(930);
      END_STATE();
    case 820:
      if (lookahead == '1') ADVANCE(783);
      if (lookahead == '2') ADVANCE(884);
      if (lookahead == '3') ADVANCE(930);
      END_STATE();
    case 821:
      if (lookahead == '1') ADVANCE(873);
      END_STATE();
    case 822:
      if (lookahead == '1') ADVANCE(875);
      END_STATE();
    case 823:
      if (lookahead == '1') ADVANCE(972);
      if (lookahead == '2') ADVANCE(972);
      END_STATE();
    case 824:
      if (lookahead == '1') ADVANCE(978);
      if (lookahead == '2') ADVANCE(979);
      END_STATE();
    case 825:
      if (lookahead == '1') ADVANCE(984);
      END_STATE();
    case 826:
      if (lookahead == '1') ADVANCE(1000);
      if (lookahead == '2') ADVANCE(1000);
      END_STATE();
    case 827:
      if (lookahead == '1') ADVANCE(988);
      END_STATE();
    case 828:
      if (lookahead == '1') ADVANCE(988);
      if (lookahead == '2') ADVANCE(988);
      END_STATE();
    case 829:
      if (lookahead == '1') ADVANCE(988);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(976);
      END_STATE();
    case 830:
      if (lookahead == '1') ADVANCE(987);
      if (lookahead == '2') ADVANCE(987);
      END_STATE();
    case 831:
      if (lookahead == '1') ADVANCE(994);
      if (lookahead == '2') ADVANCE(994);
      END_STATE();
    case 832:
      if (lookahead == '1') ADVANCE(779);
      END_STATE();
    case 833:
      if (lookahead == '1') ADVANCE(888);
      END_STATE();
    case 834:
      if (lookahead == '1') ADVANCE(902);
      END_STATE();
    case 835:
      if (lookahead == '1') ADVANCE(877);
      END_STATE();
    case 836:
      if (lookahead == '1') ADVANCE(782);
      END_STATE();
    case 837:
      if (lookahead == '1') ADVANCE(878);
      END_STATE();
    case 838:
      if (lookahead == '1') ADVANCE(786);
      if (lookahead == '3') ADVANCE(1249);
      if (lookahead == '4') ADVANCE(953);
      END_STATE();
    case 839:
      if (lookahead == '1') ADVANCE(786);
      if (lookahead == '3') ADVANCE(1249);
      if (lookahead == '4') ADVANCE(952);
      END_STATE();
    case 840:
      if (lookahead == '1') ADVANCE(909);
      END_STATE();
    case 841:
      if (lookahead == '1') ADVANCE(941);
      if (lookahead == '3') ADVANCE(825);
      if (lookahead == '9') ADVANCE(944);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1246);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(909);
      END_STATE();
    case 842:
      if (lookahead == '1') ADVANCE(941);
      if (lookahead == '3') ADVANCE(825);
      if (lookahead == '9') ADVANCE(945);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1246);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(909);
      END_STATE();
    case 843:
      if (lookahead == '1') ADVANCE(941);
      if (lookahead == '9') ADVANCE(944);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1246);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(909);
      END_STATE();
    case 844:
      if (lookahead == '1') ADVANCE(941);
      if (lookahead == '9') ADVANCE(945);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1246);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(909);
      END_STATE();
    case 845:
      if (lookahead == '1') ADVANCE(785);
      END_STATE();
    case 846:
      if (lookahead == '1') ADVANCE(788);
      END_STATE();
    case 847:
      if (lookahead == '1') ADVANCE(790);
      if (lookahead == '4') ADVANCE(912);
      if (lookahead == '8') ADVANCE(901);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(864);
      END_STATE();
    case 848:
      if (lookahead == '1') ADVANCE(790);
      if (lookahead == '4') ADVANCE(909);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(889);
      END_STATE();
    case 849:
      if (lookahead == '1') ADVANCE(921);
      END_STATE();
    case 850:
      if (lookahead == '1') ADVANCE(803);
      if (lookahead == '3') ADVANCE(913);
      if (lookahead == '4') ADVANCE(854);
      if (lookahead == '6') ADVANCE(787);
      if (lookahead == '8') ADVANCE(861);
      if (lookahead == '9') ADVANCE(929);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(891);
      END_STATE();
    case 851:
      if (lookahead == '1') ADVANCE(804);
      if (lookahead == '3') ADVANCE(913);
      if (lookahead == '4') ADVANCE(915);
      if (lookahead == '6') ADVANCE(787);
      if (lookahead == '8') ADVANCE(867);
      if (lookahead == '9') ADVANCE(929);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(872);
      END_STATE();
    case 852:
      if (lookahead == '2') ADVANCE(973);
      if (lookahead == '3') ADVANCE(971);
      if (lookahead == '5') ADVANCE(974);
      if (lookahead == '7') ADVANCE(975);
      END_STATE();
    case 853:
      if (lookahead == '2') ADVANCE(973);
      if (lookahead == '3') ADVANCE(985);
      if (lookahead == '5') ADVANCE(987);
      END_STATE();
    case 854:
      if (lookahead == '2') ADVANCE(973);
      if (lookahead == '3') ADVANCE(998);
      if (lookahead == '5') ADVANCE(987);
      END_STATE();
    case 855:
      if (lookahead == '2') ADVANCE(973);
      if (lookahead == '5') ADVANCE(974);
      if (lookahead == '7') ADVANCE(975);
      END_STATE();
    case 856:
      if (lookahead == '2') ADVANCE(753);
      if (lookahead == '7') ADVANCE(869);
      END_STATE();
    case 857:
      if (lookahead == '2') ADVANCE(754);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1251);
      END_STATE();
    case 858:
      if (lookahead == '2') ADVANCE(950);
      END_STATE();
    case 859:
      if (lookahead == '2') ADVANCE(777);
      END_STATE();
    case 860:
      if (lookahead == '2') ADVANCE(755);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1251);
      END_STATE();
    case 861:
      if (lookahead == '2') ADVANCE(793);
      if (lookahead == '5') ADVANCE(963);
      if (lookahead == '6') ADVANCE(928);
      if (lookahead == '7') ADVANCE(819);
      if (lookahead == '8') ADVANCE(759);
      if (lookahead == '9') ADVANCE(954);
      END_STATE();
    case 862:
      if (lookahead == '2') ADVANCE(760);
      if (lookahead == '3') ADVANCE(1250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(829);
      END_STATE();
    case 863:
      if (lookahead == '2') ADVANCE(800);
      END_STATE();
    case 864:
      if (lookahead == '2') ADVANCE(802);
      END_STATE();
    case 865:
      if (lookahead == '2') ADVANCE(948);
      END_STATE();
    case 866:
      if (lookahead == '2') ADVANCE(880);
      END_STATE();
    case 867:
      if (lookahead == '2') ADVANCE(792);
      if (lookahead == '5') ADVANCE(963);
      if (lookahead == '6') ADVANCE(928);
      if (lookahead == '7') ADVANCE(820);
      if (lookahead == '8') ADVANCE(759);
      if (lookahead == '9') ADVANCE(954);
      END_STATE();
    case 868:
      if (lookahead == '2') ADVANCE(789);
      if (lookahead == '7') ADVANCE(874);
      END_STATE();
    case 869:
      if (lookahead == '2') ADVANCE(876);
      END_STATE();
    case 870:
      if (lookahead == '2') ADVANCE(769);
      if (lookahead == '3') ADVANCE(1250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(827);
      END_STATE();
    case 871:
      if (lookahead == '2') ADVANCE(882);
      if (lookahead == '9') ADVANCE(930);
      END_STATE();
    case 872:
      if (lookahead == '2') ADVANCE(770);
      if (lookahead == '3') ADVANCE(1250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(827);
      END_STATE();
    case 873:
      if (lookahead == '2') ADVANCE(976);
      END_STATE();
    case 874:
      if (lookahead == '2') ADVANCE(875);
      END_STATE();
    case 875:
      if (lookahead == '2') ADVANCE(972);
      END_STATE();
    case 876:
      if (lookahead == '2') ADVANCE(981);
      if (lookahead == '5') ADVANCE(982);
      if (lookahead == '7') ADVANCE(983);
      END_STATE();
    case 877:
      if (lookahead == '2') ADVANCE(1000);
      END_STATE();
    case 878:
      if (lookahead == '2') ADVANCE(988);
      END_STATE();
    case 879:
      if (lookahead == '2') ADVANCE(988);
      if (lookahead == '3') ADVANCE(988);
      END_STATE();
    case 880:
      if (lookahead == '2') ADVANCE(988);
      if (lookahead == '5') ADVANCE(993);
      END_STATE();
    case 881:
      if (lookahead == '2') ADVANCE(988);
      if (lookahead == '6') ADVANCE(988);
      END_STATE();
    case 882:
      if (lookahead == '2') ADVANCE(988);
      if (lookahead == '7') ADVANCE(988);
      END_STATE();
    case 883:
      if (lookahead == '2') ADVANCE(988);
      if (lookahead == '9') ADVANCE(988);
      END_STATE();
    case 884:
      if (lookahead == '2') ADVANCE(987);
      if (lookahead == '3') ADVANCE(988);
      END_STATE();
    case 885:
      if (lookahead == '2') ADVANCE(987);
      if (lookahead == '3') ADVANCE(988);
      if (lookahead == '7') ADVANCE(983);
      END_STATE();
    case 886:
      if (lookahead == '2') ADVANCE(987);
      if (lookahead == '3') ADVANCE(988);
      if (lookahead == '7') ADVANCE(983);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 887:
      if (lookahead == '2') ADVANCE(987);
      if (lookahead == '3') ADVANCE(988);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 888:
      if (lookahead == '2') ADVANCE(994);
      if (lookahead == '5') ADVANCE(995);
      END_STATE();
    case 889:
      if (lookahead == '2') ADVANCE(955);
      END_STATE();
    case 890:
      if (lookahead == '2') ADVANCE(798);
      END_STATE();
    case 891:
      if (lookahead == '2') ADVANCE(761);
      if (lookahead == '3') ADVANCE(1250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(829);
      END_STATE();
    case 892:
      if (lookahead == '2') ADVANCE(799);
      END_STATE();
    case 893:
      if (lookahead == '2') ADVANCE(888);
      END_STATE();
    case 894:
      if (lookahead == '2') ADVANCE(827);
      if (lookahead == '3') ADVANCE(1255);
      END_STATE();
    case 895:
      if (lookahead == '2') ADVANCE(877);
      END_STATE();
    case 896:
      if (lookahead == '2') ADVANCE(801);
      END_STATE();
    case 897:
      if (lookahead == '2') ADVANCE(878);
      END_STATE();
    case 898:
      if (lookahead == '2') ADVANCE(791);
      if (lookahead == '7') ADVANCE(895);
      END_STATE();
    case 899:
      if (lookahead == '2') ADVANCE(796);
      if (lookahead == '7') ADVANCE(866);
      END_STATE();
    case 900:
      if (lookahead == '2') ADVANCE(796);
      if (lookahead == '7') ADVANCE(897);
      END_STATE();
    case 901:
      if (lookahead == '2') ADVANCE(797);
      if (lookahead == '7') ADVANCE(893);
      END_STATE();
    case 902:
      if (lookahead == '3') ADVANCE(906);
      END_STATE();
    case 903:
      if (lookahead == '3') ADVANCE(971);
      END_STATE();
    case 904:
      if (lookahead == '3') ADVANCE(825);
      END_STATE();
    case 905:
      if (lookahead == '3') ADVANCE(825);
      if (lookahead == '9') ADVANCE(937);
      END_STATE();
    case 906:
      if (lookahead == '3') ADVANCE(970);
      END_STATE();
    case 907:
      if (lookahead == '3') ADVANCE(970);
      if (lookahead == '5') ADVANCE(988);
      if (lookahead == '7') ADVANCE(993);
      END_STATE();
    case 908:
      if (lookahead == '3') ADVANCE(984);
      END_STATE();
    case 909:
      if (lookahead == '3') ADVANCE(988);
      END_STATE();
    case 910:
      if (lookahead == '3') ADVANCE(988);
      if (lookahead == '4') ADVANCE(988);
      END_STATE();
    case 911:
      if (lookahead == '3') ADVANCE(988);
      if (lookahead == '4') ADVANCE(988);
      if (lookahead == '5') ADVANCE(988);
      END_STATE();
    case 912:
      if (lookahead == '3') ADVANCE(988);
      if (lookahead == '5') ADVANCE(994);
      if (lookahead == '7') ADVANCE(995);
      END_STATE();
    case 913:
      if (lookahead == '3') ADVANCE(996);
      END_STATE();
    case 914:
      if (lookahead == '3') ADVANCE(985);
      END_STATE();
    case 915:
      if (lookahead == '3') ADVANCE(985);
      if (lookahead == '5') ADVANCE(987);
      END_STATE();
    case 916:
      if (lookahead == '3') ADVANCE(998);
      END_STATE();
    case 917:
      if (lookahead == '3') ADVANCE(998);
      if (lookahead == '5') ADVANCE(987);
      END_STATE();
    case 918:
      if (lookahead == '3') ADVANCE(1252);
      END_STATE();
    case 919:
      if (lookahead == '3') ADVANCE(908);
      END_STATE();
    case 920:
      if (lookahead == '3') ADVANCE(903);
      END_STATE();
    case 921:
      if (lookahead == '3') ADVANCE(909);
      END_STATE();
    case 922:
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '6') ADVANCE(909);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(894);
      END_STATE();
    case 923:
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '7') ADVANCE(941);
      END_STATE();
    case 924:
      if (lookahead == '3') ADVANCE(914);
      END_STATE();
    case 925:
      if (lookahead == '3') ADVANCE(916);
      END_STATE();
    case 926:
      if (lookahead == '4') ADVANCE(939);
      if (lookahead == '8') ADVANCE(868);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(859);
      END_STATE();
    case 927:
      if (lookahead == '4') ADVANCE(943);
      if (lookahead == '8') ADVANCE(899);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(863);
      END_STATE();
    case 928:
      if (lookahead == '4') ADVANCE(947);
      if (lookahead == '6') ADVANCE(784);
      END_STATE();
    case 929:
      if (lookahead == '4') ADVANCE(964);
      if (lookahead == '6') ADVANCE(923);
      if (lookahead == '7') ADVANCE(871);
      END_STATE();
    case 930:
      if (lookahead == '4') ADVANCE(988);
      END_STATE();
    case 931:
      if (lookahead == '4') ADVANCE(988);
      if (lookahead == '7') ADVANCE(988);
      END_STATE();
    case 932:
      if (lookahead == '4') ADVANCE(988);
      if (lookahead == '8') ADVANCE(988);
      END_STATE();
    case 933:
      if (lookahead == '4') ADVANCE(940);
      if (lookahead == '8') ADVANCE(898);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(890);
      END_STATE();
    case 934:
      if (lookahead == '4') ADVANCE(878);
      END_STATE();
    case 935:
      if (lookahead == '4') ADVANCE(941);
      if (lookahead == '8') ADVANCE(900);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(896);
      END_STATE();
    case 936:
      if (lookahead == '5') ADVANCE(879);
      END_STATE();
    case 937:
      if (lookahead == '5') ADVANCE(971);
      END_STATE();
    case 938:
      if (lookahead == '5') ADVANCE(970);
      END_STATE();
    case 939:
      if (lookahead == '5') ADVANCE(972);
      END_STATE();
    case 940:
      if (lookahead == '5') ADVANCE(1000);
      END_STATE();
    case 941:
      if (lookahead == '5') ADVANCE(988);
      END_STATE();
    case 942:
      if (lookahead == '5') ADVANCE(988);
      if (lookahead == '6') ADVANCE(988);
      END_STATE();
    case 943:
      if (lookahead == '5') ADVANCE(988);
      if (lookahead == '7') ADVANCE(993);
      END_STATE();
    case 944:
      if (lookahead == '5') ADVANCE(985);
      END_STATE();
    case 945:
      if (lookahead == '5') ADVANCE(998);
      END_STATE();
    case 946:
      if (lookahead == '6') ADVANCE(942);
      END_STATE();
    case 947:
      if (lookahead == '6') ADVANCE(988);
      END_STATE();
    case 948:
      if (lookahead == '6') ADVANCE(988);
      if (lookahead == '7') ADVANCE(988);
      END_STATE();
    case 949:
      if (lookahead == '6') ADVANCE(827);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(918);
      END_STATE();
    case 950:
      if (lookahead == '7') ADVANCE(967);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(970);
      END_STATE();
    case 951:
      if (lookahead == '7') ADVANCE(988);
      END_STATE();
    case 952:
      if (lookahead == '7') ADVANCE(988);
      if (lookahead == '8') ADVANCE(988);
      if (lookahead == '9') ADVANCE(988);
      END_STATE();
    case 953:
      if (lookahead == '7') ADVANCE(988);
      if (lookahead == '8') ADVANCE(988);
      if (lookahead == '9') ADVANCE(988);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 954:
      if (lookahead == '7') ADVANCE(966);
      END_STATE();
    case 955:
      if (lookahead == '7') ADVANCE(968);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(988);
      END_STATE();
    case 956:
      if (lookahead == '8') ADVANCE(977);
      END_STATE();
    case 957:
      if (lookahead == '8') ADVANCE(972);
      END_STATE();
    case 958:
      if (lookahead == '8') ADVANCE(1000);
      END_STATE();
    case 959:
      if (lookahead == '8') ADVANCE(988);
      END_STATE();
    case 960:
      if (lookahead == '8') ADVANCE(988);
      if (lookahead == '9') ADVANCE(988);
      END_STATE();
    case 961:
      if (lookahead == '8') ADVANCE(987);
      END_STATE();
    case 962:
      if (lookahead == '8') ADVANCE(994);
      END_STATE();
    case 963:
      if (lookahead == '9') ADVANCE(910);
      END_STATE();
    case 964:
      if (lookahead == '9') ADVANCE(881);
      END_STATE();
    case 965:
      if (lookahead == '9') ADVANCE(976);
      END_STATE();
    case 966:
      if (lookahead == '9') ADVANCE(988);
      END_STATE();
    case 967:
      if (lookahead == '9') ADVANCE(938);
      END_STATE();
    case 968:
      if (lookahead == '9') ADVANCE(941);
      END_STATE();
    case 969:
      if (lookahead == '9') ADVANCE(828);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(947);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 970:
      if (lookahead == ';') ADVANCE(1337);
      END_STATE();
    case 971:
      if (lookahead == ';') ADVANCE(1340);
      END_STATE();
    case 972:
      if (lookahead == ';') ADVANCE(1258);
      END_STATE();
    case 973:
      if (lookahead == ';') ADVANCE(1397);
      END_STATE();
    case 974:
      if (lookahead == ';') ADVANCE(1364);
      END_STATE();
    case 975:
      if (lookahead == ';') ADVANCE(1387);
      END_STATE();
    case 976:
      if (lookahead == ';') ADVANCE(1393);
      END_STATE();
    case 977:
      if (lookahead == ';') ADVANCE(1368);
      END_STATE();
    case 978:
      if (lookahead == ';') ADVANCE(1370);
      END_STATE();
    case 979:
      if (lookahead == ';') ADVANCE(1372);
      END_STATE();
    case 980:
      if (lookahead == ';') ADVANCE(1409);
      END_STATE();
    case 981:
      if (lookahead == ';') ADVANCE(1366);
      END_STATE();
    case 982:
      if (lookahead == ';') ADVANCE(1389);
      END_STATE();
    case 983:
      if (lookahead == ';') ADVANCE(1401);
      END_STATE();
    case 984:
      if (lookahead == ';') ADVANCE(1405);
      END_STATE();
    case 985:
      if (lookahead == ';') ADVANCE(741);
      END_STATE();
    case 986:
      if (lookahead == ';') ADVANCE(741);
      if (lookahead == 'b') ADVANCE(988);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == 'm') ADVANCE(1133);
      END_STATE();
    case 987:
      if (lookahead == ';') ADVANCE(1352);
      END_STATE();
    case 988:
      if (lookahead == ';') ADVANCE(1342);
      END_STATE();
    case 989:
      if (lookahead == ';') ADVANCE(1342);
      if (lookahead == 'a') ADVANCE(1172);
      END_STATE();
    case 990:
      if (lookahead == ';') ADVANCE(1342);
      if (lookahead == 'f') ADVANCE(1207);
      if (lookahead == 'q') ADVANCE(988);
      END_STATE();
    case 991:
      if (lookahead == ';') ADVANCE(1342);
      if (lookahead == 'o') ADVANCE(1236);
      END_STATE();
    case 992:
      if (lookahead == ';') ADVANCE(1342);
      if (lookahead == 't') ADVANCE(1144);
      END_STATE();
    case 993:
      if (lookahead == ';') ADVANCE(744);
      END_STATE();
    case 994:
      if (lookahead == ';') ADVANCE(1334);
      END_STATE();
    case 995:
      if (lookahead == ';') ADVANCE(743);
      END_STATE();
    case 996:
      if (lookahead == ';') ADVANCE(1353);
      END_STATE();
    case 997:
      if (lookahead == ';') ADVANCE(742);
      END_STATE();
    case 998:
      if (lookahead == ';') ADVANCE(1341);
      END_STATE();
    case 999:
      if (lookahead == ';') ADVANCE(1341);
      if (lookahead == 'b') ADVANCE(988);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == 'm') ADVANCE(1133);
      END_STATE();
    case 1000:
      if (lookahead == ';') ADVANCE(1259);
      END_STATE();
    case 1001:
      if (lookahead == ';') ADVANCE(1354);
      END_STATE();
    case 1002:
      if (lookahead == '=') ADVANCE(1342);
      END_STATE();
    case 1003:
      if (lookahead == 'A') ADVANCE(1173);
      END_STATE();
    case 1004:
      if (lookahead == 'A') ADVANCE(1173);
      if (lookahead == 'R') ADVANCE(1101);
      END_STATE();
    case 1005:
      if (lookahead == 'A') ADVANCE(1173);
      if (lookahead == 'T') ADVANCE(1062);
      if (lookahead == 'p') ADVANCE(1063);
      END_STATE();
    case 1006:
      if (lookahead == 'L') ADVANCE(1065);
      if (lookahead == 'R') ADVANCE(1101);
      if (lookahead == 'U') ADVANCE(1155);
      END_STATE();
    case 1007:
      if (lookahead == 'M') ADVANCE(1108);
      END_STATE();
    case 1008:
      if (lookahead == 'N') ADVANCE(1342);
      END_STATE();
    case 1009:
      if (lookahead == 'P') ADVANCE(1126);
      END_STATE();
    case 1010:
      if (lookahead == 'R') ADVANCE(1101);
      END_STATE();
    case 1011:
      if (lookahead == 'a') ADVANCE(1178);
      END_STATE();
    case 1012:
      if (lookahead == 'a') ADVANCE(1041);
      END_STATE();
    case 1013:
      if (lookahead == 'a') ADVANCE(1111);
      if (lookahead == 'y') ADVANCE(1161);
      END_STATE();
    case 1014:
      if (lookahead == 'a') ADVANCE(1040);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'e') ADVANCE(1031);
      if (lookahead == 'v') ADVANCE(1121);
      END_STATE();
    case 1015:
      if (lookahead == 'a') ADVANCE(1179);
      END_STATE();
    case 1016:
      if (lookahead == 'a') ADVANCE(1110);
      if (lookahead == 'y') ADVANCE(1153);
      END_STATE();
    case 1017:
      if (lookahead == 'a') ADVANCE(1168);
      END_STATE();
    case 1018:
      if (lookahead == 'a') ADVANCE(1168);
      if (lookahead == 'i') ADVANCE(1083);
      END_STATE();
    case 1019:
      if (lookahead == 'a') ADVANCE(1168);
      if (lookahead == 'p') ADVANCE(1025);
      END_STATE();
    case 1020:
      if (lookahead == 'a') ADVANCE(1168);
      if (lookahead == 'y') ADVANCE(1161);
      END_STATE();
    case 1021:
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'i') ADVANCE(1047);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == 'p') ADVANCE(988);
      END_STATE();
    case 1022:
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'i') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == 'p') ADVANCE(988);
      END_STATE();
    case 1023:
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'e') ADVANCE(1074);
      END_STATE();
    case 1024:
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'i') ADVANCE(1081);
      END_STATE();
    case 1025:
      if (lookahead == 'a') ADVANCE(1173);
      END_STATE();
    case 1026:
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'r') ADVANCE(1106);
      END_STATE();
    case 1027:
      if (lookahead == 'a') ADVANCE(1125);
      END_STATE();
    case 1028:
      if (lookahead == 'a') ADVANCE(1172);
      END_STATE();
    case 1029:
      if (lookahead == 'a') ADVANCE(988);
      END_STATE();
    case 1030:
      if (lookahead == 'a') ADVANCE(1195);
      END_STATE();
    case 1031:
      if (lookahead == 'a') ADVANCE(1174);
      END_STATE();
    case 1032:
      if (lookahead == 'a') ADVANCE(1196);
      END_STATE();
    case 1033:
      if (lookahead == 'a') ADVANCE(1198);
      END_STATE();
    case 1034:
      if (lookahead == 'a') ADVANCE(1200);
      END_STATE();
    case 1035:
      if (lookahead == 'a') ADVANCE(1201);
      END_STATE();
    case 1036:
      if (lookahead == 'a') ADVANCE(1202);
      END_STATE();
    case 1037:
      if (lookahead == 'a') ADVANCE(1203);
      END_STATE();
    case 1038:
      if (lookahead == 'a') ADVANCE(1194);
      END_STATE();
    case 1039:
      if (lookahead == 'a') ADVANCE(1123);
      END_STATE();
    case 1040:
      if (lookahead == 'b') ADVANCE(1114);
      END_STATE();
    case 1041:
      if (lookahead == 'c') ADVANCE(821);
      END_STATE();
    case 1042:
      if (lookahead == 'c') ADVANCE(1116);
      END_STATE();
    case 1043:
      if (lookahead == 'c') ADVANCE(1118);
      END_STATE();
    case 1044:
      if (lookahead == 'd') ADVANCE(1150);
      if (lookahead == 'p') ADVANCE(1126);
      END_STATE();
    case 1045:
      if (lookahead == 'd') ADVANCE(1030);
      if (lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 1046:
      if (lookahead == 'd') ADVANCE(1011);
      if (lookahead == 'n') ADVANCE(1219);
      END_STATE();
    case 1047:
      if (lookahead == 'd') ADVANCE(1011);
      if (lookahead == 'n') ADVANCE(1231);
      END_STATE();
    case 1048:
      if (lookahead == 'd') ADVANCE(1032);
      END_STATE();
    case 1049:
      if (lookahead == 'd') ADVANCE(1033);
      END_STATE();
    case 1050:
      if (lookahead == 'd') ADVANCE(1033);
      if (lookahead == 'i') ADVANCE(1136);
      END_STATE();
    case 1051:
      if (lookahead == 'd') ADVANCE(1034);
      END_STATE();
    case 1052:
      if (lookahead == 'd') ADVANCE(1034);
      if (lookahead == 'i') ADVANCE(1137);
      END_STATE();
    case 1053:
      if (lookahead == 'd') ADVANCE(1036);
      END_STATE();
    case 1054:
      if (lookahead == 'd') ADVANCE(1036);
      if (lookahead == 'i') ADVANCE(1139);
      END_STATE();
    case 1055:
      if (lookahead == 'd') ADVANCE(1037);
      END_STATE();
    case 1056:
      if (lookahead == 'd') ADVANCE(1037);
      if (lookahead == 'i') ADVANCE(1141);
      END_STATE();
    case 1057:
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == 'l') ADVANCE(1210);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 1058:
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == 'l') ADVANCE(1210);
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 1059:
      if (lookahead == 'e') ADVANCE(1130);
      END_STATE();
    case 1060:
      if (lookahead == 'e') ADVANCE(1169);
      if (lookahead == 'l') ADVANCE(1222);
      if (lookahead == 'm') ADVANCE(988);
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1061:
      if (lookahead == 'e') ADVANCE(1169);
      if (lookahead == 'l') ADVANCE(1224);
      if (lookahead == 'm') ADVANCE(988);
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1062:
      if (lookahead == 'e') ADVANCE(1064);
      END_STATE();
    case 1063:
      if (lookahead == 'e') ADVANCE(1165);
      END_STATE();
    case 1064:
      if (lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 1065:
      if (lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 1066:
      if (lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 1067:
      if (lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 1068:
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 1069:
      if (lookahead == 'e') ADVANCE(1133);
      END_STATE();
    case 1070:
      if (lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 1071:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 1072:
      if (lookahead == 'e') ADVANCE(1197);
      END_STATE();
    case 1073:
      if (lookahead == 'e') ADVANCE(1199);
      END_STATE();
    case 1074:
      if (lookahead == 'f') ADVANCE(1206);
      END_STATE();
    case 1075:
      if (lookahead == 'f') ADVANCE(1105);
      END_STATE();
    case 1076:
      if (lookahead == 'f') ADVANCE(1208);
      END_STATE();
    case 1077:
      if (lookahead == 'f') ADVANCE(976);
      END_STATE();
    case 1078:
      if (lookahead == 'f') ADVANCE(1185);
      END_STATE();
    case 1079:
      if (lookahead == 'f') ADVANCE(988);
      END_STATE();
    case 1080:
      if (lookahead == 'g') ADVANCE(1143);
      END_STATE();
    case 1081:
      if (lookahead == 'g') ADVANCE(1086);
      END_STATE();
    case 1082:
      if (lookahead == 'g') ADVANCE(988);
      END_STATE();
    case 1083:
      if (lookahead == 'g') ADVANCE(1088);
      END_STATE();
    case 1084:
      if (lookahead == 'h') ADVANCE(1059);
      END_STATE();
    case 1085:
      if (lookahead == 'h') ADVANCE(1148);
      if (lookahead == 'q') ADVANCE(1229);
      END_STATE();
    case 1086:
      if (lookahead == 'h') ADVANCE(1208);
      END_STATE();
    case 1087:
      if (lookahead == 'h') ADVANCE(977);
      END_STATE();
    case 1088:
      if (lookahead == 'h') ADVANCE(1215);
      END_STATE();
    case 1089:
      if (lookahead == 'h') ADVANCE(972);
      END_STATE();
    case 1090:
      if (lookahead == 'h') ADVANCE(978);
      END_STATE();
    case 1091:
      if (lookahead == 'h') ADVANCE(979);
      END_STATE();
    case 1092:
      if (lookahead == 'h') ADVANCE(1000);
      END_STATE();
    case 1093:
      if (lookahead == 'h') ADVANCE(988);
      END_STATE();
    case 1094:
      if (lookahead == 'h') ADVANCE(987);
      END_STATE();
    case 1095:
      if (lookahead == 'h') ADVANCE(994);
      END_STATE();
    case 1096:
      if (lookahead == 'h') ADVANCE(1066);
      END_STATE();
    case 1097:
      if (lookahead == 'h') ADVANCE(1068);
      END_STATE();
    case 1098:
      if (lookahead == 'h') ADVANCE(1070);
      END_STATE();
    case 1099:
      if (lookahead == 'h') ADVANCE(1069);
      END_STATE();
    case 1100:
      if (lookahead == 'h') ADVANCE(1071);
      END_STATE();
    case 1101:
      if (lookahead == 'i') ADVANCE(1081);
      END_STATE();
    case 1102:
      if (lookahead == 'i') ADVANCE(1175);
      END_STATE();
    case 1103:
      if (lookahead == 'i') ADVANCE(1080);
      if (lookahead == 'o') ADVANCE(1205);
      END_STATE();
    case 1104:
      if (lookahead == 'i') ADVANCE(988);
      END_STATE();
    case 1105:
      if (lookahead == 'i') ADVANCE(1133);
      END_STATE();
    case 1106:
      if (lookahead == 'i') ADVANCE(1083);
      END_STATE();
    case 1107:
      if (lookahead == 'i') ADVANCE(1138);
      END_STATE();
    case 1108:
      if (lookahead == 'i') ADVANCE(1139);
      END_STATE();
    case 1109:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 1110:
      if (lookahead == 'l') ADVANCE(1077);
      END_STATE();
    case 1111:
      if (lookahead == 'l') ADVANCE(1077);
      if (lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1112:
      if (lookahead == 'l') ADVANCE(1017);
      if (lookahead == 'q') ADVANCE(1216);
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 1113:
      if (lookahead == 'l') ADVANCE(975);
      END_STATE();
    case 1114:
      if (lookahead == 'l') ADVANCE(1029);
      END_STATE();
    case 1115:
      if (lookahead == 'l') ADVANCE(1064);
      END_STATE();
    case 1116:
      if (lookahead == 'l') ADVANCE(988);
      END_STATE();
    case 1117:
      if (lookahead == 'l') ADVANCE(988);
      if (lookahead == 'r') ADVANCE(988);
      END_STATE();
    case 1118:
      if (lookahead == 'l') ADVANCE(996);
      END_STATE();
    case 1119:
      if (lookahead == 'l') ADVANCE(993);
      END_STATE();
    case 1120:
      if (lookahead == 'l') ADVANCE(995);
      END_STATE();
    case 1121:
      if (lookahead == 'l') ADVANCE(1214);
      END_STATE();
    case 1122:
      if (lookahead == 'l') ADVANCE(1226);
      END_STATE();
    case 1123:
      if (lookahead == 'l') ADVANCE(1190);
      END_STATE();
    case 1124:
      if (lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 1125:
      if (lookahead == 'l') ADVANCE(1192);
      END_STATE();
    case 1126:
      if (lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 1127:
      if (lookahead == 'm') ADVANCE(988);
      END_STATE();
    case 1128:
      if (lookahead == 'n') ADVANCE(1075);
      END_STATE();
    case 1129:
      if (lookahead == 'n') ADVANCE(1082);
      END_STATE();
    case 1130:
      if (lookahead == 'n') ADVANCE(977);
      END_STATE();
    case 1131:
      if (lookahead == 'n') ADVANCE(972);
      END_STATE();
    case 1132:
      if (lookahead == 'n') ADVANCE(1000);
      END_STATE();
    case 1133:
      if (lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 1134:
      if (lookahead == 'n') ADVANCE(987);
      END_STATE();
    case 1135:
      if (lookahead == 'n') ADVANCE(994);
      END_STATE();
    case 1136:
      if (lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 1137:
      if (lookahead == 'n') ADVANCE(1228);
      END_STATE();
    case 1138:
      if (lookahead == 'n') ADVANCE(1223);
      END_STATE();
    case 1139:
      if (lookahead == 'n') ADVANCE(1230);
      END_STATE();
    case 1140:
      if (lookahead == 'n') ADVANCE(1231);
      END_STATE();
    case 1141:
      if (lookahead == 'n') ADVANCE(1232);
      END_STATE();
    case 1142:
      if (lookahead == 'o') ADVANCE(1235);
      END_STATE();
    case 1143:
      if (lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 1144:
      if (lookahead == 'o') ADVANCE(1127);
      END_STATE();
    case 1145:
      if (lookahead == 'o') ADVANCE(1236);
      END_STATE();
    case 1146:
      if (lookahead == 'o') ADVANCE(1113);
      END_STATE();
    case 1147:
      if (lookahead == 'o') ADVANCE(1078);
      END_STATE();
    case 1148:
      if (lookahead == 'o') ADVANCE(1171);
      END_STATE();
    case 1149:
      if (lookahead == 'o') ADVANCE(1119);
      END_STATE();
    case 1150:
      if (lookahead == 'o') ADVANCE(1212);
      END_STATE();
    case 1151:
      if (lookahead == 'o') ADVANCE(1120);
      END_STATE();
    case 1152:
      if (lookahead == 'p') ADVANCE(1005);
      END_STATE();
    case 1153:
      if (lookahead == 'p') ADVANCE(1084);
      END_STATE();
    case 1154:
      if (lookahead == 'p') ADVANCE(988);
      END_STATE();
    case 1155:
      if (lookahead == 'p') ADVANCE(1025);
      END_STATE();
    case 1156:
      if (lookahead == 'p') ADVANCE(1096);
      END_STATE();
    case 1157:
      if (lookahead == 'p') ADVANCE(1097);
      END_STATE();
    case 1158:
      if (lookahead == 'p') ADVANCE(1126);
      END_STATE();
    case 1159:
      if (lookahead == 'p') ADVANCE(1126);
      if (lookahead == 'q') ADVANCE(1221);
      if (lookahead == 'x') ADVANCE(1043);
      END_STATE();
    case 1160:
      if (lookahead == 'p') ADVANCE(1126);
      if (lookahead == 'u') ADVANCE(1117);
      END_STATE();
    case 1161:
      if (lookahead == 'p') ADVANCE(1098);
      END_STATE();
    case 1162:
      if (lookahead == 'p') ADVANCE(1099);
      END_STATE();
    case 1163:
      if (lookahead == 'p') ADVANCE(1100);
      END_STATE();
    case 1164:
      if (lookahead == 'q') ADVANCE(1234);
      END_STATE();
    case 1165:
      if (lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(991);
      END_STATE();
    case 1167:
      if (lookahead == 'r') ADVANCE(1012);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1169:
      if (lookahead == 'r') ADVANCE(1154);
      END_STATE();
    case 1170:
      if (lookahead == 'r') ADVANCE(1104);
      END_STATE();
    case 1171:
      if (lookahead == 'r') ADVANCE(1209);
      END_STATE();
    case 1172:
      if (lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 1173:
      if (lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 1174:
      if (lookahead == 'r') ADVANCE(1166);
      END_STATE();
    case 1175:
      if (lookahead == 'r') ADVANCE(988);
      END_STATE();
    case 1176:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1177:
      if (lookahead == 'r') ADVANCE(1079);
      END_STATE();
    case 1178:
      if (lookahead == 's') ADVANCE(1204);
      END_STATE();
    case 1179:
      if (lookahead == 's') ADVANCE(1087);
      END_STATE();
    case 1180:
      if (lookahead == 's') ADVANCE(1007);
      END_STATE();
    case 1181:
      if (lookahead == 's') ADVANCE(986);
      END_STATE();
    case 1182:
      if (lookahead == 's') ADVANCE(1009);
      END_STATE();
    case 1183:
      if (lookahead == 's') ADVANCE(971);
      END_STATE();
    case 1184:
      if (lookahead == 's') ADVANCE(999);
      END_STATE();
    case 1185:
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 1186:
      if (lookahead == 's') ADVANCE(970);
      END_STATE();
    case 1187:
      if (lookahead == 's') ADVANCE(972);
      END_STATE();
    case 1188:
      if (lookahead == 's') ADVANCE(981);
      END_STATE();
    case 1189:
      if (lookahead == 's') ADVANCE(1000);
      END_STATE();
    case 1190:
      if (lookahead == 's') ADVANCE(988);
      END_STATE();
    case 1191:
      if (lookahead == 's') ADVANCE(987);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 1193:
      if (lookahead == 's') ADVANCE(994);
      END_STATE();
    case 1194:
      if (lookahead == 's') ADVANCE(1211);
      END_STATE();
    case 1195:
      if (lookahead == 's') ADVANCE(1091);
      END_STATE();
    case 1196:
      if (lookahead == 's') ADVANCE(1090);
      END_STATE();
    case 1197:
      if (lookahead == 's') ADVANCE(1213);
      END_STATE();
    case 1198:
      if (lookahead == 's') ADVANCE(1089);
      END_STATE();
    case 1199:
      if (lookahead == 's') ADVANCE(1212);
      END_STATE();
    case 1200:
      if (lookahead == 's') ADVANCE(1092);
      END_STATE();
    case 1201:
      if (lookahead == 's') ADVANCE(1094);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(1093);
      END_STATE();
    case 1203:
      if (lookahead == 's') ADVANCE(1095);
      END_STATE();
    case 1204:
      if (lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1205:
      if (lookahead == 't') ADVANCE(992);
      if (lookahead == 'x') ADVANCE(1160);
      END_STATE();
    case 1206:
      if (lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 1207:
      if (lookahead == 't') ADVANCE(1026);
      END_STATE();
    case 1208:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 1209:
      if (lookahead == 't') ADVANCE(1006);
      END_STATE();
    case 1210:
      if (lookahead == 't') ADVANCE(1170);
      END_STATE();
    case 1211:
      if (lookahead == 't') ADVANCE(983);
      END_STATE();
    case 1212:
      if (lookahead == 't') ADVANCE(988);
      END_STATE();
    case 1213:
      if (lookahead == 't') ADVANCE(996);
      END_STATE();
    case 1214:
      if (lookahead == 't') ADVANCE(997);
      END_STATE();
    case 1215:
      if (lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 1216:
      if (lookahead == 'u') ADVANCE(989);
      END_STATE();
    case 1217:
      if (lookahead == 'u') ADVANCE(1183);
      END_STATE();
    case 1218:
      if (lookahead == 'u') ADVANCE(1072);
      END_STATE();
    case 1219:
      if (lookahead == 'u') ADVANCE(1188);
      END_STATE();
    case 1220:
      if (lookahead == 'u') ADVANCE(1180);
      END_STATE();
    case 1221:
      if (lookahead == 'u') ADVANCE(1027);
      END_STATE();
    case 1222:
      if (lookahead == 'u') ADVANCE(1181);
      END_STATE();
    case 1223:
      if (lookahead == 'u') ADVANCE(1182);
      END_STATE();
    case 1224:
      if (lookahead == 'u') ADVANCE(1184);
      END_STATE();
    case 1225:
      if (lookahead == 'u') ADVANCE(1177);
      END_STATE();
    case 1226:
      if (lookahead == 'u') ADVANCE(1186);
      END_STATE();
    case 1227:
      if (lookahead == 'u') ADVANCE(1187);
      END_STATE();
    case 1228:
      if (lookahead == 'u') ADVANCE(1189);
      END_STATE();
    case 1229:
      if (lookahead == 'u') ADVANCE(1028);
      END_STATE();
    case 1230:
      if (lookahead == 'u') ADVANCE(1190);
      END_STATE();
    case 1231:
      if (lookahead == 'u') ADVANCE(1191);
      END_STATE();
    case 1232:
      if (lookahead == 'u') ADVANCE(1193);
      END_STATE();
    case 1233:
      if (lookahead == 'u') ADVANCE(1073);
      END_STATE();
    case 1234:
      if (lookahead == 'u') ADVANCE(1039);
      END_STATE();
    case 1235:
      if (lookahead == 'w') ADVANCE(1038);
      END_STATE();
    case 1236:
      if (lookahead == 'w') ADVANCE(988);
      END_STATE();
    case 1237:
      if (lookahead == 'x') ADVANCE(1042);
      END_STATE();
    case 1238:
      if (lookahead == 'y') ADVANCE(1156);
      END_STATE();
    case 1239:
      if (lookahead == 'y') ADVANCE(1157);
      END_STATE();
    case 1240:
      if (lookahead == 'y') ADVANCE(1162);
      END_STATE();
    case 1241:
      if (lookahead == 'y') ADVANCE(1163);
      END_STATE();
    case 1242:
      if (lookahead == 65038) ADVANCE(1326);
      END_STATE();
    case 1243:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1244)
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1244:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1244)
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1245:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1257);
      END_STATE();
    case 1246:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(988);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(988);
      END_STATE();
    case 1247:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(988);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(988);
      END_STATE();
    case 1248:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(988);
      END_STATE();
    case 1249:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(988);
      END_STATE();
    case 1250:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(997);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(996);
      END_STATE();
    case 1251:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(976);
      END_STATE();
    case 1252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(988);
      END_STATE();
    case 1253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 1254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 1255:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(988);
      END_STATE();
    case 1256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1334);
      END_STATE();
    case 1257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1256);
      END_STATE();
    case 1258:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1259:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1330);
      END_STATE();
    case 1260:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 1261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1358);
      END_STATE();
    case 1262:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1291);
      END_STATE();
    case 1263:
      if (eof) ADVANCE(1270);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(692);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '#') ADVANCE(1339);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1338);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1319);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1308);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1312);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1307);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1264:
      if (eof) ADVANCE(1270);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(692);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '#') ADVANCE(1339);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1338);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1317);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1265:
      if (eof) ADVANCE(1270);
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(703);
      if (lookahead == '!') ADVANCE(1349);
      if (lookahead == '$') ADVANCE(452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1293);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '1') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(1348);
      if (lookahead == '?') ADVANCE(1349);
      if (lookahead == '@') ADVANCE(1329);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1312);
      if (lookahead == 'O') ADVANCE(1374);
      if (lookahead == 'P') ADVANCE(1322);
      if (lookahead == 'R') ADVANCE(1311);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(449);
      if (lookahead == '[') ADVANCE(1284);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1383);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == '{') ADVANCE(1296);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1351);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 9817) ADVANCE(1325);
      if (lookahead == 9823) ADVANCE(435);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1266:
      if (eof) ADVANCE(1270);
      if (lookahead == '\n') ADVANCE(713);
      if (lookahead == '\r') ADVANCE(704);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '*') ADVANCE(1396);
      if (lookahead == '0') ADVANCE(1378);
      if (lookahead == '1') ADVANCE(1360);
      if (lookahead == 'O') ADVANCE(1375);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 189) ADVANCE(1392);
      if (lookahead == 8270) ADVANCE(1408);
      if (lookahead == 8727) ADVANCE(1400);
      if (lookahead == 10033) ADVANCE(1404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1267:
      if (eof) ADVANCE(1270);
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(714);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(714);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1268:
      if (eof) ADVANCE(1270);
      if (lookahead == '"') ADVANCE(1286);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1275);
      if (lookahead == '&') ADVANCE(729);
      if (lookahead == '(') ADVANCE(1292);
      if (lookahead == ')') ADVANCE(1294);
      if (lookahead == '*') ADVANCE(1395);
      if (lookahead == '-') ADVANCE(1363);
      if (lookahead == '/') ADVANCE(1386);
      if (lookahead == '0') ADVANCE(1380);
      if (lookahead == '1') ADVANCE(1359);
      if (lookahead == '2') ADVANCE(1390);
      if (lookahead == '@') ADVANCE(1328);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1310);
      if (lookahead == 'O') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1321);
      if (lookahead == '[') ADVANCE(1283);
      if (lookahead == ']') ADVANCE(1285);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1303);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(1295);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == 189) ADVANCE(1391);
      if (lookahead == 8208) ADVANCE(1367);
      if (lookahead == 8211) ADVANCE(1369);
      if (lookahead == 8212) ADVANCE(1371);
      if (lookahead == 8270) ADVANCE(1407);
      if (lookahead == 8722) ADVANCE(1365);
      if (lookahead == 8725) ADVANCE(1388);
      if (lookahead == 8727) ADVANCE(1399);
      if (lookahead == 9817) ADVANCE(1324);
      if (lookahead == 9823) ADVANCE(1242);
      if (lookahead == 10033) ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1268)
      END_STATE();
    case 1269:
      if (eof) ADVANCE(1270);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1276);
      if (lookahead == '[') ADVANCE(1284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1269)
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1271);
      if (lookahead == '\r') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(701);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1273);
      if (lookahead == '\r') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1274);
      if (lookahead == '\r') ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(709);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(714);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1274);
      if (lookahead == '\r') ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1280);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(747);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1288);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1288);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1290);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1290);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1298);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1301);
      if (lookahead == '\r') ADVANCE(1300);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1299);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1302);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1302);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1302);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(1342);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1355);
      if (lookahead == '\r') ADVANCE(1343);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(1342);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1342);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(1342);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1257);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(451);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1259);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1339);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1351);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(17);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(724);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1337);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(734);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1337);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1342);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(744);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1351);
      if (lookahead == '-') ADVANCE(1335);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(15);
      if (lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1336);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1351);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1336);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(15);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(732);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(1342);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1334);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(743);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(727);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(728);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(747);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(1342);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1342);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1358);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(749);
      if (lookahead == '\r') ADVANCE(698);
      if (lookahead == '.') ADVANCE(1299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(450);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1258);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(749);
      if (lookahead == '\r') ADVANCE(698);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(450);
      if (lookahead == '.') ADVANCE(1299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1258);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1258);
      if (lookahead == '.') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(450);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(1258);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_9);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_10);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_11);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1269},
  [2] = {.lex_state = 1264},
  [3] = {.lex_state = 1264},
  [4] = {.lex_state = 702},
  [5] = {.lex_state = 718},
  [6] = {.lex_state = 1263},
  [7] = {.lex_state = 1263},
  [8] = {.lex_state = 1264},
  [9] = {.lex_state = 1263},
  [10] = {.lex_state = 1264},
  [11] = {.lex_state = 1264},
  [12] = {.lex_state = 1264},
  [13] = {.lex_state = 1264},
  [14] = {.lex_state = 1264},
  [15] = {.lex_state = 1264},
  [16] = {.lex_state = 1264},
  [17] = {.lex_state = 1264},
  [18] = {.lex_state = 1264},
  [19] = {.lex_state = 1264},
  [20] = {.lex_state = 1265},
  [21] = {.lex_state = 1264},
  [22] = {.lex_state = 1264},
  [23] = {.lex_state = 702},
  [24] = {.lex_state = 1264},
  [25] = {.lex_state = 1264},
  [26] = {.lex_state = 1264},
  [27] = {.lex_state = 1264},
  [28] = {.lex_state = 1264},
  [29] = {.lex_state = 1264},
  [30] = {.lex_state = 1264},
  [31] = {.lex_state = 1264},
  [32] = {.lex_state = 702},
  [33] = {.lex_state = 1264},
  [34] = {.lex_state = 1264},
  [35] = {.lex_state = 702},
  [36] = {.lex_state = 702},
  [37] = {.lex_state = 718},
  [38] = {.lex_state = 718},
  [39] = {.lex_state = 718},
  [40] = {.lex_state = 718},
  [41] = {.lex_state = 1266},
  [42] = {.lex_state = 1266},
  [43] = {.lex_state = 717},
  [44] = {.lex_state = 717},
  [45] = {.lex_state = 718},
  [46] = {.lex_state = 717},
  [47] = {.lex_state = 718},
  [48] = {.lex_state = 710},
  [49] = {.lex_state = 718},
  [50] = {.lex_state = 718},
  [51] = {.lex_state = 718},
  [52] = {.lex_state = 718},
  [53] = {.lex_state = 718},
  [54] = {.lex_state = 718},
  [55] = {.lex_state = 718},
  [56] = {.lex_state = 718},
  [57] = {.lex_state = 718},
  [58] = {.lex_state = 718},
  [59] = {.lex_state = 718},
  [60] = {.lex_state = 718},
  [61] = {.lex_state = 718},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 718},
  [64] = {.lex_state = 718},
  [65] = {.lex_state = 718},
  [66] = {.lex_state = 718},
  [67] = {.lex_state = 718},
  [68] = {.lex_state = 718},
  [69] = {.lex_state = 718},
  [70] = {.lex_state = 718},
  [71] = {.lex_state = 1269},
  [72] = {.lex_state = 1269},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1269},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1269},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1264},
  [81] = {.lex_state = 1264},
  [82] = {.lex_state = 765},
  [83] = {.lex_state = 1269},
  [84] = {.lex_state = 1264},
  [85] = {.lex_state = 1269},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1267},
  [88] = {.lex_state = 1264},
  [89] = {.lex_state = 1264},
  [90] = {.lex_state = 721},
  [91] = {.lex_state = 765},
  [92] = {.lex_state = 1264},
  [93] = {.lex_state = 1264},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 721},
  [96] = {.lex_state = 1269},
  [97] = {.lex_state = 765},
  [98] = {.lex_state = 721},
  [99] = {.lex_state = 1269},
  [100] = {.lex_state = 1269},
  [101] = {.lex_state = 1269},
  [102] = {.lex_state = 1267},
  [103] = {.lex_state = 1269},
  [104] = {.lex_state = 1269},
  [105] = {.lex_state = 765},
  [106] = {.lex_state = 1269},
  [107] = {.lex_state = 1269},
  [108] = {.lex_state = 1269},
  [109] = {.lex_state = 765},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1269},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 765},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 765},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 765},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1298},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1280},
  [138] = {.lex_state = 716},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 805},
  [145] = {.lex_state = 805},
  [146] = {.lex_state = 765},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 805},
  [149] = {.lex_state = 805},
  [150] = {.lex_state = 765},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1280},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1280},
  [155] = {.lex_state = 765},
  [156] = {.lex_state = 1280},
  [157] = {.lex_state = 1298},
  [158] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_close] = ACTIONS(1),
    [sym_double_quote] = ACTIONS(1),
    [aux_sym_tagpair_value_contents_token2] = ACTIONS(1),
    [sym_variation_delimiter_open] = ACTIONS(1),
    [sym_variation_delimiter_close] = ACTIONS(1),
    [sym_inline_comment_delimiter_open] = ACTIONS(1),
    [sym_inline_comment_delimiter_close] = ACTIONS(1),
    [sym__san_file] = ACTIONS(1),
    [sym__san_rank] = ACTIONS(1),
    [sym__san_promotable_piece] = ACTIONS(1),
    [sym__san_major_or_minor_piece] = ACTIONS(1),
    [sym__san_capture_symbol] = ACTIONS(1),
    [sym__san_promotion_symbol] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym__san_move_castle] = ACTIONS(1),
    [sym_check_or_mate_condition] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_result_code_token1] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [aux_sym_result_code_token2] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [aux_sym_result_code_token3] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [aux_sym_result_code_token4] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [aux_sym_result_code_token5] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_result_code_token6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [aux_sym_result_code_token7] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [aux_sym_result_code_token8] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_result_code_token9] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [aux_sym_result_code_token10] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [aux_sym_result_code_token11] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [aux_sym_result_code_token12] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(136),
    [sym_game] = STATE(101),
    [sym_freestanding_comment] = STATE(77),
    [sym_rest_of_line_comment] = STATE(78),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(35),
    [aux_sym_series_of_games_repeat1] = STATE(72),
    [aux_sym_freestanding_comment_repeat1] = STATE(78),
    [aux_sym_header_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [sym_tagpair_delimiter_open] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(13), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(18), 1,
      sym_variation_delimiter_open,
    ACTIONS(21), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(24), 1,
      sym_move_number,
    ACTIONS(27), 1,
      sym__san_file,
    ACTIONS(30), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(42), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(39), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(33), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(16), 16,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [80] = 18,
    ACTIONS(47), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(51), 1,
      sym_variation_delimiter_open,
    ACTIONS(53), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(55), 1,
      sym_move_number,
    ACTIONS(57), 1,
      sym__san_file,
    ACTIONS(59), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(65), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(61), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(49), 16,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [160] = 23,
    ACTIONS(47), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(51), 1,
      sym_variation_delimiter_open,
    ACTIONS(53), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(55), 1,
      sym_move_number,
    ACTIONS(57), 1,
      sym__san_file,
    ACTIONS(59), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_annotation,
    ACTIONS(69), 1,
      sym__empty_line,
    ACTIONS(71), 1,
      anon_sym_1,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    STATE(41), 1,
      sym_movetext,
    STATE(80), 1,
      sym_result_code,
    ACTIONS(65), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(75), 2,
      anon_sym_8,
      aux_sym_result_code_token8,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(61), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(77), 8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [249] = 23,
    ACTIONS(59), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(61), 1,
      anon_sym_P,
    ACTIONS(67), 1,
      sym_annotation,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(79), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(81), 1,
      sym_variation_delimiter_open,
    ACTIONS(83), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(85), 1,
      sym_move_number,
    ACTIONS(87), 1,
      sym__san_file,
    ACTIONS(91), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    STATE(42), 1,
      sym_movetext,
    STATE(81), 1,
      sym_result_code,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(93), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(95), 2,
      anon_sym_8,
      aux_sym_result_code_token8,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(97), 8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [337] = 5,
    ACTIONS(103), 1,
      sym__san_promotable_piece,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    STATE(15), 1,
      sym__san_promotion,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(101), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [383] = 5,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    ACTIONS(111), 1,
      sym__san_promotable_piece,
    STATE(17), 1,
      sym__san_promotion,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(109), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [429] = 4,
    ACTIONS(117), 1,
      sym__san_capture_symbol,
    STATE(18), 1,
      sym__san_destination,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [472] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 32,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [511] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(121), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [548] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(125), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [585] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(129), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [622] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(133), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [659] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(137), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [696] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(141), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [733] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(145), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [770] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(149), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [807] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(153), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [844] = 2,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(157), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [881] = 3,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 30,
      sym__empty_line,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [920] = 3,
    ACTIONS(169), 1,
      sym_check_or_mate_condition,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(167), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [959] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [996] = 5,
    ACTIONS(171), 1,
      sym__empty_line,
    ACTIONS(175), 1,
      sym_tagpair_delimiter_open,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    ACTIONS(173), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1038] = 2,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(180), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1074] = 2,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(184), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1110] = 2,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(188), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1146] = 2,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(192), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1182] = 2,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(196), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1218] = 2,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(200), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1254] = 2,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(204), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1290] = 2,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(208), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1326] = 5,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(210), 1,
      sym__empty_line,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    ACTIONS(212), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1368] = 2,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(216), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1404] = 2,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(220), 29,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1440] = 2,
    ACTIONS(222), 1,
      sym__empty_line,
    ACTIONS(224), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1474] = 2,
    ACTIONS(226), 1,
      sym__empty_line,
    ACTIONS(228), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      aux_sym_result_code_token8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1508] = 19,
    ACTIONS(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(232), 1,
      sym_variation_delimiter_open,
    ACTIONS(234), 1,
      sym_variation_delimiter_close,
    ACTIONS(236), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(238), 1,
      sym_move_number,
    ACTIONS(240), 1,
      sym__san_file,
    ACTIONS(242), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(244), 1,
      anon_sym_P,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(252), 1,
      sym_annotation,
    STATE(39), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    STATE(142), 1,
      sym_variation_movetext,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1574] = 19,
    ACTIONS(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(232), 1,
      sym_variation_delimiter_open,
    ACTIONS(236), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(238), 1,
      sym_move_number,
    ACTIONS(240), 1,
      sym__san_file,
    ACTIONS(242), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(244), 1,
      anon_sym_P,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(252), 1,
      sym_annotation,
    ACTIONS(254), 1,
      sym_variation_delimiter_close,
    STATE(39), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    STATE(140), 1,
      sym_variation_movetext,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1640] = 18,
    ACTIONS(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(232), 1,
      sym_variation_delimiter_open,
    ACTIONS(236), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(238), 1,
      sym_move_number,
    ACTIONS(240), 1,
      sym__san_file,
    ACTIONS(242), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(244), 1,
      anon_sym_P,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(252), 1,
      sym_annotation,
    ACTIONS(256), 1,
      sym_variation_delimiter_close,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1703] = 18,
    ACTIONS(258), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(261), 1,
      sym_variation_delimiter_open,
    ACTIONS(264), 1,
      sym_variation_delimiter_close,
    ACTIONS(266), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(269), 1,
      sym_move_number,
    ACTIONS(272), 1,
      sym__san_file,
    ACTIONS(275), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(278), 1,
      anon_sym_P,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_annotation,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    ACTIONS(281), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(287), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1766] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym__empty_line,
    STATE(88), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_8,
      aux_sym_result_code_token8,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(297), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1803] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym__empty_line,
    STATE(84), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_8,
      aux_sym_result_code_token8,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(303), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 8,
      anon_sym_STAR,
      aux_sym_result_code_token9,
      anon_sym_9,
      aux_sym_result_code_token10,
      anon_sym_10,
      aux_sym_result_code_token11,
      anon_sym_11,
      aux_sym_result_code_token12,
  [1840] = 5,
    ACTIONS(305), 1,
      sym__san_promotable_piece,
    ACTIONS(307), 1,
      sym__san_promotion_symbol,
    STATE(50), 1,
      sym__san_promotion,
    ACTIONS(109), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(107), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1869] = 5,
    ACTIONS(307), 1,
      sym__san_promotion_symbol,
    ACTIONS(309), 1,
      sym__san_promotable_piece,
    STATE(52), 1,
      sym__san_promotion,
    ACTIONS(101), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(99), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1898] = 4,
    ACTIONS(311), 1,
      sym__san_capture_symbol,
    STATE(47), 1,
      sym__san_destination,
    ACTIONS(115), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(113), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1924] = 2,
    ACTIONS(115), 6,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(113), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1946] = 2,
    ACTIONS(153), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(151), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1966] = 2,
    ACTIONS(313), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1986] = 2,
    ACTIONS(115), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(113), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2006] = 2,
    ACTIONS(149), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(147), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2026] = 2,
    ACTIONS(157), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(155), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2046] = 2,
    ACTIONS(141), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(139), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2066] = 2,
    ACTIONS(137), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(135), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2086] = 2,
    ACTIONS(121), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(119), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2106] = 2,
    ACTIONS(133), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(131), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2126] = 3,
    ACTIONS(315), 1,
      sym_check_or_mate_condition,
    ACTIONS(167), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(165), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2148] = 2,
    ACTIONS(125), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(123), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2168] = 2,
    ACTIONS(145), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(143), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2188] = 2,
    ACTIONS(129), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(127), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2208] = 2,
    ACTIONS(319), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(317), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2227] = 2,
    ACTIONS(323), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(321), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2246] = 2,
    ACTIONS(327), 4,
      anon_sym_SLASH,
      aux_sym_result_code_token6,
      anon_sym_7,
      aux_sym_result_code_token7,
    ACTIONS(325), 10,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
  [2265] = 2,
    ACTIONS(204), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(202), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2284] = 2,
    ACTIONS(331), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(329), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2303] = 2,
    ACTIONS(335), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(333), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2322] = 2,
    ACTIONS(339), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(337), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2341] = 2,
    ACTIONS(196), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(194), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2360] = 2,
    ACTIONS(184), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(182), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2379] = 2,
    ACTIONS(192), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(190), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2398] = 2,
    ACTIONS(180), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(178), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2417] = 11,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(346), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(349), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(71), 1,
      aux_sym_series_of_games_repeat1,
    STATE(86), 1,
      sym_freestanding_comment,
    STATE(101), 1,
      sym_game,
    STATE(85), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2452] = 11,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(71), 1,
      aux_sym_series_of_games_repeat1,
    STATE(79), 1,
      sym_freestanding_comment,
    STATE(101), 1,
      sym_game,
    STATE(78), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2487] = 1,
    ACTIONS(354), 10,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
  [2500] = 1,
    ACTIONS(356), 10,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
  [2513] = 1,
    ACTIONS(358), 10,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
  [2526] = 5,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(365), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(368), 1,
      sym_tagpair_delimiter_open,
    STATE(76), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2543] = 6,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(104), 1,
      sym_game,
  [2562] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(378), 1,
      sym_tagpair_delimiter_open,
    STATE(76), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2579] = 6,
    ACTIONS(372), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(104), 1,
      sym_game,
  [2598] = 3,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      sym__empty_line,
    ACTIONS(386), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2610] = 3,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      sym__empty_line,
    ACTIONS(392), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2622] = 5,
    ACTIONS(394), 1,
      sym__san_file,
    ACTIONS(396), 1,
      sym__san_rank,
    ACTIONS(398), 1,
      sym__san_capture_symbol,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(58), 1,
      sym__san_destination,
  [2638] = 4,
    ACTIONS(368), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(402), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(405), 1,
      sym_old_style_twic_section_comment,
    STATE(83), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2652] = 3,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 1,
      sym__empty_line,
    ACTIONS(412), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2664] = 4,
    ACTIONS(378), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(414), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(416), 1,
      sym_old_style_twic_section_comment,
    STATE(83), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2678] = 5,
    ACTIONS(372), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(104), 1,
      sym_game,
  [2694] = 3,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2706] = 3,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      sym__empty_line,
    ACTIONS(424), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2718] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(428), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2728] = 4,
    ACTIONS(430), 1,
      sym_double_quote,
    STATE(98), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(139), 1,
      sym_tagpair_value_contents,
    ACTIONS(432), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2742] = 5,
    ACTIONS(434), 1,
      sym__san_file,
    ACTIONS(436), 1,
      sym__san_rank,
    ACTIONS(438), 1,
      sym__san_capture_symbol,
    ACTIONS(440), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym__san_destination,
  [2758] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(444), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2768] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(448), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2778] = 1,
    ACTIONS(450), 4,
      anon_sym_SLASH,
      aux_sym_result_code_token6,
      anon_sym_7,
      aux_sym_result_code_token7,
  [2785] = 3,
    ACTIONS(452), 1,
      sym_double_quote,
    STATE(95), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(454), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2796] = 2,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(459), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2805] = 4,
    ACTIONS(461), 1,
      sym__san_file,
    ACTIONS(463), 1,
      sym__san_rank,
    ACTIONS(465), 1,
      sym__san_capture_symbol,
    STATE(54), 1,
      sym__san_destination,
  [2818] = 3,
    ACTIONS(467), 1,
      sym_double_quote,
    STATE(95), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(469), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2829] = 2,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(473), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2838] = 2,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(184), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2847] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(477), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2856] = 2,
    ACTIONS(479), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2865] = 2,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(483), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2874] = 2,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(487), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2883] = 4,
    ACTIONS(489), 1,
      sym__san_file,
    ACTIONS(491), 1,
      sym__san_rank,
    ACTIONS(493), 1,
      sym__san_capture_symbol,
    STATE(10), 1,
      sym__san_destination,
  [2896] = 2,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(497), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2905] = 2,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(501), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2914] = 2,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(505), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2923] = 1,
    ACTIONS(507), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [2929] = 3,
    ACTIONS(461), 1,
      sym__san_file,
    ACTIONS(465), 1,
      sym__san_capture_symbol,
    STATE(54), 1,
      sym__san_destination,
  [2939] = 2,
    ACTIONS(182), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(184), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2947] = 3,
    ACTIONS(489), 1,
      sym__san_file,
    ACTIONS(493), 1,
      sym__san_capture_symbol,
    STATE(10), 1,
      sym__san_destination,
  [2957] = 1,
    ACTIONS(507), 2,
      anon_sym_8,
      aux_sym_result_code_token8,
  [2962] = 2,
    ACTIONS(509), 1,
      sym__san_rank,
    ACTIONS(511), 1,
      sym__san_capture_symbol,
  [2969] = 2,
    ACTIONS(513), 1,
      sym__san_file,
    STATE(6), 1,
      sym__san_destination,
  [2976] = 2,
    ACTIONS(489), 1,
      sym__san_file,
    STATE(10), 1,
      sym__san_destination,
  [2983] = 2,
    ACTIONS(461), 1,
      sym__san_file,
    STATE(51), 1,
      sym__san_destination,
  [2990] = 2,
    ACTIONS(461), 1,
      sym__san_file,
    STATE(55), 1,
      sym__san_destination,
  [2997] = 2,
    ACTIONS(489), 1,
      sym__san_file,
    STATE(11), 1,
      sym__san_destination,
  [3004] = 2,
    ACTIONS(515), 1,
      sym__san_file,
    STATE(44), 1,
      sym__san_destination,
  [3011] = 2,
    ACTIONS(489), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_destination,
  [3018] = 2,
    ACTIONS(489), 1,
      sym__san_file,
    STATE(19), 1,
      sym__san_destination,
  [3025] = 2,
    ACTIONS(489), 1,
      sym__san_file,
    STATE(13), 1,
      sym__san_destination,
  [3032] = 2,
    ACTIONS(461), 1,
      sym__san_file,
    STATE(54), 1,
      sym__san_destination,
  [3039] = 2,
    ACTIONS(517), 1,
      sym__san_rank,
    ACTIONS(519), 1,
      sym__san_capture_symbol,
  [3046] = 2,
    ACTIONS(461), 1,
      sym__san_file,
    STATE(57), 1,
      sym__san_destination,
  [3053] = 2,
    ACTIONS(521), 1,
      sym_double_quote,
    STATE(135), 1,
      sym__tagpair_value,
  [3060] = 2,
    ACTIONS(489), 1,
      sym__san_file,
    STATE(18), 1,
      sym__san_destination,
  [3067] = 2,
    ACTIONS(461), 1,
      sym__san_file,
    STATE(59), 1,
      sym__san_destination,
  [3074] = 2,
    ACTIONS(461), 1,
      sym__san_file,
    STATE(47), 1,
      sym__san_destination,
  [3081] = 1,
    ACTIONS(517), 1,
      sym__san_rank,
  [3085] = 1,
    ACTIONS(523), 1,
      anon_sym_AT,
  [3089] = 1,
    ACTIONS(525), 1,
      sym_inline_comment_text,
  [3093] = 1,
    ACTIONS(527), 1,
      sym__san_promotable_piece,
  [3097] = 1,
    ACTIONS(529), 1,
      sym_tagpair_delimiter_close,
  [3101] = 1,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
  [3105] = 1,
    ACTIONS(533), 1,
      sym_rest_of_line_comment_text,
  [3109] = 1,
    ACTIONS(535), 1,
      sym_tagpair_key,
  [3113] = 1,
    ACTIONS(537), 1,
      sym_double_quote,
  [3117] = 1,
    ACTIONS(539), 1,
      sym_variation_delimiter_close,
  [3121] = 1,
    ACTIONS(541), 1,
      sym_inline_comment_delimiter_close,
  [3125] = 1,
    ACTIONS(543), 1,
      sym_variation_delimiter_close,
  [3129] = 1,
    ACTIONS(545), 1,
      sym_inline_comment_delimiter_close,
  [3133] = 1,
    ACTIONS(547), 1,
      anon_sym_22,
  [3137] = 1,
    ACTIONS(549), 1,
      anon_sym_1,
  [3141] = 1,
    ACTIONS(551), 1,
      sym__san_rank,
  [3145] = 1,
    ACTIONS(553), 1,
      sym_tagpair_delimiter_close,
  [3149] = 1,
    ACTIONS(555), 1,
      anon_sym_22,
  [3153] = 1,
    ACTIONS(507), 1,
      anon_sym_1,
  [3157] = 1,
    ACTIONS(557), 1,
      sym__san_rank,
  [3161] = 1,
    ACTIONS(559), 1,
      sym__san_promotable_piece,
  [3165] = 1,
    ACTIONS(561), 1,
      sym_rest_of_line_comment_text,
  [3169] = 1,
    ACTIONS(563), 1,
      sym_tagpair_delimiter_close,
  [3173] = 1,
    ACTIONS(565), 1,
      sym_rest_of_line_comment_text,
  [3177] = 1,
    ACTIONS(509), 1,
      sym__san_rank,
  [3181] = 1,
    ACTIONS(567), 1,
      sym_rest_of_line_comment_text,
  [3185] = 1,
    ACTIONS(569), 1,
      sym_inline_comment_text,
  [3189] = 1,
    ACTIONS(571), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 337,
  [SMALL_STATE(7)] = 383,
  [SMALL_STATE(8)] = 429,
  [SMALL_STATE(9)] = 472,
  [SMALL_STATE(10)] = 511,
  [SMALL_STATE(11)] = 548,
  [SMALL_STATE(12)] = 585,
  [SMALL_STATE(13)] = 622,
  [SMALL_STATE(14)] = 659,
  [SMALL_STATE(15)] = 696,
  [SMALL_STATE(16)] = 733,
  [SMALL_STATE(17)] = 770,
  [SMALL_STATE(18)] = 807,
  [SMALL_STATE(19)] = 844,
  [SMALL_STATE(20)] = 881,
  [SMALL_STATE(21)] = 920,
  [SMALL_STATE(22)] = 959,
  [SMALL_STATE(23)] = 996,
  [SMALL_STATE(24)] = 1038,
  [SMALL_STATE(25)] = 1074,
  [SMALL_STATE(26)] = 1110,
  [SMALL_STATE(27)] = 1146,
  [SMALL_STATE(28)] = 1182,
  [SMALL_STATE(29)] = 1218,
  [SMALL_STATE(30)] = 1254,
  [SMALL_STATE(31)] = 1290,
  [SMALL_STATE(32)] = 1326,
  [SMALL_STATE(33)] = 1368,
  [SMALL_STATE(34)] = 1404,
  [SMALL_STATE(35)] = 1440,
  [SMALL_STATE(36)] = 1474,
  [SMALL_STATE(37)] = 1508,
  [SMALL_STATE(38)] = 1574,
  [SMALL_STATE(39)] = 1640,
  [SMALL_STATE(40)] = 1703,
  [SMALL_STATE(41)] = 1766,
  [SMALL_STATE(42)] = 1803,
  [SMALL_STATE(43)] = 1840,
  [SMALL_STATE(44)] = 1869,
  [SMALL_STATE(45)] = 1898,
  [SMALL_STATE(46)] = 1924,
  [SMALL_STATE(47)] = 1946,
  [SMALL_STATE(48)] = 1966,
  [SMALL_STATE(49)] = 1986,
  [SMALL_STATE(50)] = 2006,
  [SMALL_STATE(51)] = 2026,
  [SMALL_STATE(52)] = 2046,
  [SMALL_STATE(53)] = 2066,
  [SMALL_STATE(54)] = 2086,
  [SMALL_STATE(55)] = 2106,
  [SMALL_STATE(56)] = 2126,
  [SMALL_STATE(57)] = 2148,
  [SMALL_STATE(58)] = 2168,
  [SMALL_STATE(59)] = 2188,
  [SMALL_STATE(60)] = 2208,
  [SMALL_STATE(61)] = 2227,
  [SMALL_STATE(62)] = 2246,
  [SMALL_STATE(63)] = 2265,
  [SMALL_STATE(64)] = 2284,
  [SMALL_STATE(65)] = 2303,
  [SMALL_STATE(66)] = 2322,
  [SMALL_STATE(67)] = 2341,
  [SMALL_STATE(68)] = 2360,
  [SMALL_STATE(69)] = 2379,
  [SMALL_STATE(70)] = 2398,
  [SMALL_STATE(71)] = 2417,
  [SMALL_STATE(72)] = 2452,
  [SMALL_STATE(73)] = 2487,
  [SMALL_STATE(74)] = 2500,
  [SMALL_STATE(75)] = 2513,
  [SMALL_STATE(76)] = 2526,
  [SMALL_STATE(77)] = 2543,
  [SMALL_STATE(78)] = 2562,
  [SMALL_STATE(79)] = 2579,
  [SMALL_STATE(80)] = 2598,
  [SMALL_STATE(81)] = 2610,
  [SMALL_STATE(82)] = 2622,
  [SMALL_STATE(83)] = 2638,
  [SMALL_STATE(84)] = 2652,
  [SMALL_STATE(85)] = 2664,
  [SMALL_STATE(86)] = 2678,
  [SMALL_STATE(87)] = 2694,
  [SMALL_STATE(88)] = 2706,
  [SMALL_STATE(89)] = 2718,
  [SMALL_STATE(90)] = 2728,
  [SMALL_STATE(91)] = 2742,
  [SMALL_STATE(92)] = 2758,
  [SMALL_STATE(93)] = 2768,
  [SMALL_STATE(94)] = 2778,
  [SMALL_STATE(95)] = 2785,
  [SMALL_STATE(96)] = 2796,
  [SMALL_STATE(97)] = 2805,
  [SMALL_STATE(98)] = 2818,
  [SMALL_STATE(99)] = 2829,
  [SMALL_STATE(100)] = 2838,
  [SMALL_STATE(101)] = 2847,
  [SMALL_STATE(102)] = 2856,
  [SMALL_STATE(103)] = 2865,
  [SMALL_STATE(104)] = 2874,
  [SMALL_STATE(105)] = 2883,
  [SMALL_STATE(106)] = 2896,
  [SMALL_STATE(107)] = 2905,
  [SMALL_STATE(108)] = 2914,
  [SMALL_STATE(109)] = 2923,
  [SMALL_STATE(110)] = 2929,
  [SMALL_STATE(111)] = 2939,
  [SMALL_STATE(112)] = 2947,
  [SMALL_STATE(113)] = 2957,
  [SMALL_STATE(114)] = 2962,
  [SMALL_STATE(115)] = 2969,
  [SMALL_STATE(116)] = 2976,
  [SMALL_STATE(117)] = 2983,
  [SMALL_STATE(118)] = 2990,
  [SMALL_STATE(119)] = 2997,
  [SMALL_STATE(120)] = 3004,
  [SMALL_STATE(121)] = 3011,
  [SMALL_STATE(122)] = 3018,
  [SMALL_STATE(123)] = 3025,
  [SMALL_STATE(124)] = 3032,
  [SMALL_STATE(125)] = 3039,
  [SMALL_STATE(126)] = 3046,
  [SMALL_STATE(127)] = 3053,
  [SMALL_STATE(128)] = 3060,
  [SMALL_STATE(129)] = 3067,
  [SMALL_STATE(130)] = 3074,
  [SMALL_STATE(131)] = 3081,
  [SMALL_STATE(132)] = 3085,
  [SMALL_STATE(133)] = 3089,
  [SMALL_STATE(134)] = 3093,
  [SMALL_STATE(135)] = 3097,
  [SMALL_STATE(136)] = 3101,
  [SMALL_STATE(137)] = 3105,
  [SMALL_STATE(138)] = 3109,
  [SMALL_STATE(139)] = 3113,
  [SMALL_STATE(140)] = 3117,
  [SMALL_STATE(141)] = 3121,
  [SMALL_STATE(142)] = 3125,
  [SMALL_STATE(143)] = 3129,
  [SMALL_STATE(144)] = 3133,
  [SMALL_STATE(145)] = 3137,
  [SMALL_STATE(146)] = 3141,
  [SMALL_STATE(147)] = 3145,
  [SMALL_STATE(148)] = 3149,
  [SMALL_STATE(149)] = 3153,
  [SMALL_STATE(150)] = 3157,
  [SMALL_STATE(151)] = 3161,
  [SMALL_STATE(152)] = 3165,
  [SMALL_STATE(153)] = 3169,
  [SMALL_STATE(154)] = 3173,
  [SMALL_STATE(155)] = 3177,
  [SMALL_STATE(156)] = 3181,
  [SMALL_STATE(157)] = 3185,
  [SMALL_STATE(158)] = 3189,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(137),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(38),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(133),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(125),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(91),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(132),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(123),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_destination, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_destination, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17), SHIFT_REPEAT(138),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 20),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 31),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 31),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 24),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(154),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(157),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(60),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(114),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(82),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(158),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(158),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(118),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(56),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(61),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 11),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 18),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(156),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(85),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(138),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(152),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(76),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, .production_id = 15),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 14),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 19),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 19),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(156),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(83),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 30),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 30),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 26),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 26),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(95),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, .production_id = 30),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, .production_id = 30),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 26),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 26),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 11),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 11),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 19),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 19),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 18),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 18),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 14),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 14),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [531] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 34),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 28),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pgn(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
