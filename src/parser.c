#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  anon_sym_ = 3,
  aux_sym_indent_token1 = 4,
  sym_main_line = 5,
  sym_other_line = 6,
  sym_open_checkbox = 7,
  sym_checked_checkbox = 8,
  sym_ongoing_checkbox = 9,
  sym_obsolete_checkbox = 10,
  aux_sym_priority_token1 = 11,
  aux_sym_priority_token2 = 12,
  aux_sym_priority_token3 = 13,
  aux_sym_priority_token4 = 14,
  sym_document = 15,
  sym_headline = 16,
  sym_task = 17,
  sym_indent = 18,
  sym_open_task = 19,
  sym_checked_task = 20,
  sym_ongoing_task = 21,
  sym_obsolete_task = 22,
  sym_description = 23,
  sym_priority = 24,
  aux_sym_document_repeat1 = 25,
  aux_sym_empty_line_repeat1 = 26,
  aux_sym_description_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [anon_sym_] = " ",
  [aux_sym_indent_token1] = "indent_token1",
  [sym_main_line] = "main_line",
  [sym_other_line] = "other_line",
  [sym_open_checkbox] = "open_checkbox",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [aux_sym_priority_token1] = "priority_token1",
  [aux_sym_priority_token2] = "priority_token2",
  [aux_sym_priority_token3] = "priority_token3",
  [aux_sym_priority_token4] = "priority_token4",
  [sym_document] = "document",
  [sym_headline] = "headline",
  [sym_task] = "task",
  [sym_indent] = "indent",
  [sym_open_task] = "open_task",
  [sym_checked_task] = "checked_task",
  [sym_ongoing_task] = "ongoing_task",
  [sym_obsolete_task] = "obsolete_task",
  [sym_description] = "description",
  [sym_priority] = "priority",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_empty_line_repeat1] = "empty_line_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_indent_token1] = aux_sym_indent_token1,
  [sym_main_line] = sym_main_line,
  [sym_other_line] = sym_other_line,
  [sym_open_checkbox] = sym_open_checkbox,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [aux_sym_priority_token1] = aux_sym_priority_token1,
  [aux_sym_priority_token2] = aux_sym_priority_token2,
  [aux_sym_priority_token3] = aux_sym_priority_token3,
  [aux_sym_priority_token4] = aux_sym_priority_token4,
  [sym_document] = sym_document,
  [sym_headline] = sym_headline,
  [sym_task] = sym_task,
  [sym_indent] = sym_indent,
  [sym_open_task] = sym_open_task,
  [sym_checked_task] = sym_checked_task,
  [sym_ongoing_task] = sym_ongoing_task,
  [sym_obsolete_task] = sym_obsolete_task,
  [sym_description] = sym_description,
  [sym_priority] = sym_priority,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_empty_line_repeat1] = aux_sym_empty_line_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
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
  [aux_sym_headline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indent_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_main_line] = {
    .visible = true,
    .named = true,
  },
  [sym_other_line] = {
    .visible = true,
    .named = true,
  },
  [sym_open_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_checkbox] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_priority_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_open_task] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_task] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_task] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_task] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_empty_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '[') ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '~') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_main_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_other_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_open_checkbox);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_checked_checkbox);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ongoing_checkbox);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_obsolete_checkbox);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_priority_token2);
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_priority_token3);
      if (lookahead == '!') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_priority_token4);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_open_checkbox] = ACTIONS(1),
    [sym_checked_checkbox] = ACTIONS(1),
    [sym_ongoing_checkbox] = ACTIONS(1),
    [sym_obsolete_checkbox] = ACTIONS(1),
    [aux_sym_priority_token1] = ACTIONS(1),
    [aux_sym_priority_token2] = ACTIONS(1),
    [aux_sym_priority_token3] = ACTIONS(1),
    [aux_sym_priority_token4] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(41),
    [sym_headline] = STATE(2),
    [sym_task] = STATE(28),
    [sym_open_task] = STATE(30),
    [sym_checked_task] = STATE(30),
    [sym_ongoing_task] = STATE(30),
    [sym_obsolete_task] = STATE(30),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_empty_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_headline_token1] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym_open_checkbox] = ACTIONS(11),
    [sym_checked_checkbox] = ACTIONS(13),
    [sym_ongoing_checkbox] = ACTIONS(15),
    [sym_obsolete_checkbox] = ACTIONS(17),
  },
  [2] = {
    [sym_headline] = STATE(3),
    [sym_task] = STATE(31),
    [sym_open_task] = STATE(30),
    [sym_checked_task] = STATE(30),
    [sym_ongoing_task] = STATE(30),
    [sym_obsolete_task] = STATE(30),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_empty_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [aux_sym_headline_token1] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym_open_checkbox] = ACTIONS(11),
    [sym_checked_checkbox] = ACTIONS(13),
    [sym_ongoing_checkbox] = ACTIONS(15),
    [sym_obsolete_checkbox] = ACTIONS(17),
  },
  [3] = {
    [sym_headline] = STATE(3),
    [sym_task] = STATE(42),
    [sym_open_task] = STATE(30),
    [sym_checked_task] = STATE(30),
    [sym_ongoing_task] = STATE(30),
    [sym_obsolete_task] = STATE(30),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_empty_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [aux_sym_headline_token1] = ACTIONS(28),
    [anon_sym_] = ACTIONS(31),
    [sym_open_checkbox] = ACTIONS(34),
    [sym_checked_checkbox] = ACTIONS(37),
    [sym_ongoing_checkbox] = ACTIONS(40),
    [sym_obsolete_checkbox] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(48), 1,
      sym_main_line,
    STATE(23), 1,
      sym_description,
    STATE(43), 1,
      sym_priority,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(50), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(52), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
  [22] = 6,
    ACTIONS(48), 1,
      sym_main_line,
    STATE(25), 1,
      sym_description,
    STATE(43), 1,
      sym_priority,
    ACTIONS(50), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(52), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [44] = 6,
    ACTIONS(48), 1,
      sym_main_line,
    STATE(26), 1,
      sym_description,
    STATE(43), 1,
      sym_priority,
    ACTIONS(50), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(52), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [66] = 6,
    ACTIONS(48), 1,
      sym_main_line,
    STATE(27), 1,
      sym_description,
    STATE(43), 1,
      sym_priority,
    ACTIONS(50), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(52), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [88] = 1,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [99] = 1,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [110] = 3,
    ACTIONS(62), 1,
      aux_sym_indent_token1,
    STATE(16), 1,
      aux_sym_description_repeat1,
    STATE(32), 1,
      sym_indent,
  [120] = 3,
    ACTIONS(62), 1,
      aux_sym_indent_token1,
    STATE(10), 1,
      aux_sym_description_repeat1,
    STATE(22), 1,
      sym_indent,
  [130] = 2,
    ACTIONS(66), 1,
      anon_sym_,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [138] = 2,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [146] = 3,
    ACTIONS(62), 1,
      aux_sym_indent_token1,
    STATE(16), 1,
      aux_sym_description_repeat1,
    STATE(24), 1,
      sym_indent,
  [156] = 3,
    ACTIONS(62), 1,
      aux_sym_indent_token1,
    STATE(14), 1,
      aux_sym_description_repeat1,
    STATE(29), 1,
      sym_indent,
  [166] = 3,
    ACTIONS(72), 1,
      aux_sym_indent_token1,
    STATE(16), 1,
      aux_sym_description_repeat1,
    STATE(40), 1,
      sym_indent,
  [176] = 3,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym_empty_line_repeat1,
  [186] = 2,
    ACTIONS(81), 1,
      anon_sym_,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [194] = 2,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [202] = 3,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym_empty_line_repeat1,
  [212] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [217] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_LF,
  [224] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [229] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_LF,
  [236] = 1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [241] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [246] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [251] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_LF,
  [258] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_LF,
  [265] = 1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [270] = 2,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [277] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_LF,
  [284] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_LF,
  [291] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_LF,
  [298] = 1,
    ACTIONS(134), 1,
      anon_sym_LF,
  [302] = 1,
    ACTIONS(136), 1,
      aux_sym_indent_token1,
  [306] = 1,
    ACTIONS(138), 1,
      anon_sym_,
  [310] = 1,
    ACTIONS(140), 1,
      sym_other_line,
  [314] = 1,
    ACTIONS(142), 1,
      sym_main_line,
  [318] = 1,
    ACTIONS(144), 1,
      anon_sym_LF,
  [322] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [326] = 1,
    ACTIONS(75), 1,
      anon_sym_LF,
  [330] = 1,
    ACTIONS(148), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 217,
  [SMALL_STATE(23)] = 224,
  [SMALL_STATE(24)] = 229,
  [SMALL_STATE(25)] = 236,
  [SMALL_STATE(26)] = 241,
  [SMALL_STATE(27)] = 246,
  [SMALL_STATE(28)] = 251,
  [SMALL_STATE(29)] = 258,
  [SMALL_STATE(30)] = 265,
  [SMALL_STATE(31)] = 270,
  [SMALL_STATE(32)] = 277,
  [SMALL_STATE(33)] = 284,
  [SMALL_STATE(34)] = 291,
  [SMALL_STATE(35)] = 298,
  [SMALL_STATE(36)] = 302,
  [SMALL_STATE(37)] = 306,
  [SMALL_STATE(38)] = 310,
  [SMALL_STATE(39)] = 314,
  [SMALL_STATE(40)] = 318,
  [SMALL_STATE(41)] = 322,
  [SMALL_STATE(42)] = 326,
  [SMALL_STATE(43)] = 330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(38),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2), SHIFT_REPEAT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 6),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 6), SHIFT(36),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 5), SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4), SHIFT(36),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1), SHIFT(11),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xit(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
