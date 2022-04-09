#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  aux_sym_indent_token1 = 2,
  aux_sym_main_line_token1 = 3,
  sym_open_checkbox = 4,
  anon_sym_ = 5,
  sym_checked_checkbox = 6,
  sym_ongoing_checkbox = 7,
  sym_obsolete_checkbox = 8,
  sym_document = 9,
  sym_task = 10,
  sym_indent = 11,
  sym_main_line = 12,
  sym_other_line = 13,
  sym_open_task = 14,
  sym_checked_task = 15,
  sym_ongoing_task = 16,
  sym_obsolete_task = 17,
  sym_description = 18,
  aux_sym_document_repeat1 = 19,
  aux_sym_description_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_indent_token1] = "indent_token1",
  [aux_sym_main_line_token1] = "main_line_token1",
  [sym_open_checkbox] = "open_checkbox",
  [anon_sym_] = " ",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [sym_document] = "document",
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
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_indent_token1] = aux_sym_indent_token1,
  [aux_sym_main_line_token1] = aux_sym_main_line_token1,
  [sym_open_checkbox] = sym_open_checkbox,
  [anon_sym_] = anon_sym_,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [sym_document] = sym_document,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '[') ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(8);
      if (lookahead == '~') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(13);
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
      if (lookahead == ']') ADVANCE(17);
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
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '~') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_open_checkbox);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_);
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
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_open_checkbox] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_checked_checkbox] = ACTIONS(1),
    [sym_ongoing_checkbox] = ACTIONS(1),
    [sym_obsolete_checkbox] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(27),
    [sym_task] = STATE(3),
    [sym_open_task] = STATE(13),
    [sym_checked_task] = STATE(13),
    [sym_ongoing_task] = STATE(13),
    [sym_obsolete_task] = STATE(13),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_open_checkbox] = ACTIONS(7),
    [sym_checked_checkbox] = ACTIONS(9),
    [sym_ongoing_checkbox] = ACTIONS(11),
    [sym_obsolete_checkbox] = ACTIONS(13),
  },
  [2] = {
    [sym_task] = STATE(2),
    [sym_open_task] = STATE(13),
    [sym_checked_task] = STATE(13),
    [sym_ongoing_task] = STATE(13),
    [sym_obsolete_task] = STATE(13),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(17),
    [sym_open_checkbox] = ACTIONS(20),
    [sym_checked_checkbox] = ACTIONS(23),
    [sym_ongoing_checkbox] = ACTIONS(26),
    [sym_obsolete_checkbox] = ACTIONS(29),
  },
  [3] = {
    [sym_task] = STATE(2),
    [sym_open_task] = STATE(13),
    [sym_checked_task] = STATE(13),
    [sym_ongoing_task] = STATE(13),
    [sym_obsolete_task] = STATE(13),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(34),
    [sym_open_checkbox] = ACTIONS(7),
    [sym_checked_checkbox] = ACTIONS(9),
    [sym_ongoing_checkbox] = ACTIONS(11),
    [sym_obsolete_checkbox] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(38), 1,
      aux_sym_main_line_token1,
    STATE(14), 1,
      sym_main_line,
    STATE(18), 1,
      sym_description,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(40), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [20] = 5,
    ACTIONS(38), 1,
      aux_sym_main_line_token1,
    STATE(14), 1,
      sym_main_line,
    STATE(15), 1,
      sym_description,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(44), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [40] = 5,
    ACTIONS(38), 1,
      aux_sym_main_line_token1,
    STATE(14), 1,
      sym_main_line,
    STATE(16), 1,
      sym_description,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(48), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [60] = 5,
    ACTIONS(38), 1,
      aux_sym_main_line_token1,
    STATE(14), 1,
      sym_main_line,
    STATE(17), 1,
      sym_description,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(52), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [80] = 2,
    ACTIONS(56), 1,
      anon_sym_,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [92] = 2,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [104] = 2,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [116] = 2,
    ACTIONS(68), 1,
      anon_sym_,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [128] = 1,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [137] = 1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [146] = 2,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [157] = 1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [166] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [175] = 1,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [184] = 1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [193] = 2,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [204] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [213] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [222] = 2,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [233] = 3,
    ACTIONS(101), 1,
      aux_sym_indent_token1,
    STATE(19), 1,
      sym_indent,
    STATE(24), 1,
      aux_sym_description_repeat1,
  [243] = 3,
    ACTIONS(101), 1,
      aux_sym_indent_token1,
    STATE(22), 1,
      sym_indent,
    STATE(25), 1,
      aux_sym_description_repeat1,
  [253] = 3,
    ACTIONS(103), 1,
      aux_sym_indent_token1,
    STATE(25), 1,
      aux_sym_description_repeat1,
    STATE(29), 1,
      sym_indent,
  [263] = 2,
    ACTIONS(106), 1,
      aux_sym_main_line_token1,
    STATE(21), 1,
      sym_other_line,
  [270] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [274] = 1,
    ACTIONS(110), 1,
      aux_sym_indent_token1,
  [278] = 1,
    ACTIONS(112), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 92,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 175,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 193,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 213,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 233,
  [SMALL_STATE(24)] = 243,
  [SMALL_STATE(25)] = 253,
  [SMALL_STATE(26)] = 263,
  [SMALL_STATE(27)] = 270,
  [SMALL_STATE(28)] = 274,
  [SMALL_STATE(29)] = 278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obsolete_task, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_task, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checked_task, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ongoing_task, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_line, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1), SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_line, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4), SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
