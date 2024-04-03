#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  aux_sym__whitespace = 18,
  sym_date = 19,
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
  [aux_sym__whitespace] = "_whitespace",
  [sym_date] = "date",
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
  [aux_sym__whitespace] = aux_sym__whitespace,
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
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(17);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(5);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(17);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ';') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(10);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(9);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_transaction_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_account);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
    [sym_source_file] = STATE(28),
    [sym_day_entry] = STATE(5),
    [sym_comment] = STATE(31),
    [sym_date] = STATE(26),
    [sym__single_date] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(5),
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
    ACTIONS(21), 1,
      sym__2d,
    STATE(23), 1,
      aux_sym__whitespace,
    ACTIONS(18), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(2), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [25] = 6,
    ACTIONS(25), 1,
      sym_account,
    ACTIONS(29), 1,
      sym__2d,
    STATE(23), 1,
      aux_sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(2), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [50] = 6,
    ACTIONS(25), 1,
      sym_account,
    ACTIONS(33), 1,
      sym__2d,
    STATE(23), 1,
      aux_sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(3), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [75] = 9,
    ACTIONS(9), 1,
      sym__2d,
    ACTIONS(11), 1,
      sym__4d,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_date,
    STATE(27), 1,
      sym__single_date,
    STATE(31), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(6), 2,
      sym_day_entry,
      aux_sym_source_file_repeat1,
  [105] = 9,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      sym__2d,
    ACTIONS(50), 1,
      sym__4d,
    STATE(26), 1,
      sym_date,
    STATE(27), 1,
      sym__single_date,
    STATE(31), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(6), 2,
      sym_day_entry,
      aux_sym_source_file_repeat1,
  [135] = 8,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_amount,
    STATE(17), 1,
      aux_sym__whitespace,
    STATE(18), 1,
      aux_sym_amount_repeat1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [162] = 8,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_amount_repeat1,
    STATE(19), 1,
      aux_sym__whitespace,
    STATE(20), 1,
      sym_amount,
    STATE(29), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(61), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [189] = 2,
    ACTIONS(65), 1,
      sym__2d,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [203] = 2,
    ACTIONS(69), 1,
      sym__2d,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [217] = 2,
    ACTIONS(73), 1,
      sym__2d,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [231] = 2,
    ACTIONS(77), 1,
      sym__2d,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [245] = 2,
    ACTIONS(81), 1,
      sym__2d,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [259] = 5,
    ACTIONS(83), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym__whitespace,
    STATE(42), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [277] = 5,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(14), 1,
      aux_sym__whitespace,
    STATE(39), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(89), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [295] = 3,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_amount_repeat1,
    ACTIONS(91), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [309] = 5,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym__whitespace,
    STATE(39), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [327] = 3,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_amount_repeat1,
    ACTIONS(96), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [341] = 5,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym__whitespace,
    STATE(34), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [359] = 5,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__whitespace,
    STATE(34), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [377] = 3,
    STATE(21), 1,
      aux_sym__whitespace,
    ACTIONS(102), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(100), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
  [391] = 2,
    ACTIONS(105), 1,
      sym__2d,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [402] = 3,
    ACTIONS(107), 1,
      sym_account,
    STATE(21), 1,
      aux_sym__whitespace,
    ACTIONS(85), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [413] = 2,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 1,
      sym__dsep,
  [420] = 1,
    ACTIONS(113), 1,
      anon_sym_LF,
  [424] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [428] = 1,
    ACTIONS(117), 1,
      anon_sym_LF,
  [432] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [436] = 1,
    ACTIONS(53), 1,
      anon_sym_LF,
  [440] = 1,
    ACTIONS(121), 1,
      aux_sym_transaction_token1,
  [444] = 1,
    ACTIONS(123), 1,
      anon_sym_LF,
  [448] = 1,
    ACTIONS(125), 1,
      sym__dsep,
  [452] = 1,
    ACTIONS(127), 1,
      sym__dsep,
  [456] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [460] = 1,
    ACTIONS(129), 1,
      sym__2d,
  [464] = 1,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
  [468] = 1,
    ACTIONS(133), 1,
      aux_sym_transaction_token1,
  [472] = 1,
    ACTIONS(111), 1,
      sym__dsep,
  [476] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [480] = 1,
    ACTIONS(135), 1,
      sym__2d,
  [484] = 1,
    ACTIONS(137), 1,
      sym__2d,
  [488] = 1,
    ACTIONS(139), 1,
      anon_sym_LF,
  [492] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 203,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 295,
  [SMALL_STATE(17)] = 309,
  [SMALL_STATE(18)] = 327,
  [SMALL_STATE(19)] = 341,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 377,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 424,
  [SMALL_STATE(27)] = 428,
  [SMALL_STATE(28)] = 432,
  [SMALL_STATE(29)] = 436,
  [SMALL_STATE(30)] = 440,
  [SMALL_STATE(31)] = 444,
  [SMALL_STATE(32)] = 448,
  [SMALL_STATE(33)] = 452,
  [SMALL_STATE(34)] = 456,
  [SMALL_STATE(35)] = 460,
  [SMALL_STATE(36)] = 464,
  [SMALL_STATE(37)] = 468,
  [SMALL_STATE(38)] = 472,
  [SMALL_STATE(39)] = 476,
  [SMALL_STATE(40)] = 480,
  [SMALL_STATE(41)] = 484,
  [SMALL_STATE(42)] = 488,
  [SMALL_STATE(43)] = 492,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(37),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_amount_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_amount_repeat1, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(21),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
