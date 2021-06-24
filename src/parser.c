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
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 35

enum {
  sym__empty_line = 1,
  sym_rest_of_line_comment_delimiter_open = 2,
  aux_sym_rest_of_line_comment_token1 = 3,
  sym_rest_of_line_comment_text = 4,
  sym_tagpair_delimiter_open = 5,
  sym_tagpair_delimiter_close = 6,
  sym_double_quote = 7,
  sym_tagpair_key = 8,
  aux_sym_tagpair_value_contents_token1 = 9,
  aux_sym_tagpair_value_contents_token2 = 10,
  sym_variation_delimiter_open = 11,
  sym_variation_delimiter_close = 12,
  sym_inline_comment_delimiter_open = 13,
  sym_inline_comment_delimiter_close = 14,
  sym_inline_comment_text = 15,
  sym_move_number = 16,
  sym__san_file = 17,
  sym__san_rank = 18,
  sym__san_promotable_piece = 19,
  sym__san_major_or_minor_piece = 20,
  sym__san_capture_symbol = 21,
  sym__san_promotion_symbol = 22,
  sym__san_move_castle = 23,
  sym__san_null_move = 24,
  sym_check_or_mate_condition = 25,
  sym_annotation = 26,
  anon_sym_1 = 27,
  anon_sym_DASH = 28,
  anon_sym_ = 29,
  anon_sym_2 = 30,
  anon_sym_3 = 31,
  anon_sym_4 = 32,
  anon_sym_AMP_POUNDx2d_SEMI = 33,
  anon_sym_AMPminus_SEMI = 34,
  anon_sym_AMP_POUNDx2010_SEMI = 35,
  anon_sym_AMPndash_SEMI = 36,
  anon_sym_AMPmdash_SEMI = 37,
  anon_sym_O = 38,
  anon_sym_0 = 39,
  anon_sym_o = 40,
  anon_sym_SLASH = 41,
  anon_sym_5 = 42,
  anon_sym_AMPsol_SEMI = 43,
  anon_sym_AMP_POUNDx2f_SEMI = 44,
  anon_sym_AMP_POUNDx2215_SEMI = 45,
  anon_sym_22 = 46,
  anon_sym_6 = 47,
  anon_sym_AMPhalf_SEMI = 48,
  anon_sym_AMP_POUNDxbd_SEMI = 49,
  anon_sym_STAR = 50,
  anon_sym_7 = 51,
  anon_sym_8 = 52,
  anon_sym_AMPmidast_SEMI = 53,
  anon_sym_AMP_POUNDx2a_SEMI = 54,
  anon_sym_AMPlowast_SEMI = 55,
  anon_sym_AMP_POUNDx2731_SEMI = 56,
  sym_series_of_games = 57,
  sym_game = 58,
  sym_freestanding_comment = 59,
  sym_rest_of_line_comment = 60,
  sym_header = 61,
  sym_tagpair = 62,
  sym__tagpair_value = 63,
  sym_tagpair_value_contents = 64,
  sym_movetext = 65,
  sym_variation_movetext = 66,
  sym__movetext_element = 67,
  sym__variation_movetext_element = 68,
  sym_variation = 69,
  sym_inline_comment = 70,
  sym_san_move = 71,
  sym__san_move_piece = 72,
  sym__san_destination = 73,
  sym__san_promotion = 74,
  sym__san_move_pawn = 75,
  sym__san_move_major_or_minor_piece = 76,
  sym_result_code = 77,
  aux_sym_series_of_games_repeat1 = 78,
  aux_sym_freestanding_comment_repeat1 = 79,
  aux_sym_header_repeat1 = 80,
  aux_sym_tagpair_value_contents_repeat1 = 81,
  aux_sym_movetext_repeat1 = 82,
  aux_sym_variation_movetext_repeat1 = 83,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__empty_line] = "_empty_line",
  [sym_rest_of_line_comment_delimiter_open] = "rest_of_line_comment_delimiter_open",
  [aux_sym_rest_of_line_comment_token1] = "rest_of_line_comment_token1",
  [sym_rest_of_line_comment_text] = "rest_of_line_comment_text",
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
  [sym__san_move_castle] = "_san_move_castle",
  [sym__san_null_move] = "_san_null_move",
  [sym_check_or_mate_condition] = "check_or_mate_condition",
  [sym_annotation] = "annotation",
  [anon_sym_1] = "1",
  [anon_sym_DASH] = "-",
  [anon_sym_] = "−",
  [anon_sym_2] = "‐",
  [anon_sym_3] = "–",
  [anon_sym_4] = "—",
  [anon_sym_AMP_POUNDx2d_SEMI] = "&#x2d;",
  [anon_sym_AMPminus_SEMI] = "&minus;",
  [anon_sym_AMP_POUNDx2010_SEMI] = "&#x2010;",
  [anon_sym_AMPndash_SEMI] = "&ndash;",
  [anon_sym_AMPmdash_SEMI] = "&mdash;",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [anon_sym_5] = "∕",
  [anon_sym_AMPsol_SEMI] = "&sol;",
  [anon_sym_AMP_POUNDx2f_SEMI] = "&#x2f;",
  [anon_sym_AMP_POUNDx2215_SEMI] = "&#x2215;",
  [anon_sym_22] = "2",
  [anon_sym_6] = "½",
  [anon_sym_AMPhalf_SEMI] = "&half;",
  [anon_sym_AMP_POUNDxbd_SEMI] = "&#xbd;",
  [anon_sym_STAR] = "*",
  [anon_sym_7] = "∗",
  [anon_sym_8] = "✱",
  [anon_sym_AMPmidast_SEMI] = "&midast;",
  [anon_sym_AMP_POUNDx2a_SEMI] = "&#x2a;",
  [anon_sym_AMPlowast_SEMI] = "&lowast;",
  [anon_sym_AMP_POUNDx2731_SEMI] = "&#x2731;",
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
  [sym__san_move_major_or_minor_piece] = "_san_move_major_or_minor_piece",
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
  [sym__san_move_castle] = sym__san_move_castle,
  [sym__san_null_move] = sym__san_null_move,
  [sym_check_or_mate_condition] = sym_check_or_mate_condition,
  [sym_annotation] = sym_annotation,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_AMP_POUNDx2d_SEMI] = anon_sym_AMP_POUNDx2d_SEMI,
  [anon_sym_AMPminus_SEMI] = anon_sym_AMPminus_SEMI,
  [anon_sym_AMP_POUNDx2010_SEMI] = anon_sym_AMP_POUNDx2010_SEMI,
  [anon_sym_AMPndash_SEMI] = anon_sym_AMPndash_SEMI,
  [anon_sym_AMPmdash_SEMI] = anon_sym_AMPmdash_SEMI,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_AMPsol_SEMI] = anon_sym_AMPsol_SEMI,
  [anon_sym_AMP_POUNDx2f_SEMI] = anon_sym_AMP_POUNDx2f_SEMI,
  [anon_sym_AMP_POUNDx2215_SEMI] = anon_sym_AMP_POUNDx2215_SEMI,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_AMPhalf_SEMI] = anon_sym_AMPhalf_SEMI,
  [anon_sym_AMP_POUNDxbd_SEMI] = anon_sym_AMP_POUNDxbd_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_AMPmidast_SEMI] = anon_sym_AMPmidast_SEMI,
  [anon_sym_AMP_POUNDx2a_SEMI] = anon_sym_AMP_POUNDx2a_SEMI,
  [anon_sym_AMPlowast_SEMI] = anon_sym_AMPlowast_SEMI,
  [anon_sym_AMP_POUNDx2731_SEMI] = anon_sym_AMP_POUNDx2731_SEMI,
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
  [sym__san_move_major_or_minor_piece] = sym__san_move_major_or_minor_piece,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2d_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPminus_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2010_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPndash_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPmdash_SEMI] = {
    .visible = true,
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
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPsol_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2f_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2215_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPhalf_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDxbd_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPmidast_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2a_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPlowast_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2731_SEMI] = {
    .visible = true,
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
  [sym__san_move_major_or_minor_piece] = {
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
      if (eof) ADVANCE(309);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+') ADVANCE(346);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == '2') ADVANCE(380);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(332);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(338);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R') ADVANCE(333);
      if (lookahead == 'K') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == ']') ADVANCE(318);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (lookahead == '}') ADVANCE(328);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8208) ADVANCE(360);
      if (lookahead == 8211) ADVANCE(361);
      if (lookahead == 8212) ADVANCE(362);
      if (lookahead == 8722) ADVANCE(359);
      if (lookahead == 8725) ADVANCE(376);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(308)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(320);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(338);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == 10133) ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '+') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(333);
      if (lookahead == 'K') ADVANCE(335);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(334);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 10133) ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 29:
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(298);
      END_STATE();
    case 30:
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(298);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(347);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(347);
      END_STATE();
    case 33:
      if (lookahead == '&') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == '&') ADVANCE(189);
      END_STATE();
    case 35:
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(347);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '7') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '3') ADVANCE(63);
      if (lookahead == '5') ADVANCE(61);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead == '7') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '3') ADVANCE(63);
      if (lookahead == '5') ADVANCE(61);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead == '7') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == '9') ADVANCE(188);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '7') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '7') ADVANCE(66);
      if (lookahead == ';') ADVANCE(388);
      END_STATE();
    case 44:
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == 'O') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '0') ADVANCE(370);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(332);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(338);
      if (lookahead == 'O') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 46:
      if (lookahead == '0') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == '0') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(132);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(124);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(124);
      if (lookahead == '1') ADVANCE(124);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(123);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(128);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '2') ADVANCE(75);
      if (lookahead == '7') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 58:
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == '2') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '1') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == '1') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == '1') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == ';') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == '1') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == '1') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == '1') ADVANCE(124);
      END_STATE();
    case 66:
      if (lookahead == '1') ADVANCE(124);
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 67:
      if (lookahead == '1') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == '1') ADVANCE(46);
      END_STATE();
    case 69:
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '3') ADVANCE(64);
      if (lookahead == '9') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '9') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == '1') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '3') ADVANCE(165);
      if (lookahead == '4') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == '1') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == '1') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == '1') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == '1') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 78:
      if (lookahead == '2') ADVANCE(53);
      END_STATE();
    case 79:
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 80:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == '2') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == '2') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 84:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 85:
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == '2') ADVANCE(124);
      if (lookahead == '3') ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 88:
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '3') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '3') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '3') ADVANCE(195);
      END_STATE();
    case 92:
      if (lookahead == '3') ADVANCE(64);
      END_STATE();
    case 93:
      if (lookahead == '3') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == '3') ADVANCE(171);
      END_STATE();
    case 95:
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == '4') ADVANCE(124);
      if (lookahead == '8') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == '5') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == '5') ADVANCE(124);
      END_STATE();
    case 99:
      if (lookahead == '5') ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == '5') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 102:
      if (lookahead == '6') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == '7') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == '7') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == '7') ADVANCE(124);
      END_STATE();
    case 106:
      if (lookahead == '7') ADVANCE(124);
      if (lookahead == '8') ADVANCE(124);
      if (lookahead == '9') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == '9') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == ';') ADVANCE(298);
      END_STATE();
    case 109:
      if (lookahead == ';') ADVANCE(377);
      END_STATE();
    case 110:
      if (lookahead == ';') ADVANCE(388);
      END_STATE();
    case 111:
      if (lookahead == ';') ADVANCE(363);
      END_STATE();
    case 112:
      if (lookahead == ';') ADVANCE(378);
      END_STATE();
    case 113:
      if (lookahead == ';') ADVANCE(383);
      END_STATE();
    case 114:
      if (lookahead == ';') ADVANCE(382);
      END_STATE();
    case 115:
      if (lookahead == ';') ADVANCE(367);
      END_STATE();
    case 116:
      if (lookahead == ';') ADVANCE(364);
      END_STATE();
    case 117:
      if (lookahead == ';') ADVANCE(366);
      END_STATE();
    case 118:
      if (lookahead == ';') ADVANCE(365);
      END_STATE();
    case 119:
      if (lookahead == ';') ADVANCE(379);
      END_STATE();
    case 120:
      if (lookahead == ';') ADVANCE(390);
      END_STATE();
    case 121:
      if (lookahead == ';') ADVANCE(389);
      END_STATE();
    case 122:
      if (lookahead == ';') ADVANCE(387);
      END_STATE();
    case 123:
      if (lookahead == ';') ADVANCE(348);
      END_STATE();
    case 124:
      if (lookahead == ';') ADVANCE(347);
      END_STATE();
    case 125:
      if (lookahead == ';') ADVANCE(31);
      END_STATE();
    case 126:
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 127:
      if (lookahead == ';') ADVANCE(35);
      END_STATE();
    case 128:
      if (lookahead == ';') ADVANCE(343);
      END_STATE();
    case 129:
      if (lookahead == ';') ADVANCE(32);
      END_STATE();
    case 130:
      if (lookahead == ';') ADVANCE(349);
      END_STATE();
    case 131:
      if (lookahead == ';') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == ';') ADVANCE(299);
      END_STATE();
    case 133:
      if (lookahead == ';') ADVANCE(350);
      END_STATE();
    case 134:
      if (lookahead == ';') ADVANCE(34);
      END_STATE();
    case 135:
      if (lookahead == ';') ADVANCE(352);
      END_STATE();
    case 136:
      if (lookahead == ';') ADVANCE(351);
      END_STATE();
    case 137:
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(347);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'v') ADVANCE(215);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(249);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'q') ADVANCE(276);
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 239:
      if (lookahead == 'q') ADVANCE(275);
      END_STATE();
    case 240:
      if (lookahead == 'q') ADVANCE(282);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 284:
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 285:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 286:
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 287:
      if (lookahead == 'x') ADVANCE(236);
      END_STATE();
    case 288:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 289:
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 291:
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 292:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 293:
      if (lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 294:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 296:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 297:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 299:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 300:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 302:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(324);
      END_STATE();
    case 303:
      if (eof) ADVANCE(309);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(333);
      if (lookahead == 'K') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(334);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == 10133) ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 304:
      if (eof) ADVANCE(309);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(338);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == 10133) ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 305:
      if (eof) ADVANCE(309);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 306:
      if (eof) ADVANCE(309);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(306)
      END_STATE();
    case 307:
      if (eof) ADVANCE(309);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(348);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(335);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      if (lookahead == '[') ADVANCE(317);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == '{') ADVANCE(327);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 308:
      if (eof) ADVANCE(309);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(313);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '1') ADVANCE(356);
      if (lookahead == '2') ADVANCE(380);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == ']') ADVANCE(318);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(331);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '{') ADVANCE(327);
      if (lookahead == '}') ADVANCE(328);
      if (lookahead == 189) ADVANCE(381);
      if (lookahead == 8208) ADVANCE(360);
      if (lookahead == 8211) ADVANCE(361);
      if (lookahead == 8212) ADVANCE(362);
      if (lookahead == 8722) ADVANCE(359);
      if (lookahead == 8725) ADVANCE(376);
      if (lookahead == 8727) ADVANCE(385);
      if (lookahead == 10033) ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(308)
      END_STATE();
    case 309:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(347);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(347);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(299);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(347);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(35);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '+') ADVANCE(344);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(343);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(32);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(21);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(187);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(22);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(189);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(347);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2d_SEMI);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_AMPminus_SEMI);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2010_SEMI);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_AMPndash_SEMI);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_AMPmdash_SEMI);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(298);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(298);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(298);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(298);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_AMPsol_SEMI);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2f_SEMI);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2215_SEMI);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_AMPhalf_SEMI);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDxbd_SEMI);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_AMPmidast_SEMI);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2a_SEMI);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_AMPlowast_SEMI);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2731_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 304},
  [3] = {.lex_state = 304},
  [4] = {.lex_state = 304},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 303},
  [7] = {.lex_state = 303},
  [8] = {.lex_state = 304},
  [9] = {.lex_state = 303},
  [10] = {.lex_state = 304},
  [11] = {.lex_state = 304},
  [12] = {.lex_state = 304},
  [13] = {.lex_state = 304},
  [14] = {.lex_state = 304},
  [15] = {.lex_state = 304},
  [16] = {.lex_state = 304},
  [17] = {.lex_state = 304},
  [18] = {.lex_state = 304},
  [19] = {.lex_state = 304},
  [20] = {.lex_state = 304},
  [21] = {.lex_state = 305},
  [22] = {.lex_state = 304},
  [23] = {.lex_state = 304},
  [24] = {.lex_state = 304},
  [25] = {.lex_state = 304},
  [26] = {.lex_state = 304},
  [27] = {.lex_state = 304},
  [28] = {.lex_state = 304},
  [29] = {.lex_state = 304},
  [30] = {.lex_state = 304},
  [31] = {.lex_state = 304},
  [32] = {.lex_state = 304},
  [33] = {.lex_state = 304},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 306},
  [39] = {.lex_state = 306},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 307},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 304},
  [81] = {.lex_state = 304},
  [82] = {.lex_state = 304},
  [83] = {.lex_state = 304},
  [84] = {.lex_state = 304},
  [85] = {.lex_state = 304},
  [86] = {.lex_state = 307},
  [87] = {.lex_state = 45},
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 304},
  [92] = {.lex_state = 45},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 45},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 45},
  [115] = {.lex_state = 45},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 58},
  [118] = {.lex_state = 45},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 329},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 45},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 316},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 58},
  [129] = {.lex_state = 58},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 58},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 316},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 45},
  [140] = {.lex_state = 316},
  [141] = {.lex_state = 329},
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
    [sym__san_move_castle] = ACTIONS(1),
    [sym_check_or_mate_condition] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2d_SEMI] = ACTIONS(1),
    [anon_sym_AMPminus_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2010_SEMI] = ACTIONS(1),
    [anon_sym_AMPndash_SEMI] = ACTIONS(1),
    [anon_sym_AMPmdash_SEMI] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_AMPsol_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2f_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2215_SEMI] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_AMPhalf_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDxbd_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_AMPmidast_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2a_SEMI] = ACTIONS(1),
    [anon_sym_AMPlowast_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2731_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(125),
    [sym_game] = STATE(98),
    [sym_freestanding_comment] = STATE(71),
    [sym_rest_of_line_comment] = STATE(75),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(32),
    [aux_sym_series_of_games_repeat1] = STATE(51),
    [aux_sym_freestanding_comment_repeat1] = STATE(75),
    [aux_sym_header_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(5),
    [sym_tagpair_delimiter_open] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(11), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(16), 1,
      sym_variation_delimiter_open,
    ACTIONS(19), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(22), 1,
      sym_move_number,
    ACTIONS(25), 1,
      sym__san_file,
    ACTIONS(28), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(34), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_destination,
    STATE(29), 1,
      sym_san_move,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(31), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(26), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(28), 2,
      sym__movetext_element,
      sym_variation,
    STATE(12), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
    ACTIONS(14), 15,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [69] = 16,
    ACTIONS(39), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(43), 1,
      sym_variation_delimiter_open,
    ACTIONS(45), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(47), 1,
      sym_move_number,
    ACTIONS(49), 1,
      sym__san_file,
    ACTIONS(51), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(55), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_destination,
    STATE(29), 1,
      sym_san_move,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(53), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(26), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(28), 2,
      sym__movetext_element,
      sym_variation,
    STATE(12), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
    ACTIONS(41), 15,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [138] = 21,
    ACTIONS(39), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(43), 1,
      sym_variation_delimiter_open,
    ACTIONS(45), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(47), 1,
      sym_move_number,
    ACTIONS(49), 1,
      sym__san_file,
    ACTIONS(51), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(55), 1,
      sym_annotation,
    ACTIONS(57), 1,
      sym__empty_line,
    ACTIONS(59), 1,
      anon_sym_1,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_destination,
    STATE(29), 1,
      sym_san_move,
    STATE(39), 1,
      sym_movetext,
    STATE(81), 1,
      sym_result_code,
    ACTIONS(53), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(26), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(28), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(61), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(63), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    STATE(12), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
    ACTIONS(65), 7,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [217] = 20,
    ACTIONS(51), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(55), 1,
      sym_annotation,
    ACTIONS(59), 1,
      anon_sym_1,
    ACTIONS(67), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(69), 1,
      sym_variation_delimiter_open,
    ACTIONS(71), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(73), 1,
      sym_move_number,
    ACTIONS(75), 1,
      sym__san_file,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_destination,
    STATE(29), 1,
      sym_san_move,
    STATE(38), 1,
      sym_movetext,
    STATE(83), 1,
      sym_result_code,
    ACTIONS(77), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(26), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(28), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(61), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(79), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    STATE(12), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
    ACTIONS(81), 7,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [293] = 5,
    ACTIONS(87), 1,
      sym__san_promotable_piece,
    ACTIONS(89), 1,
      sym__san_promotion_symbol,
    STATE(11), 1,
      sym__san_promotion,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(85), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [334] = 5,
    ACTIONS(89), 1,
      sym__san_promotion_symbol,
    ACTIONS(95), 1,
      sym__san_promotable_piece,
    STATE(17), 1,
      sym__san_promotion,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(93), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [375] = 4,
    ACTIONS(101), 1,
      sym__san_capture_symbol,
    STATE(19), 1,
      sym__san_destination,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(99), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [413] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(99), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [447] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(99), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [479] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(105), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [511] = 3,
    ACTIONS(111), 1,
      sym_check_or_mate_condition,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(109), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [545] = 5,
    ACTIONS(113), 1,
      sym__empty_line,
    ACTIONS(117), 1,
      sym_tagpair_delimiter_open,
    STATE(16), 1,
      aux_sym_header_repeat1,
    STATE(32), 1,
      sym_tagpair,
    ACTIONS(115), 23,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [583] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(121), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [615] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(125), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [647] = 5,
    ACTIONS(127), 1,
      sym__empty_line,
    ACTIONS(131), 1,
      sym_tagpair_delimiter_open,
    STATE(16), 1,
      aux_sym_header_repeat1,
    STATE(32), 1,
      sym_tagpair,
    ACTIONS(129), 23,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [685] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(136), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [717] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(140), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [749] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(144), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [781] = 2,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(148), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [813] = 3,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(152), 25,
      sym__empty_line,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [847] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(158), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [878] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(162), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [909] = 2,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(166), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [940] = 2,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(170), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [971] = 2,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(174), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1002] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(178), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1033] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(182), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1064] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(186), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1095] = 2,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(190), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1126] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(194), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1157] = 2,
    ACTIONS(196), 1,
      sym__empty_line,
    ACTIONS(198), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1187] = 2,
    ACTIONS(200), 1,
      sym__empty_line,
    ACTIONS(202), 24,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1217] = 16,
    ACTIONS(204), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(206), 1,
      sym_variation_delimiter_open,
    ACTIONS(208), 1,
      sym_variation_delimiter_close,
    ACTIONS(210), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(212), 1,
      sym_move_number,
    ACTIONS(214), 1,
      sym__san_file,
    ACTIONS(216), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(220), 1,
      sym_annotation,
    STATE(37), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(41), 1,
      sym__san_destination,
    STATE(66), 1,
      sym_san_move,
    STATE(122), 1,
      sym_variation_movetext,
    ACTIONS(218), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(67), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(53), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
  [1271] = 16,
    ACTIONS(204), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(206), 1,
      sym_variation_delimiter_open,
    ACTIONS(210), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(212), 1,
      sym_move_number,
    ACTIONS(214), 1,
      sym__san_file,
    ACTIONS(216), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(220), 1,
      sym_annotation,
    ACTIONS(222), 1,
      sym_variation_delimiter_close,
    STATE(37), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(41), 1,
      sym__san_destination,
    STATE(66), 1,
      sym_san_move,
    STATE(130), 1,
      sym_variation_movetext,
    ACTIONS(218), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(67), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(53), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
  [1325] = 15,
    ACTIONS(224), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(227), 1,
      sym_variation_delimiter_open,
    ACTIONS(230), 1,
      sym_variation_delimiter_close,
    ACTIONS(232), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(235), 1,
      sym_move_number,
    ACTIONS(238), 1,
      sym__san_file,
    ACTIONS(241), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(247), 1,
      sym_annotation,
    STATE(36), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(41), 1,
      sym__san_destination,
    STATE(66), 1,
      sym_san_move,
    ACTIONS(244), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(67), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(53), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
  [1376] = 15,
    ACTIONS(204), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(206), 1,
      sym_variation_delimiter_open,
    ACTIONS(210), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(212), 1,
      sym_move_number,
    ACTIONS(214), 1,
      sym__san_file,
    ACTIONS(216), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(220), 1,
      sym_annotation,
    ACTIONS(250), 1,
      sym_variation_delimiter_close,
    STATE(36), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(41), 1,
      sym__san_destination,
    STATE(66), 1,
      sym_san_move,
    ACTIONS(218), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(67), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(53), 3,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_move_major_or_minor_piece,
  [1427] = 8,
    ACTIONS(59), 1,
      anon_sym_1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      sym__empty_line,
    STATE(84), 1,
      sym_result_code,
    ACTIONS(256), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
    ACTIONS(61), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(63), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    ACTIONS(65), 7,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1463] = 8,
    ACTIONS(59), 1,
      anon_sym_1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      sym__empty_line,
    STATE(82), 1,
      sym_result_code,
    ACTIONS(262), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
    ACTIONS(61), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(63), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    ACTIONS(65), 7,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1499] = 2,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_5,
      anon_sym_AMPsol_SEMI,
      anon_sym_AMP_POUNDx2f_SEMI,
      anon_sym_AMP_POUNDx2215_SEMI,
    ACTIONS(264), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [1519] = 5,
    ACTIONS(268), 1,
      sym__san_promotable_piece,
    ACTIONS(270), 1,
      sym__san_promotion_symbol,
    STATE(56), 1,
      sym__san_promotion,
    ACTIONS(85), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(83), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1544] = 5,
    ACTIONS(270), 1,
      sym__san_promotion_symbol,
    ACTIONS(272), 1,
      sym__san_promotable_piece,
    STATE(55), 1,
      sym__san_promotion,
    ACTIONS(93), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(91), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1569] = 4,
    ACTIONS(274), 1,
      sym__san_capture_symbol,
    STATE(54), 1,
      sym__san_destination,
    ACTIONS(99), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(97), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1591] = 2,
    ACTIONS(99), 5,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(97), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1609] = 2,
    ACTIONS(276), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(152), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1626] = 2,
    ACTIONS(121), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(119), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1642] = 10,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(283), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(13), 1,
      aux_sym_header_repeat1,
    STATE(32), 1,
      sym_tagpair,
    STATE(47), 1,
      aux_sym_series_of_games_repeat1,
    STATE(72), 1,
      sym_freestanding_comment,
    STATE(98), 1,
      sym_game,
    STATE(89), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [1674] = 2,
    ACTIONS(99), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(97), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1690] = 2,
    ACTIONS(170), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(168), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1706] = 2,
    ACTIONS(140), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(138), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1722] = 10,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(7), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(13), 1,
      aux_sym_header_repeat1,
    STATE(32), 1,
      sym_tagpair,
    STATE(47), 1,
      aux_sym_series_of_games_repeat1,
    STATE(70), 1,
      sym_freestanding_comment,
    STATE(98), 1,
      sym_game,
    STATE(75), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [1754] = 2,
    ACTIONS(148), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(146), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1770] = 3,
    ACTIONS(288), 1,
      sym_check_or_mate_condition,
    ACTIONS(109), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(107), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1788] = 2,
    ACTIONS(144), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(142), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1804] = 2,
    ACTIONS(136), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(134), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1820] = 2,
    ACTIONS(105), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(103), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1836] = 2,
    ACTIONS(125), 3,
      sym__san_major_or_minor_piece,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(123), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1852] = 2,
    ACTIONS(158), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(156), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1867] = 2,
    ACTIONS(178), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(176), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1882] = 1,
    ACTIONS(290), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [1895] = 2,
    ACTIONS(294), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(292), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1910] = 2,
    ACTIONS(190), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(188), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1925] = 1,
    ACTIONS(296), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [1938] = 1,
    ACTIONS(298), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [1951] = 2,
    ACTIONS(302), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(300), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1966] = 2,
    ACTIONS(306), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(304), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1981] = 2,
    ACTIONS(310), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(308), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [1996] = 2,
    ACTIONS(314), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(312), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [2011] = 2,
    ACTIONS(194), 2,
      sym__san_major_or_minor_piece,
      sym_annotation,
    ACTIONS(192), 8,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_move_castle,
      sym__san_null_move,
  [2026] = 6,
    ACTIONS(7), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(13), 1,
      aux_sym_header_repeat1,
    STATE(32), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2045] = 6,
    ACTIONS(7), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(13), 1,
      aux_sym_header_repeat1,
    STATE(32), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2064] = 5,
    ACTIONS(7), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(13), 1,
      aux_sym_header_repeat1,
    STATE(32), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2080] = 3,
    ACTIONS(322), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym_tagpair_delimiter_open,
    STATE(73), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2092] = 4,
    ACTIONS(325), 1,
      sym_double_quote,
    STATE(78), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(134), 1,
      sym_tagpair_value_contents,
    ACTIONS(327), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2106] = 3,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym_tagpair_delimiter_open,
    STATE(73), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2118] = 1,
    ACTIONS(331), 5,
      anon_sym_SLASH,
      anon_sym_5,
      anon_sym_AMPsol_SEMI,
      anon_sym_AMP_POUNDx2f_SEMI,
      anon_sym_AMP_POUNDx2215_SEMI,
  [2126] = 3,
    ACTIONS(320), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(333), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(77), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2137] = 3,
    ACTIONS(336), 1,
      sym_double_quote,
    STATE(90), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(338), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2148] = 4,
    ACTIONS(340), 1,
      sym__san_file,
    ACTIONS(342), 1,
      sym__san_rank,
    ACTIONS(344), 1,
      sym__san_capture_symbol,
    STATE(18), 1,
      sym__san_destination,
  [2161] = 2,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(348), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2170] = 3,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      sym__empty_line,
    ACTIONS(354), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2181] = 3,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      sym__empty_line,
    ACTIONS(360), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2192] = 3,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      sym__empty_line,
    ACTIONS(366), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2203] = 3,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      sym__empty_line,
    ACTIONS(372), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2214] = 2,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(376), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2223] = 3,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(152), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2234] = 4,
    ACTIONS(380), 1,
      sym__san_file,
    ACTIONS(382), 1,
      sym__san_rank,
    ACTIONS(384), 1,
      sym__san_capture_symbol,
    STATE(14), 1,
      sym__san_destination,
  [2247] = 4,
    ACTIONS(386), 1,
      sym__san_file,
    ACTIONS(388), 1,
      sym__san_rank,
    ACTIONS(390), 1,
      sym__san_capture_symbol,
    STATE(46), 1,
      sym__san_destination,
  [2260] = 3,
    ACTIONS(204), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(329), 1,
      sym_tagpair_delimiter_open,
    STATE(77), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2271] = 3,
    ACTIONS(392), 1,
      sym_double_quote,
    STATE(90), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(394), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2282] = 2,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(399), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2291] = 4,
    ACTIONS(401), 1,
      sym__san_file,
    ACTIONS(403), 1,
      sym__san_rank,
    ACTIONS(405), 1,
      sym__san_capture_symbol,
    STATE(50), 1,
      sym__san_destination,
  [2304] = 1,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2310] = 1,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2316] = 1,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2322] = 3,
    ACTIONS(386), 1,
      sym__san_file,
    ACTIONS(390), 1,
      sym__san_capture_symbol,
    STATE(46), 1,
      sym__san_destination,
  [2332] = 1,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2338] = 1,
    ACTIONS(413), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2344] = 1,
    ACTIONS(415), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [2350] = 1,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2356] = 3,
    ACTIONS(380), 1,
      sym__san_file,
    ACTIONS(384), 1,
      sym__san_capture_symbol,
    STATE(14), 1,
      sym__san_destination,
  [2366] = 1,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2372] = 1,
    ACTIONS(421), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2378] = 1,
    ACTIONS(423), 3,
      ts_builtin_sym_end,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2384] = 1,
    ACTIONS(415), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
  [2390] = 2,
    ACTIONS(386), 1,
      sym__san_file,
    STATE(52), 1,
      sym__san_destination,
  [2397] = 2,
    ACTIONS(425), 1,
      sym__san_file,
    STATE(7), 1,
      sym__san_destination,
  [2404] = 2,
    ACTIONS(427), 1,
      sym__san_file,
    STATE(42), 1,
      sym__san_destination,
  [2411] = 2,
    ACTIONS(380), 1,
      sym__san_file,
    STATE(20), 1,
      sym__san_destination,
  [2418] = 2,
    ACTIONS(386), 1,
      sym__san_file,
    STATE(54), 1,
      sym__san_destination,
  [2425] = 2,
    ACTIONS(380), 1,
      sym__san_file,
    STATE(19), 1,
      sym__san_destination,
  [2432] = 2,
    ACTIONS(380), 1,
      sym__san_file,
    STATE(14), 1,
      sym__san_destination,
  [2439] = 2,
    ACTIONS(386), 1,
      sym__san_file,
    STATE(46), 1,
      sym__san_destination,
  [2446] = 2,
    ACTIONS(429), 1,
      sym__san_rank,
    ACTIONS(431), 1,
      sym__san_capture_symbol,
  [2453] = 2,
    ACTIONS(433), 1,
      sym__san_rank,
    ACTIONS(435), 1,
      sym__san_capture_symbol,
  [2460] = 2,
    ACTIONS(437), 1,
      sym_double_quote,
    STATE(119), 1,
      sym__tagpair_value,
  [2467] = 1,
    ACTIONS(415), 1,
      anon_sym_1,
  [2471] = 1,
    ACTIONS(439), 1,
      sym__san_rank,
  [2475] = 1,
    ACTIONS(441), 1,
      sym_tagpair_delimiter_close,
  [2479] = 1,
    ACTIONS(443), 1,
      sym_inline_comment_text,
  [2483] = 1,
    ACTIONS(445), 1,
      sym__san_promotable_piece,
  [2487] = 1,
    ACTIONS(447), 1,
      sym_variation_delimiter_close,
  [2491] = 1,
    ACTIONS(449), 1,
      sym_inline_comment_delimiter_close,
  [2495] = 1,
    ACTIONS(433), 1,
      sym__san_rank,
  [2499] = 1,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
  [2503] = 1,
    ACTIONS(453), 1,
      sym_rest_of_line_comment_text,
  [2507] = 1,
    ACTIONS(455), 1,
      sym_tagpair_key,
  [2511] = 1,
    ACTIONS(457), 1,
      anon_sym_22,
  [2515] = 1,
    ACTIONS(459), 1,
      anon_sym_1,
  [2519] = 1,
    ACTIONS(461), 1,
      sym_variation_delimiter_close,
  [2523] = 1,
    ACTIONS(463), 1,
      sym_inline_comment_delimiter_close,
  [2527] = 1,
    ACTIONS(465), 1,
      anon_sym_22,
  [2531] = 1,
    ACTIONS(467), 1,
      sym_tagpair_delimiter_close,
  [2535] = 1,
    ACTIONS(469), 1,
      sym_double_quote,
  [2539] = 1,
    ACTIONS(471), 1,
      sym_rest_of_line_comment_text,
  [2543] = 1,
    ACTIONS(473), 1,
      sym__san_promotable_piece,
  [2547] = 1,
    ACTIONS(429), 1,
      sym__san_rank,
  [2551] = 1,
    ACTIONS(475), 1,
      sym_tagpair_delimiter_close,
  [2555] = 1,
    ACTIONS(477), 1,
      sym__san_rank,
  [2559] = 1,
    ACTIONS(479), 1,
      sym_rest_of_line_comment_text,
  [2563] = 1,
    ACTIONS(481), 1,
      sym_inline_comment_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 217,
  [SMALL_STATE(6)] = 293,
  [SMALL_STATE(7)] = 334,
  [SMALL_STATE(8)] = 375,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 447,
  [SMALL_STATE(11)] = 479,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 545,
  [SMALL_STATE(14)] = 583,
  [SMALL_STATE(15)] = 615,
  [SMALL_STATE(16)] = 647,
  [SMALL_STATE(17)] = 685,
  [SMALL_STATE(18)] = 717,
  [SMALL_STATE(19)] = 749,
  [SMALL_STATE(20)] = 781,
  [SMALL_STATE(21)] = 813,
  [SMALL_STATE(22)] = 847,
  [SMALL_STATE(23)] = 878,
  [SMALL_STATE(24)] = 909,
  [SMALL_STATE(25)] = 940,
  [SMALL_STATE(26)] = 971,
  [SMALL_STATE(27)] = 1002,
  [SMALL_STATE(28)] = 1033,
  [SMALL_STATE(29)] = 1064,
  [SMALL_STATE(30)] = 1095,
  [SMALL_STATE(31)] = 1126,
  [SMALL_STATE(32)] = 1157,
  [SMALL_STATE(33)] = 1187,
  [SMALL_STATE(34)] = 1217,
  [SMALL_STATE(35)] = 1271,
  [SMALL_STATE(36)] = 1325,
  [SMALL_STATE(37)] = 1376,
  [SMALL_STATE(38)] = 1427,
  [SMALL_STATE(39)] = 1463,
  [SMALL_STATE(40)] = 1499,
  [SMALL_STATE(41)] = 1519,
  [SMALL_STATE(42)] = 1544,
  [SMALL_STATE(43)] = 1569,
  [SMALL_STATE(44)] = 1591,
  [SMALL_STATE(45)] = 1609,
  [SMALL_STATE(46)] = 1626,
  [SMALL_STATE(47)] = 1642,
  [SMALL_STATE(48)] = 1674,
  [SMALL_STATE(49)] = 1690,
  [SMALL_STATE(50)] = 1706,
  [SMALL_STATE(51)] = 1722,
  [SMALL_STATE(52)] = 1754,
  [SMALL_STATE(53)] = 1770,
  [SMALL_STATE(54)] = 1788,
  [SMALL_STATE(55)] = 1804,
  [SMALL_STATE(56)] = 1820,
  [SMALL_STATE(57)] = 1836,
  [SMALL_STATE(58)] = 1852,
  [SMALL_STATE(59)] = 1867,
  [SMALL_STATE(60)] = 1882,
  [SMALL_STATE(61)] = 1895,
  [SMALL_STATE(62)] = 1910,
  [SMALL_STATE(63)] = 1925,
  [SMALL_STATE(64)] = 1938,
  [SMALL_STATE(65)] = 1951,
  [SMALL_STATE(66)] = 1966,
  [SMALL_STATE(67)] = 1981,
  [SMALL_STATE(68)] = 1996,
  [SMALL_STATE(69)] = 2011,
  [SMALL_STATE(70)] = 2026,
  [SMALL_STATE(71)] = 2045,
  [SMALL_STATE(72)] = 2064,
  [SMALL_STATE(73)] = 2080,
  [SMALL_STATE(74)] = 2092,
  [SMALL_STATE(75)] = 2106,
  [SMALL_STATE(76)] = 2118,
  [SMALL_STATE(77)] = 2126,
  [SMALL_STATE(78)] = 2137,
  [SMALL_STATE(79)] = 2148,
  [SMALL_STATE(80)] = 2161,
  [SMALL_STATE(81)] = 2170,
  [SMALL_STATE(82)] = 2181,
  [SMALL_STATE(83)] = 2192,
  [SMALL_STATE(84)] = 2203,
  [SMALL_STATE(85)] = 2214,
  [SMALL_STATE(86)] = 2223,
  [SMALL_STATE(87)] = 2234,
  [SMALL_STATE(88)] = 2247,
  [SMALL_STATE(89)] = 2260,
  [SMALL_STATE(90)] = 2271,
  [SMALL_STATE(91)] = 2282,
  [SMALL_STATE(92)] = 2291,
  [SMALL_STATE(93)] = 2304,
  [SMALL_STATE(94)] = 2310,
  [SMALL_STATE(95)] = 2316,
  [SMALL_STATE(96)] = 2322,
  [SMALL_STATE(97)] = 2332,
  [SMALL_STATE(98)] = 2338,
  [SMALL_STATE(99)] = 2344,
  [SMALL_STATE(100)] = 2350,
  [SMALL_STATE(101)] = 2356,
  [SMALL_STATE(102)] = 2366,
  [SMALL_STATE(103)] = 2372,
  [SMALL_STATE(104)] = 2378,
  [SMALL_STATE(105)] = 2384,
  [SMALL_STATE(106)] = 2390,
  [SMALL_STATE(107)] = 2397,
  [SMALL_STATE(108)] = 2404,
  [SMALL_STATE(109)] = 2411,
  [SMALL_STATE(110)] = 2418,
  [SMALL_STATE(111)] = 2425,
  [SMALL_STATE(112)] = 2432,
  [SMALL_STATE(113)] = 2439,
  [SMALL_STATE(114)] = 2446,
  [SMALL_STATE(115)] = 2453,
  [SMALL_STATE(116)] = 2460,
  [SMALL_STATE(117)] = 2467,
  [SMALL_STATE(118)] = 2471,
  [SMALL_STATE(119)] = 2475,
  [SMALL_STATE(120)] = 2479,
  [SMALL_STATE(121)] = 2483,
  [SMALL_STATE(122)] = 2487,
  [SMALL_STATE(123)] = 2491,
  [SMALL_STATE(124)] = 2495,
  [SMALL_STATE(125)] = 2499,
  [SMALL_STATE(126)] = 2503,
  [SMALL_STATE(127)] = 2507,
  [SMALL_STATE(128)] = 2511,
  [SMALL_STATE(129)] = 2515,
  [SMALL_STATE(130)] = 2519,
  [SMALL_STATE(131)] = 2523,
  [SMALL_STATE(132)] = 2527,
  [SMALL_STATE(133)] = 2531,
  [SMALL_STATE(134)] = 2535,
  [SMALL_STATE(135)] = 2539,
  [SMALL_STATE(136)] = 2543,
  [SMALL_STATE(137)] = 2547,
  [SMALL_STATE(138)] = 2551,
  [SMALL_STATE(139)] = 2555,
  [SMALL_STATE(140)] = 2559,
  [SMALL_STATE(141)] = 2563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(126),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(34),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(120),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(24),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(114),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(79),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_destination, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_destination, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17), SHIFT_REPEAT(127),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 20),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 20),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 31),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 31),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(140),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(35),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(141),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(65),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(115),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(92),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(53),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(61),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 24),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 18),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 18),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 11),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 11),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(140),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(127),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, .production_id = 15),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(135),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(140),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 14),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 14),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 26),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 26),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 19),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 19),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 30),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 30),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(90),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 19),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 14),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, .production_id = 30),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 18),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 11),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 26),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [451] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 34),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 28),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
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
