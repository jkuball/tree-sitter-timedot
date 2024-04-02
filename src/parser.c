#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_transaction_token1 = 2,
  sym_account = 3,
  anon_sym_DOT = 4,
  anon_sym_POUND = 5,
  anon_sym_SEMI = 6,
  aux_sym_comment_token1 = 7,
  anon_sym_SPACE = 8,
  anon_sym_TAB = 9,
  sym__dsep = 10,
  sym__2d = 11,
  sym__4d = 12,
  sym_source_file = 13,
  sym_day_entry = 14,
  sym_transaction = 15,
  sym_amount = 16,
  sym_comment = 17,
  sym_date = 18,
  aux_sym__whitespace = 19,
  sym__single_date = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_day_entry_repeat1 = 22,
  aux_sym_amount_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_transaction_token1] = "transaction_token1",
  [sym_account] = "account",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym__4d] = "_4d",
  [sym_source_file] = "source_file",
  [sym_day_entry] = "day_entry",
  [sym_transaction] = "transaction",
  [sym_amount] = "amount",
  [sym_comment] = "comment",
  [sym_date] = "date",
  [aux_sym__whitespace] = "_whitespace",
  [sym__single_date] = "_single_date",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_day_entry_repeat1] = "day_entry_repeat1",
  [aux_sym_amount_repeat1] = "amount_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_transaction_token1] = aux_sym_transaction_token1,
  [sym_account] = sym_account,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym__4d] = sym__4d,
  [sym_source_file] = sym_source_file,
  [sym_day_entry] = sym_day_entry,
  [sym_transaction] = sym_transaction,
  [sym_amount] = sym_amount,
  [sym_comment] = sym_comment,
  [sym_date] = sym_date,
  [aux_sym__whitespace] = aux_sym__whitespace,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
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
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(5);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(11);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(10);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_transaction_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_account);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
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
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym__4d] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym_day_entry] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_date] = STATE(26),
    [sym__single_date] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym__2d] = ACTIONS(9),
    [sym__4d] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      sym_account,
    ACTIONS(19), 1,
      sym__2d,
    STATE(15), 1,
      aux_sym__whitespace,
    ACTIONS(17), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(4), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [25] = 5,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym__2d,
    STATE(8), 1,
      aux_sym_amount_repeat1,
    STATE(11), 1,
      sym_amount,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [48] = 6,
    ACTIONS(29), 1,
      sym_account,
    ACTIONS(35), 1,
      sym__2d,
    STATE(15), 1,
      aux_sym__whitespace,
    ACTIONS(32), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(4), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [73] = 6,
    ACTIONS(15), 1,
      sym_account,
    ACTIONS(39), 1,
      sym__2d,
    STATE(15), 1,
      aux_sym__whitespace,
    ACTIONS(17), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(2), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [98] = 5,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym__2d,
    STATE(8), 1,
      aux_sym_amount_repeat1,
    STATE(12), 1,
      sym_amount,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [121] = 4,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      sym__2d,
    STATE(7), 1,
      aux_sym_amount_repeat1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [141] = 4,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(56), 1,
      sym__2d,
    STATE(7), 1,
      aux_sym_amount_repeat1,
    ACTIONS(52), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [161] = 8,
    ACTIONS(9), 1,
      sym__2d,
    ACTIONS(11), 1,
      sym__4d,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__single_date,
    STATE(26), 1,
      sym_date,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(10), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [189] = 8,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym__2d,
    ACTIONS(73), 1,
      sym__4d,
    STATE(17), 1,
      sym__single_date,
    STATE(26), 1,
      sym_date,
    ACTIONS(67), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(10), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [217] = 2,
    ACTIONS(78), 1,
      sym__2d,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [231] = 2,
    ACTIONS(25), 1,
      sym__2d,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [245] = 2,
    ACTIONS(82), 1,
      sym__2d,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [256] = 3,
    ACTIONS(84), 1,
      sym_account,
    STATE(14), 1,
      aux_sym__whitespace,
    ACTIONS(86), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [267] = 3,
    ACTIONS(89), 1,
      sym_account,
    STATE(14), 1,
      aux_sym__whitespace,
    ACTIONS(91), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [278] = 2,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym__dsep,
  [285] = 1,
    ACTIONS(97), 1,
      anon_sym_LF,
  [289] = 1,
    ACTIONS(99), 1,
      aux_sym_transaction_token1,
  [293] = 1,
    ACTIONS(101), 1,
      sym__2d,
  [297] = 1,
    ACTIONS(103), 1,
      aux_sym_comment_token1,
  [301] = 1,
    ACTIONS(105), 1,
      aux_sym_transaction_token1,
  [305] = 1,
    ACTIONS(95), 1,
      sym__dsep,
  [309] = 1,
    ACTIONS(107), 1,
      sym__2d,
  [313] = 1,
    ACTIONS(109), 1,
      anon_sym_LF,
  [317] = 1,
    ACTIONS(111), 1,
      sym__2d,
  [321] = 1,
    ACTIONS(113), 1,
      anon_sym_LF,
  [325] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [329] = 1,
    ACTIONS(117), 1,
      sym__dsep,
  [333] = 1,
    ACTIONS(119), 1,
      sym__dsep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 289,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 305,
  [SMALL_STATE(23)] = 309,
  [SMALL_STATE(24)] = 313,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 321,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 329,
  [SMALL_STATE(29)] = 333,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_amount_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_amount_repeat1, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_amount_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
