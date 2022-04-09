#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
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
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
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
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
    [sym_document] = STATE(36),
    [sym_headline] = STATE(3),
    [sym_task] = STATE(29),
    [sym_open_task] = STATE(26),
    [sym_checked_task] = STATE(26),
    [sym_ongoing_task] = STATE(26),
    [sym_obsolete_task] = STATE(26),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_empty_line_repeat1] = STATE(18),
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
    [sym_headline] = STATE(2),
    [sym_task] = STATE(34),
    [sym_open_task] = STATE(26),
    [sym_checked_task] = STATE(26),
    [sym_ongoing_task] = STATE(26),
    [sym_obsolete_task] = STATE(26),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_empty_line_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [aux_sym_headline_token1] = ACTIONS(24),
    [anon_sym_] = ACTIONS(27),
    [sym_open_checkbox] = ACTIONS(30),
    [sym_checked_checkbox] = ACTIONS(33),
    [sym_ongoing_checkbox] = ACTIONS(36),
    [sym_obsolete_checkbox] = ACTIONS(39),
  },
  [3] = {
    [sym_headline] = STATE(2),
    [sym_task] = STATE(19),
    [sym_open_task] = STATE(26),
    [sym_checked_task] = STATE(26),
    [sym_ongoing_task] = STATE(26),
    [sym_obsolete_task] = STATE(26),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_empty_line_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LF] = ACTIONS(44),
    [aux_sym_headline_token1] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym_open_checkbox] = ACTIONS(11),
    [sym_checked_checkbox] = ACTIONS(13),
    [sym_ongoing_checkbox] = ACTIONS(15),
    [sym_obsolete_checkbox] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(46), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [11] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [22] = 4,
    ACTIONS(50), 1,
      aux_sym_main_line_token1,
    STATE(21), 1,
      sym_main_line,
    STATE(22), 1,
      sym_description,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [36] = 4,
    ACTIONS(50), 1,
      aux_sym_main_line_token1,
    STATE(21), 1,
      sym_main_line,
    STATE(23), 1,
      sym_description,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [50] = 4,
    ACTIONS(50), 1,
      aux_sym_main_line_token1,
    STATE(21), 1,
      sym_main_line,
    STATE(24), 1,
      sym_description,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [64] = 4,
    ACTIONS(50), 1,
      aux_sym_main_line_token1,
    STATE(21), 1,
      sym_main_line,
    STATE(25), 1,
      sym_description,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [78] = 3,
    ACTIONS(58), 1,
      aux_sym_indent_token1,
    STATE(10), 1,
      aux_sym_description_repeat1,
    STATE(37), 1,
      sym_indent,
  [88] = 2,
    ACTIONS(63), 1,
      anon_sym_,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [96] = 2,
    ACTIONS(67), 1,
      anon_sym_,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [104] = 2,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [112] = 2,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [120] = 3,
    ACTIONS(77), 1,
      aux_sym_indent_token1,
    STATE(10), 1,
      aux_sym_description_repeat1,
    STATE(32), 1,
      sym_indent,
  [130] = 3,
    ACTIONS(77), 1,
      aux_sym_indent_token1,
    STATE(15), 1,
      aux_sym_description_repeat1,
    STATE(28), 1,
      sym_indent,
  [140] = 3,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_empty_line_repeat1,
  [150] = 3,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_empty_line_repeat1,
  [160] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [167] = 1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [172] = 2,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_LF,
  [179] = 1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [184] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [189] = 1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [194] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [199] = 1,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [204] = 2,
    ACTIONS(107), 1,
      aux_sym_main_line_token1,
    STATE(31), 1,
      sym_other_line,
  [211] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LF,
  [218] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_LF,
  [225] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [230] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [235] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_LF,
  [242] = 1,
    ACTIONS(123), 1,
      anon_sym_LF,
  [246] = 1,
    ACTIONS(84), 1,
      anon_sym_LF,
  [250] = 1,
    ACTIONS(125), 1,
      aux_sym_indent_token1,
  [254] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [258] = 1,
    ACTIONS(129), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 120,
  [SMALL_STATE(16)] = 130,
  [SMALL_STATE(17)] = 140,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 160,
  [SMALL_STATE(20)] = 167,
  [SMALL_STATE(21)] = 172,
  [SMALL_STATE(22)] = 179,
  [SMALL_STATE(23)] = 184,
  [SMALL_STATE(24)] = 189,
  [SMALL_STATE(25)] = 194,
  [SMALL_STATE(26)] = 199,
  [SMALL_STATE(27)] = 204,
  [SMALL_STATE(28)] = 211,
  [SMALL_STATE(29)] = 218,
  [SMALL_STATE(30)] = 225,
  [SMALL_STATE(31)] = 230,
  [SMALL_STATE(32)] = 235,
  [SMALL_STATE(33)] = 242,
  [SMALL_STATE(34)] = 246,
  [SMALL_STATE(35)] = 250,
  [SMALL_STATE(36)] = 254,
  [SMALL_STATE(37)] = 258,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(27),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_line, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1), SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_line, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4), SHIFT(35),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
