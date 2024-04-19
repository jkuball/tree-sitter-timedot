#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_account = 2,
  anon_sym_POUND = 3,
  anon_sym_SEMI = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_STAR = 6,
  aux_sym__quantity_character_token1 = 7,
  aux_sym__quantity_number_token1 = 8,
  aux_sym__quantity_number_token2 = 9,
  anon_sym_s = 10,
  anon_sym_m = 11,
  anon_sym_h = 12,
  anon_sym_d = 13,
  anon_sym_w = 14,
  anon_sym_mo = 15,
  anon_sym_y = 16,
  anon_sym_SPACE = 17,
  anon_sym_TAB = 18,
  anon_sym_ = 19,
  anon_sym_TAB2 = 20,
  sym__dsep = 21,
  sym__2d = 22,
  sym__4d = 23,
  sym_source_file = 24,
  sym_day_entry = 25,
  sym_transaction = 26,
  sym_comment = 27,
  sym_quantity = 28,
  sym_date = 29,
  sym_org_heading = 30,
  aux_sym__quantity_character = 31,
  sym__quantity_number = 32,
  sym__unit = 33,
  sym__whitespace = 34,
  sym__spacer = 35,
  sym__single_date = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_day_entry_repeat1 = 38,
  aux_sym_org_heading_repeat1 = 39,
  aux_sym__whitespace_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_account] = "account",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR] = "*",
  [aux_sym__quantity_character_token1] = "_quantity_character_token1",
  [aux_sym__quantity_number_token1] = "_quantity_number_token1",
  [aux_sym__quantity_number_token2] = "_quantity_number_token2",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_w] = "w",
  [anon_sym_mo] = "mo",
  [anon_sym_y] = "y",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym__4d] = "_4d",
  [sym_source_file] = "source_file",
  [sym_day_entry] = "day_entry",
  [sym_transaction] = "transaction",
  [sym_comment] = "comment",
  [sym_quantity] = "quantity",
  [sym_date] = "date",
  [sym_org_heading] = "org_heading",
  [aux_sym__quantity_character] = "_quantity_character",
  [sym__quantity_number] = "_quantity_number",
  [sym__unit] = "_unit",
  [sym__whitespace] = "_whitespace",
  [sym__spacer] = "_spacer",
  [sym__single_date] = "_single_date",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_day_entry_repeat1] = "day_entry_repeat1",
  [aux_sym_org_heading_repeat1] = "org_heading_repeat1",
  [aux_sym__whitespace_repeat1] = "_whitespace_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_account] = sym_account,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym__quantity_character_token1] = aux_sym__quantity_character_token1,
  [aux_sym__quantity_number_token1] = aux_sym__quantity_number_token1,
  [aux_sym__quantity_number_token2] = aux_sym__quantity_number_token2,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_mo] = anon_sym_mo,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym__4d] = sym__4d,
  [sym_source_file] = sym_source_file,
  [sym_day_entry] = sym_day_entry,
  [sym_transaction] = sym_transaction,
  [sym_comment] = sym_comment,
  [sym_quantity] = sym_quantity,
  [sym_date] = sym_date,
  [sym_org_heading] = sym_org_heading,
  [aux_sym__quantity_character] = aux_sym__quantity_character,
  [sym__quantity_number] = sym__quantity_number,
  [sym__unit] = sym__unit,
  [sym__whitespace] = sym__whitespace,
  [sym__spacer] = sym__spacer,
  [sym__single_date] = sym__single_date,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_day_entry_repeat1] = aux_sym_day_entry_repeat1,
  [aux_sym_org_heading_repeat1] = aux_sym_org_heading_repeat1,
  [aux_sym__whitespace_repeat1] = aux_sym__whitespace_repeat1,
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
  [sym_account] = {
    .visible = true,
    .named = true,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quantity_character_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quantity_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quantity_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_org_heading] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quantity_character] = {
    .visible = false,
    .named = false,
  },
  [sym__quantity_number] = {
    .visible = false,
    .named = true,
  },
  [sym__unit] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__spacer] = {
    .visible = false,
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
  [aux_sym_org_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_repeat1] = {
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
  [24] = 23,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 20,
  [31] = 31,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 23,
  [41] = 20,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(34);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == ' ' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ';') ADVANCE(19);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_account);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_account);
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__quantity_character_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__quantity_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_mo);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__4d);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym__quantity_number_token1] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_mo] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB2] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym__4d] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_day_entry] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_date] = STATE(32),
    [sym_org_heading] = STATE(43),
    [sym__whitespace] = STATE(42),
    [sym__single_date] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_org_heading_repeat1] = STATE(26),
    [aux_sym__whitespace_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_SPACE] = ACTIONS(11),
    [anon_sym_TAB] = ACTIONS(11),
    [sym__2d] = ACTIONS(13),
    [sym__4d] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      sym__2d,
    ACTIONS(15), 1,
      sym__4d,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym__whitespace_repeat1,
    STATE(26), 1,
      aux_sym_org_heading_repeat1,
    STATE(32), 1,
      sym_date,
    STATE(42), 1,
      sym__whitespace,
    STATE(43), 1,
      sym_org_heading,
    STATE(46), 1,
      sym__single_date,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(11), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(3), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [47] = 14,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym__2d,
    ACTIONS(38), 1,
      sym__4d,
    STATE(24), 1,
      aux_sym__whitespace_repeat1,
    STATE(26), 1,
      aux_sym_org_heading_repeat1,
    STATE(32), 1,
      sym_date,
    STATE(42), 1,
      sym__whitespace,
    STATE(43), 1,
      sym_org_heading,
    STATE(46), 1,
      sym__single_date,
    ACTIONS(26), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(32), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(3), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [94] = 15,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      aux_sym__quantity_character_token1,
    ACTIONS(45), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(47), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(49), 1,
      anon_sym_SPACE,
    ACTIONS(51), 1,
      anon_sym_TAB,
    STATE(15), 1,
      sym__spacer,
    STATE(29), 1,
      aux_sym__quantity_character,
    STATE(33), 1,
      aux_sym__whitespace_repeat1,
    STATE(39), 1,
      sym_quantity,
    STATE(44), 1,
      sym__quantity_number,
    STATE(45), 1,
      sym__whitespace,
    STATE(51), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(53), 2,
      anon_sym_,
      anon_sym_TAB2,
  [142] = 15,
    ACTIONS(43), 1,
      aux_sym__quantity_character_token1,
    ACTIONS(45), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(47), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(49), 1,
      anon_sym_SPACE,
    ACTIONS(51), 1,
      anon_sym_TAB,
    ACTIONS(55), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__spacer,
    STATE(29), 1,
      aux_sym__quantity_character,
    STATE(33), 1,
      aux_sym__whitespace_repeat1,
    STATE(36), 1,
      sym_quantity,
    STATE(44), 1,
      sym__quantity_number,
    STATE(45), 1,
      sym__whitespace,
    STATE(52), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(53), 2,
      anon_sym_,
      anon_sym_TAB2,
  [190] = 8,
    ACTIONS(59), 1,
      sym_account,
    STATE(10), 1,
      aux_sym_day_entry_repeat1,
    STATE(40), 1,
      aux_sym__whitespace_repeat1,
    STATE(56), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_transaction,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(61), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [221] = 8,
    ACTIONS(59), 1,
      sym_account,
    STATE(9), 1,
      aux_sym_day_entry_repeat1,
    STATE(40), 1,
      aux_sym__whitespace_repeat1,
    STATE(56), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_transaction,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [252] = 8,
    ACTIONS(59), 1,
      sym_account,
    STATE(6), 1,
      aux_sym_day_entry_repeat1,
    STATE(40), 1,
      aux_sym__whitespace_repeat1,
    STATE(56), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_transaction,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [283] = 8,
    ACTIONS(59), 1,
      sym_account,
    STATE(10), 1,
      aux_sym_day_entry_repeat1,
    STATE(40), 1,
      aux_sym__whitespace_repeat1,
    STATE(56), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_transaction,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [314] = 8,
    ACTIONS(75), 1,
      sym_account,
    STATE(10), 1,
      aux_sym_day_entry_repeat1,
    STATE(40), 1,
      aux_sym__whitespace_repeat1,
    STATE(56), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_transaction,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(80), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(78), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [345] = 8,
    ACTIONS(59), 1,
      sym_account,
    STATE(10), 1,
      aux_sym_day_entry_repeat1,
    STATE(40), 1,
      aux_sym__whitespace_repeat1,
    STATE(56), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_transaction,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [376] = 8,
    ACTIONS(59), 1,
      sym_account,
    STATE(11), 1,
      aux_sym_day_entry_repeat1,
    STATE(40), 1,
      aux_sym__whitespace_repeat1,
    STATE(56), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_transaction,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [407] = 7,
    ACTIONS(91), 1,
      anon_sym_SPACE,
    ACTIONS(93), 1,
      anon_sym_TAB,
    STATE(23), 1,
      aux_sym__whitespace_repeat1,
    STATE(27), 1,
      sym__whitespace,
    ACTIONS(89), 2,
      aux_sym__quantity_character_token1,
      aux_sym__quantity_number_token1,
    ACTIONS(95), 2,
      anon_sym_,
      anon_sym_TAB2,
    ACTIONS(87), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      aux_sym__quantity_number_token2,
  [434] = 4,
    ACTIONS(101), 1,
      anon_sym_m,
    STATE(48), 1,
      sym__unit,
    ACTIONS(97), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(99), 6,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_mo,
      anon_sym_y,
  [454] = 9,
    ACTIONS(45), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(47), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      aux_sym__quantity_character_token1,
    STATE(29), 1,
      aux_sym__quantity_character,
    STATE(36), 1,
      sym_quantity,
    STATE(44), 1,
      sym__quantity_number,
    STATE(52), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [483] = 5,
    STATE(23), 1,
      aux_sym__whitespace_repeat1,
    STATE(28), 1,
      sym__whitespace,
    ACTIONS(93), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(107), 2,
      aux_sym__quantity_character_token1,
      aux_sym__quantity_number_token1,
    ACTIONS(105), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      aux_sym__quantity_number_token2,
  [504] = 5,
    STATE(23), 1,
      aux_sym__whitespace_repeat1,
    STATE(27), 1,
      sym__whitespace,
    ACTIONS(89), 2,
      aux_sym__quantity_character_token1,
      aux_sym__quantity_number_token1,
    ACTIONS(93), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(87), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      aux_sym__quantity_number_token2,
  [525] = 9,
    ACTIONS(45), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(47), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(103), 1,
      aux_sym__quantity_character_token1,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(29), 1,
      aux_sym__quantity_character,
    STATE(35), 1,
      sym_quantity,
    STATE(44), 1,
      sym__quantity_number,
    STATE(57), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [554] = 2,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(78), 6,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [569] = 4,
    STATE(20), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(113), 2,
      aux_sym__quantity_character_token1,
      aux_sym__quantity_number_token1,
    ACTIONS(115), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(111), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      aux_sym__quantity_number_token2,
  [587] = 2,
    ACTIONS(120), 1,
      sym__2d,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [601] = 2,
    ACTIONS(122), 1,
      sym__2d,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [615] = 4,
    STATE(20), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(126), 2,
      aux_sym__quantity_character_token1,
      aux_sym__quantity_number_token1,
    ACTIONS(128), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(124), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      aux_sym__quantity_number_token2,
  [633] = 4,
    ACTIONS(126), 1,
      sym__2d,
    STATE(25), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(130), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(124), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [650] = 4,
    ACTIONS(113), 1,
      sym__2d,
    STATE(25), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(132), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(111), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [667] = 5,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(24), 1,
      aux_sym__whitespace_repeat1,
    STATE(38), 1,
      aux_sym_org_heading_repeat1,
    STATE(49), 1,
      sym__whitespace,
    ACTIONS(11), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [684] = 2,
    ACTIONS(107), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(105), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      aux_sym__quantity_character_token1,
      aux_sym__quantity_number_token2,
  [695] = 2,
    ACTIONS(139), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(137), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      aux_sym__quantity_character_token1,
      aux_sym__quantity_number_token2,
  [706] = 3,
    ACTIONS(143), 1,
      aux_sym__quantity_character_token1,
    STATE(34), 1,
      aux_sym__quantity_character,
    ACTIONS(141), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [718] = 4,
    ACTIONS(145), 1,
      anon_sym_SPACE,
    ACTIONS(148), 1,
      anon_sym_TAB,
    STATE(30), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(111), 2,
      anon_sym_,
      anon_sym_TAB2,
  [732] = 4,
    ACTIONS(151), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym__whitespace_repeat1,
    STATE(55), 1,
      sym__whitespace,
    ACTIONS(11), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [746] = 4,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym__whitespace_repeat1,
    STATE(61), 1,
      sym__whitespace,
    ACTIONS(11), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [760] = 3,
    ACTIONS(155), 1,
      anon_sym_SPACE,
    STATE(30), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(124), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [772] = 3,
    ACTIONS(159), 1,
      aux_sym__quantity_character_token1,
    STATE(34), 1,
      aux_sym__quantity_character,
    ACTIONS(157), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [784] = 3,
    ACTIONS(162), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [795] = 3,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [806] = 2,
    ACTIONS(166), 1,
      sym__dsep,
    ACTIONS(164), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [815] = 3,
    ACTIONS(168), 1,
      anon_sym_STAR,
    STATE(38), 1,
      aux_sym_org_heading_repeat1,
    ACTIONS(171), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [826] = 3,
    ACTIONS(55), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [837] = 3,
    ACTIONS(126), 1,
      sym_account,
    STATE(41), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(173), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [848] = 3,
    ACTIONS(113), 1,
      sym_account,
    STATE(41), 1,
      aux_sym__whitespace_repeat1,
    ACTIONS(175), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [859] = 3,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [870] = 4,
    ACTIONS(13), 1,
      sym__2d,
    ACTIONS(15), 1,
      sym__4d,
    STATE(31), 1,
      sym_date,
    STATE(46), 1,
      sym__single_date,
  [883] = 1,
    ACTIONS(141), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [889] = 1,
    ACTIONS(180), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [895] = 1,
    ACTIONS(182), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [901] = 1,
    ACTIONS(184), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [907] = 1,
    ACTIONS(186), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [913] = 2,
    ACTIONS(188), 1,
      sym__2d,
    ACTIONS(190), 1,
      sym__4d,
  [920] = 1,
    ACTIONS(192), 1,
      sym__2d,
  [924] = 1,
    ACTIONS(55), 1,
      anon_sym_LF,
  [928] = 1,
    ACTIONS(109), 1,
      anon_sym_LF,
  [932] = 1,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
  [936] = 1,
    ACTIONS(196), 1,
      sym__2d,
  [940] = 1,
    ACTIONS(198), 1,
      anon_sym_LF,
  [944] = 1,
    ACTIONS(200), 1,
      sym_account,
  [948] = 1,
    ACTIONS(162), 1,
      anon_sym_LF,
  [952] = 1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [956] = 1,
    ACTIONS(204), 1,
      anon_sym_LF,
  [960] = 1,
    ACTIONS(166), 1,
      sym__dsep,
  [964] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [968] = 1,
    ACTIONS(206), 1,
      sym__2d,
  [972] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [976] = 1,
    ACTIONS(210), 1,
      sym__dsep,
  [980] = 1,
    ACTIONS(212), 1,
      sym__dsep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 314,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 434,
  [SMALL_STATE(15)] = 454,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 504,
  [SMALL_STATE(18)] = 525,
  [SMALL_STATE(19)] = 554,
  [SMALL_STATE(20)] = 569,
  [SMALL_STATE(21)] = 587,
  [SMALL_STATE(22)] = 601,
  [SMALL_STATE(23)] = 615,
  [SMALL_STATE(24)] = 633,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 667,
  [SMALL_STATE(27)] = 684,
  [SMALL_STATE(28)] = 695,
  [SMALL_STATE(29)] = 706,
  [SMALL_STATE(30)] = 718,
  [SMALL_STATE(31)] = 732,
  [SMALL_STATE(32)] = 746,
  [SMALL_STATE(33)] = 760,
  [SMALL_STATE(34)] = 772,
  [SMALL_STATE(35)] = 784,
  [SMALL_STATE(36)] = 795,
  [SMALL_STATE(37)] = 806,
  [SMALL_STATE(38)] = 815,
  [SMALL_STATE(39)] = 826,
  [SMALL_STATE(40)] = 837,
  [SMALL_STATE(41)] = 848,
  [SMALL_STATE(42)] = 859,
  [SMALL_STATE(43)] = 870,
  [SMALL_STATE(44)] = 883,
  [SMALL_STATE(45)] = 889,
  [SMALL_STATE(46)] = 895,
  [SMALL_STATE(47)] = 901,
  [SMALL_STATE(48)] = 907,
  [SMALL_STATE(49)] = 913,
  [SMALL_STATE(50)] = 920,
  [SMALL_STATE(51)] = 924,
  [SMALL_STATE(52)] = 928,
  [SMALL_STATE(53)] = 932,
  [SMALL_STATE(54)] = 936,
  [SMALL_STATE(55)] = 940,
  [SMALL_STATE(56)] = 944,
  [SMALL_STATE(57)] = 948,
  [SMALL_STATE(58)] = 952,
  [SMALL_STATE(59)] = 956,
  [SMALL_STATE(60)] = 960,
  [SMALL_STATE(61)] = 964,
  [SMALL_STATE(62)] = 968,
  [SMALL_STATE(63)] = 972,
  [SMALL_STATE(64)] = 976,
  [SMALL_STATE(65)] = 980,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spacer, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spacer, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_repeat1, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spacer, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spacer, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__whitespace, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spacer, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spacer, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(30),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(30),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quantity_character, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quantity_character, 2), SHIFT_REPEAT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_org_heading_repeat1, 2), SHIFT_REPEAT(38),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_org_heading_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_org_heading, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_org_heading, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
