#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  anon_sym_ = 3,
  aux_sym_indent_token1 = 4,
  aux_sym_main_line_token1 = 5,
  anon_sym_POUND = 6,
  anon_sym_DASH = 7,
  aux_sym_main_line_token2 = 8,
  sym_tag = 9,
  sym_due_date = 10,
  sym_open_checkbox = 11,
  sym_checked_checkbox = 12,
  sym_ongoing_checkbox = 13,
  sym_obsolete_checkbox = 14,
  sym_in_question_checkbox = 15,
  aux_sym_priority_token1 = 16,
  aux_sym_priority_token2 = 17,
  aux_sym_priority_token3 = 18,
  aux_sym_priority_token4 = 19,
  sym_document = 20,
  sym_headline = 21,
  sym_task = 22,
  sym_indent = 23,
  sym_main_line = 24,
  sym_other_line = 25,
  sym_open_task = 26,
  sym_checked_task = 27,
  sym_ongoing_task = 28,
  sym_obsolete_task = 29,
  sym_in_question_task = 30,
  sym_description = 31,
  sym_priority = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_empty_line_repeat1 = 34,
  aux_sym_main_line_repeat1 = 35,
  aux_sym_description_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [anon_sym_] = " ",
  [aux_sym_indent_token1] = "indent_token1",
  [aux_sym_main_line_token1] = "main_line_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_DASH] = "-",
  [aux_sym_main_line_token2] = "main_line_token2",
  [sym_tag] = "tag",
  [sym_due_date] = "due_date",
  [sym_open_checkbox] = "open_checkbox",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [sym_in_question_checkbox] = "in_question_checkbox",
  [aux_sym_priority_token1] = "priority_token1",
  [aux_sym_priority_token2] = "priority_token2",
  [aux_sym_priority_token3] = "priority_token3",
  [aux_sym_priority_token4] = "priority_token4",
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
  [sym_in_question_task] = "in_question_task",
  [sym_description] = "description",
  [sym_priority] = "priority",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_empty_line_repeat1] = "empty_line_repeat1",
  [aux_sym_main_line_repeat1] = "main_line_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_indent_token1] = aux_sym_indent_token1,
  [aux_sym_main_line_token1] = aux_sym_main_line_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_main_line_token2] = aux_sym_main_line_token2,
  [sym_tag] = sym_tag,
  [sym_due_date] = sym_due_date,
  [sym_open_checkbox] = sym_open_checkbox,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [sym_in_question_checkbox] = sym_in_question_checkbox,
  [aux_sym_priority_token1] = aux_sym_priority_token1,
  [aux_sym_priority_token2] = aux_sym_priority_token2,
  [aux_sym_priority_token3] = aux_sym_priority_token3,
  [aux_sym_priority_token4] = aux_sym_priority_token4,
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
  [sym_in_question_task] = sym_in_question_task,
  [sym_description] = sym_description,
  [sym_priority] = sym_priority,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_empty_line_repeat1] = aux_sym_empty_line_repeat1,
  [aux_sym_main_line_repeat1] = aux_sym_main_line_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_main_line_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_due_date] = {
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
  [sym_in_question_checkbox] = {
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
  [sym_in_question_task] = {
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
  [aux_sym_main_line_repeat1] = {
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static inline bool sym_tag_character_set_1(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '[') ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == '~') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead == 'W') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead == 'W') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '5') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(51);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(52);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(49);
      END_STATE();
    case 23:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(49);
      END_STATE();
    case 24:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 25:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 26:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (sym_tag_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_main_line_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(9);
      if (sym_tag_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '=') ADVANCE(46);
      if (sym_tag_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag);
      if (sym_tag_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_due_date);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_open_checkbox);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_checked_checkbox);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ongoing_checkbox);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_obsolete_checkbox);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_in_question_checkbox);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_priority_token2);
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_priority_token3);
      if (lookahead == '!') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_priority_token4);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_due_date] = ACTIONS(1),
    [sym_open_checkbox] = ACTIONS(1),
    [sym_checked_checkbox] = ACTIONS(1),
    [sym_ongoing_checkbox] = ACTIONS(1),
    [sym_obsolete_checkbox] = ACTIONS(1),
    [sym_in_question_checkbox] = ACTIONS(1),
    [aux_sym_priority_token1] = ACTIONS(1),
    [aux_sym_priority_token2] = ACTIONS(1),
    [aux_sym_priority_token3] = ACTIONS(1),
    [aux_sym_priority_token4] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(46),
    [sym_headline] = STATE(2),
    [sym_task] = STATE(36),
    [sym_open_task] = STATE(42),
    [sym_checked_task] = STATE(42),
    [sym_ongoing_task] = STATE(42),
    [sym_obsolete_task] = STATE(42),
    [sym_in_question_task] = STATE(42),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_empty_line_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_headline_token1] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym_open_checkbox] = ACTIONS(11),
    [sym_checked_checkbox] = ACTIONS(13),
    [sym_ongoing_checkbox] = ACTIONS(15),
    [sym_obsolete_checkbox] = ACTIONS(17),
    [sym_in_question_checkbox] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      aux_sym_headline_token1,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym_open_checkbox,
    ACTIONS(13), 1,
      sym_checked_checkbox,
    ACTIONS(15), 1,
      sym_ongoing_checkbox,
    ACTIONS(17), 1,
      sym_obsolete_checkbox,
    ACTIONS(19), 1,
      sym_in_question_checkbox,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_empty_line_repeat1,
    STATE(39), 1,
      sym_task,
    STATE(3), 2,
      sym_headline,
      aux_sym_document_repeat1,
    STATE(42), 5,
      sym_open_task,
      sym_checked_task,
      sym_ongoing_task,
      sym_obsolete_task,
      sym_in_question_task,
  [45] = 13,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(30), 1,
      aux_sym_headline_token1,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(36), 1,
      sym_open_checkbox,
    ACTIONS(39), 1,
      sym_checked_checkbox,
    ACTIONS(42), 1,
      sym_ongoing_checkbox,
    ACTIONS(45), 1,
      sym_obsolete_checkbox,
    ACTIONS(48), 1,
      sym_in_question_checkbox,
    STATE(20), 1,
      aux_sym_empty_line_repeat1,
    STATE(48), 1,
      sym_task,
    STATE(3), 2,
      sym_headline,
      aux_sym_document_repeat1,
    STATE(42), 5,
      sym_open_task,
      sym_checked_task,
      sym_ongoing_task,
      sym_obsolete_task,
      sym_in_question_task,
  [90] = 8,
    STATE(30), 1,
      sym_description,
    STATE(34), 1,
      sym_main_line,
    STATE(49), 1,
      sym_priority,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(57), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(59), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(53), 3,
      aux_sym_main_line_token1,
      sym_tag,
      sym_due_date,
  [121] = 8,
    STATE(34), 1,
      sym_main_line,
    STATE(43), 1,
      sym_description,
    STATE(49), 1,
      sym_priority,
    ACTIONS(55), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(57), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(59), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      aux_sym_main_line_token1,
      sym_tag,
      sym_due_date,
  [152] = 8,
    STATE(34), 1,
      sym_main_line,
    STATE(37), 1,
      sym_description,
    STATE(49), 1,
      sym_priority,
    ACTIONS(55), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(57), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(59), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      aux_sym_main_line_token1,
      sym_tag,
      sym_due_date,
  [183] = 8,
    STATE(29), 1,
      sym_description,
    STATE(34), 1,
      sym_main_line,
    STATE(49), 1,
      sym_priority,
    ACTIONS(55), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(57), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(59), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      aux_sym_main_line_token1,
      sym_tag,
      sym_due_date,
  [214] = 8,
    STATE(33), 1,
      sym_description,
    STATE(34), 1,
      sym_main_line,
    STATE(49), 1,
      sym_priority,
    ACTIONS(55), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(57), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(59), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      aux_sym_main_line_token1,
      sym_tag,
      sym_due_date,
  [245] = 1,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
      sym_in_question_checkbox,
  [257] = 1,
    ACTIONS(69), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
      sym_in_question_checkbox,
  [269] = 4,
    STATE(12), 1,
      aux_sym_main_line_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(75), 3,
      aux_sym_main_line_token2,
      sym_tag,
      sym_due_date,
  [286] = 4,
    STATE(12), 1,
      aux_sym_main_line_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(82), 3,
      aux_sym_main_line_token2,
      sym_tag,
      sym_due_date,
  [303] = 4,
    STATE(12), 1,
      aux_sym_main_line_repeat1,
    ACTIONS(73), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 3,
      aux_sym_main_line_token2,
      sym_tag,
      sym_due_date,
  [320] = 4,
    STATE(13), 1,
      aux_sym_main_line_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(91), 3,
      aux_sym_main_line_token2,
      sym_tag,
      sym_due_date,
  [337] = 4,
    STATE(11), 1,
      aux_sym_main_line_repeat1,
    STATE(41), 1,
      sym_other_line,
    ACTIONS(93), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(95), 3,
      aux_sym_main_line_token2,
      sym_tag,
      sym_due_date,
  [353] = 3,
    STATE(40), 1,
      sym_main_line,
    ACTIONS(55), 2,
      anon_sym_POUND,
      anon_sym_DASH,
    ACTIONS(53), 3,
      aux_sym_main_line_token1,
      sym_tag,
      sym_due_date,
  [366] = 2,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [374] = 2,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [382] = 2,
    ACTIONS(107), 1,
      anon_sym_,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [390] = 3,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym_empty_line_repeat1,
  [400] = 3,
    ACTIONS(113), 1,
      aux_sym_indent_token1,
    STATE(24), 1,
      aux_sym_description_repeat1,
    STATE(31), 1,
      sym_indent,
  [410] = 3,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(117), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym_empty_line_repeat1,
  [420] = 3,
    ACTIONS(113), 1,
      aux_sym_indent_token1,
    STATE(24), 1,
      aux_sym_description_repeat1,
    STATE(35), 1,
      sym_indent,
  [430] = 3,
    ACTIONS(120), 1,
      aux_sym_indent_token1,
    STATE(24), 1,
      aux_sym_description_repeat1,
    STATE(47), 1,
      sym_indent,
  [440] = 3,
    ACTIONS(113), 1,
      aux_sym_indent_token1,
    STATE(21), 1,
      aux_sym_description_repeat1,
    STATE(38), 1,
      sym_indent,
  [450] = 2,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [458] = 3,
    ACTIONS(113), 1,
      aux_sym_indent_token1,
    STATE(23), 1,
      aux_sym_description_repeat1,
    STATE(32), 1,
      sym_indent,
  [468] = 2,
    ACTIONS(129), 1,
      anon_sym_,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [476] = 1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [481] = 1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [486] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_LF,
  [493] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_LF,
  [500] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [505] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_LF,
  [512] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      anon_sym_LF,
  [519] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_LF,
  [526] = 1,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [531] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_LF,
  [538] = 2,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [545] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_LF,
  [552] = 1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [557] = 1,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [562] = 1,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [567] = 1,
    ACTIONS(175), 1,
      anon_sym_,
  [571] = 1,
    ACTIONS(177), 1,
      aux_sym_indent_token1,
  [575] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [579] = 1,
    ACTIONS(181), 1,
      anon_sym_LF,
  [583] = 1,
    ACTIONS(109), 1,
      anon_sym_LF,
  [587] = 1,
    ACTIONS(183), 1,
      anon_sym_,
  [591] = 1,
    ACTIONS(185), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 269,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 366,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 400,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 420,
  [SMALL_STATE(24)] = 430,
  [SMALL_STATE(25)] = 440,
  [SMALL_STATE(26)] = 450,
  [SMALL_STATE(27)] = 458,
  [SMALL_STATE(28)] = 468,
  [SMALL_STATE(29)] = 476,
  [SMALL_STATE(30)] = 481,
  [SMALL_STATE(31)] = 486,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 500,
  [SMALL_STATE(34)] = 505,
  [SMALL_STATE(35)] = 512,
  [SMALL_STATE(36)] = 519,
  [SMALL_STATE(37)] = 526,
  [SMALL_STATE(38)] = 531,
  [SMALL_STATE(39)] = 538,
  [SMALL_STATE(40)] = 545,
  [SMALL_STATE(41)] = 552,
  [SMALL_STATE(42)] = 557,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 567,
  [SMALL_STATE(45)] = 571,
  [SMALL_STATE(46)] = 575,
  [SMALL_STATE(47)] = 579,
  [SMALL_STATE(48)] = 583,
  [SMALL_STATE(49)] = 587,
  [SMALL_STATE(50)] = 591,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_line, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_line_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_line_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_line_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_line, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_line, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2), SHIFT_REPEAT(22),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4), SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 5), SHIFT(45),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1), SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 6),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 6), SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
