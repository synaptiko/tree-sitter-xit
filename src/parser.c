#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  anon_sym_ = 3,
  aux_sym_indent_token1 = 4,
  aux_sym_main_line_token1 = 5,
  sym_open_checkbox = 6,
  sym_checked_checkbox = 7,
  sym_ongoing_checkbox = 8,
  sym_obsolete_checkbox = 9,
  sym_document = 10,
  sym_headline = 11,
  sym_task = 12,
  sym_indent = 13,
  sym_main_line = 14,
  sym_other_line = 15,
  sym_open_task = 16,
  sym_checked_task = 17,
  sym_ongoing_task = 18,
  sym_obsolete_task = 19,
  sym_description = 20,
  aux_sym_document_repeat1 = 21,
  aux_sym_empty_line_repeat1 = 22,
  aux_sym_description_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [anon_sym_] = " ",
  [aux_sym_indent_token1] = "indent_token1",
  [aux_sym_main_line_token1] = "main_line_token1",
  [sym_open_checkbox] = "open_checkbox",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [sym_document] = "document",
  [sym_headline] = "headline",
  [sym_task] = "task",
  [sym_indent] = "indent",
  [sym_main_line] = "main_line",
  [sym_other_line] = "other_line",
  [sym_open_task] = "open_task",
  [sym_checked_task] = "checked_task",
  [sym_ongoing_task] = "ongoing_task",
  [sym_obsolete_task] = "obsolete_task",
  [sym_description] = "description",
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
  [aux_sym_main_line_token1] = aux_sym_main_line_token1,
  [sym_open_checkbox] = sym_open_checkbox,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [sym_document] = sym_document,
  [sym_headline] = sym_headline,
  [sym_task] = sym_task,
  [sym_indent] = sym_indent,
  [sym_main_line] = sym_main_line,
  [sym_other_line] = sym_other_line,
  [sym_open_task] = sym_open_task,
  [sym_checked_task] = sym_checked_task,
  [sym_ongoing_task] = sym_ongoing_task,
  [sym_obsolete_task] = sym_obsolete_task,
  [sym_description] = sym_description,
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
  [aux_sym_main_line_token1] = {
    .visible = false,
    .named = false,
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
  [sym_main_line] = {
    .visible = true,
    .named = true,
  },
  [sym_other_line] = {
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
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(8);
      if (lookahead == '~') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(16);
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
      if (lookahead == ']') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_open_checkbox);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_checked_checkbox);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_ongoing_checkbox);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_obsolete_checkbox);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_headline_token1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_open_checkbox] = ACTIONS(1),
    [sym_checked_checkbox] = ACTIONS(1),
    [sym_ongoing_checkbox] = ACTIONS(1),
    [sym_obsolete_checkbox] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(37),
    [sym_headline] = STATE(3),
    [sym_task] = STATE(20),
    [sym_open_task] = STATE(30),
    [sym_checked_task] = STATE(30),
    [sym_ongoing_task] = STATE(30),
    [sym_obsolete_task] = STATE(30),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_headline_token1] = ACTIONS(7),
    [sym_open_checkbox] = ACTIONS(9),
    [sym_checked_checkbox] = ACTIONS(11),
    [sym_ongoing_checkbox] = ACTIONS(13),
    [sym_obsolete_checkbox] = ACTIONS(15),
  },
  [2] = {
    [sym_headline] = STATE(2),
    [sym_task] = STATE(35),
    [sym_open_task] = STATE(30),
    [sym_checked_task] = STATE(30),
    [sym_ongoing_task] = STATE(30),
    [sym_obsolete_task] = STATE(30),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [aux_sym_headline_token1] = ACTIONS(22),
    [sym_open_checkbox] = ACTIONS(25),
    [sym_checked_checkbox] = ACTIONS(28),
    [sym_ongoing_checkbox] = ACTIONS(31),
    [sym_obsolete_checkbox] = ACTIONS(34),
  },
  [3] = {
    [sym_headline] = STATE(2),
    [sym_task] = STATE(27),
    [sym_open_task] = STATE(30),
    [sym_checked_task] = STATE(30),
    [sym_ongoing_task] = STATE(30),
    [sym_obsolete_task] = STATE(30),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_headline_token1] = ACTIONS(7),
    [sym_open_checkbox] = ACTIONS(9),
    [sym_checked_checkbox] = ACTIONS(11),
    [sym_ongoing_checkbox] = ACTIONS(13),
    [sym_obsolete_checkbox] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(41), 1,
      anon_sym_,
    STATE(5), 1,
      aux_sym_empty_line_repeat1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [16] = 3,
    ACTIONS(43), 1,
      anon_sym_,
    STATE(6), 1,
      aux_sym_empty_line_repeat1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [32] = 3,
    ACTIONS(47), 1,
      anon_sym_,
    STATE(6), 1,
      aux_sym_empty_line_repeat1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [48] = 1,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [58] = 1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [68] = 4,
    ACTIONS(54), 1,
      aux_sym_main_line_token1,
    STATE(22), 1,
      sym_main_line,
    STATE(23), 1,
      sym_description,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [82] = 4,
    ACTIONS(54), 1,
      aux_sym_main_line_token1,
    STATE(22), 1,
      sym_main_line,
    STATE(24), 1,
      sym_description,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [96] = 4,
    ACTIONS(54), 1,
      aux_sym_main_line_token1,
    STATE(22), 1,
      sym_main_line,
    STATE(25), 1,
      sym_description,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [110] = 4,
    ACTIONS(54), 1,
      aux_sym_main_line_token1,
    STATE(22), 1,
      sym_main_line,
    STATE(26), 1,
      sym_description,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [124] = 3,
    ACTIONS(62), 1,
      aux_sym_indent_token1,
    STATE(13), 1,
      aux_sym_description_repeat1,
    STATE(38), 1,
      sym_indent,
  [134] = 2,
    ACTIONS(67), 1,
      anon_sym_,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [142] = 2,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [150] = 2,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [158] = 2,
    ACTIONS(79), 1,
      anon_sym_,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [166] = 3,
    ACTIONS(81), 1,
      aux_sym_indent_token1,
    STATE(13), 1,
      aux_sym_description_repeat1,
    STATE(33), 1,
      sym_indent,
  [176] = 3,
    ACTIONS(81), 1,
      aux_sym_indent_token1,
    STATE(18), 1,
      aux_sym_description_repeat1,
    STATE(29), 1,
      sym_indent,
  [186] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_LF,
  [193] = 1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [198] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_LF,
  [205] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [210] = 1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [215] = 1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [220] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [225] = 2,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [232] = 2,
    ACTIONS(102), 1,
      aux_sym_main_line_token1,
    STATE(32), 1,
      sym_other_line,
  [239] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
  [246] = 1,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [251] = 1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [256] = 1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [261] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LF,
  [268] = 1,
    ACTIONS(120), 1,
      anon_sym_LF,
  [272] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [276] = 1,
    ACTIONS(122), 1,
      aux_sym_indent_token1,
  [280] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [284] = 1,
    ACTIONS(126), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 134,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 186,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 198,
  [SMALL_STATE(23)] = 205,
  [SMALL_STATE(24)] = 210,
  [SMALL_STATE(25)] = 215,
  [SMALL_STATE(26)] = 220,
  [SMALL_STATE(27)] = 225,
  [SMALL_STATE(28)] = 232,
  [SMALL_STATE(29)] = 239,
  [SMALL_STATE(30)] = 246,
  [SMALL_STATE(31)] = 251,
  [SMALL_STATE(32)] = 256,
  [SMALL_STATE(33)] = 261,
  [SMALL_STATE(34)] = 268,
  [SMALL_STATE(35)] = 272,
  [SMALL_STATE(36)] = 276,
  [SMALL_STATE(37)] = 280,
  [SMALL_STATE(38)] = 284,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_line, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1), SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_line, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4), SHIFT(36),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
