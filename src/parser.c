#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_transaction_token1 = 1,
  sym_account = 2,
  anon_sym_DOT = 3,
  anon_sym_POUND = 4,
  anon_sym_SEMI = 5,
  aux_sym_comment_token1 = 6,
  sym__dsep = 7,
  sym__2d = 8,
  sym__4d = 9,
  sym_source_file = 10,
  sym_day_entry = 11,
  sym_transaction = 12,
  sym_amount = 13,
  sym_comment = 14,
  sym_date = 15,
  sym__single_date = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_day_entry_repeat1 = 18,
  aux_sym_amount_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_transaction_token1] = "transaction_token1",
  [sym_account] = "account",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym__4d] = "_4d",
  [sym_source_file] = "source_file",
  [sym_day_entry] = "day_entry",
  [sym_transaction] = "transaction",
  [sym_amount] = "amount",
  [sym_comment] = "comment",
  [sym_date] = "date",
  [sym__single_date] = "_single_date",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_day_entry_repeat1] = "day_entry_repeat1",
  [aux_sym_amount_repeat1] = "amount_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_transaction_token1] = aux_sym_transaction_token1,
  [sym_account] = sym_account,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym__4d] = sym__4d,
  [sym_source_file] = sym_source_file,
  [sym_day_entry] = sym_day_entry,
  [sym_transaction] = sym_transaction,
  [sym_amount] = sym_amount,
  [sym_comment] = sym_comment,
  [sym_date] = sym_date,
  [sym__single_date] = sym__single_date,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_day_entry_repeat1] = aux_sym_day_entry_repeat1,
  [aux_sym_amount_repeat1] = aux_sym_amount_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_transaction_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__dsep] = {
    .visible = false,
    .named = true,
  },
  [sym__2d] = {
    .visible = false,
    .named = true,
  },
  [sym__4d] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_day_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym__single_date] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_day_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_amount_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(4);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 7:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(4);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_transaction_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_account);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__4d);
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
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym__4d] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_day_entry] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_date] = STATE(6),
    [sym__single_date] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym__2d] = ACTIONS(7),
    [sym__4d] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym__2d,
    ACTIONS(9), 1,
      sym__4d,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_date,
    STATE(11), 1,
      sym__single_date,
    ACTIONS(5), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(3), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [25] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(18), 1,
      sym__2d,
    ACTIONS(21), 1,
      sym__4d,
    STATE(6), 1,
      sym_date,
    STATE(11), 1,
      sym__single_date,
    ACTIONS(15), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(3), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [50] = 5,
    ACTIONS(26), 1,
      anon_sym_DOT,
    ACTIONS(28), 1,
      sym__2d,
    STATE(8), 1,
      aux_sym_amount_repeat1,
    STATE(12), 1,
      sym_amount,
    ACTIONS(24), 5,
      ts_builtin_sym_end,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [70] = 4,
    ACTIONS(32), 1,
      sym_account,
    ACTIONS(35), 1,
      sym__2d,
    STATE(5), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [87] = 4,
    ACTIONS(39), 1,
      sym_account,
    ACTIONS(41), 1,
      sym__2d,
    STATE(7), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [104] = 4,
    ACTIONS(39), 1,
      sym_account,
    ACTIONS(45), 1,
      sym__2d,
    STATE(5), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [121] = 4,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      sym__2d,
    STATE(9), 1,
      aux_sym_amount_repeat1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [138] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(58), 1,
      sym__2d,
    STATE(9), 1,
      aux_sym_amount_repeat1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [155] = 3,
    ACTIONS(62), 1,
      sym__dsep,
    ACTIONS(64), 1,
      sym__2d,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [169] = 2,
    ACTIONS(68), 1,
      sym__2d,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [180] = 2,
    ACTIONS(72), 1,
      sym__2d,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [191] = 2,
    ACTIONS(76), 1,
      sym__2d,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [202] = 2,
    ACTIONS(80), 1,
      sym__2d,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [212] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [216] = 1,
    ACTIONS(84), 1,
      sym__2d,
  [220] = 1,
    ACTIONS(86), 1,
      sym__2d,
  [224] = 1,
    ACTIONS(88), 1,
      aux_sym_transaction_token1,
  [228] = 1,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
  [232] = 1,
    ACTIONS(62), 1,
      sym__dsep,
  [236] = 1,
    ACTIONS(92), 1,
      sym__dsep,
  [240] = 1,
    ACTIONS(94), 1,
      sym__dsep,
  [244] = 1,
    ACTIONS(96), 1,
      sym__2d,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 155,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 202,
  [SMALL_STATE(15)] = 212,
  [SMALL_STATE(16)] = 216,
  [SMALL_STATE(17)] = 220,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 244,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_amount_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_amount_repeat1, 2), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_amount_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_date, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_date, 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_timedot(void) {
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
