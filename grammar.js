module.exports = grammar({
  name: 'xit',

  extras: (_$) => [],

  conflicts: ($) => [[$.task, $.headline], [$.description]],
  inline: ($) => [$.empty_line],

  rules: {
    document: ($) => seq(repeat(choice($.headline, seq($.task, '\n'), $.empty_line)), optional($.task)),
    headline: (_$) => seq(/[^\[ \n][^\n]+/, '\n'),
    empty_line: (_$) => seq(repeat(' '), '\n'),
    task: ($) => choice($.open_task, $.checked_task, $.ongoing_task, $.obsolete_task, $.in_question_task),
    indent: ($) => seq(token(/[ ]{4}/), $.other_line),
    main_line: ($) =>
      seq(
        choice(token(/[^!.\n#-][^\n#-]*/), $.tag, $.due_date, '#', '-'),
        repeat(choice(token(/[^\n#-]+/), $.tag, $.due_date, '#', '-'))
      ),
    other_line: ($) => repeat1(choice(token(/[^\n#-]+/), $.tag, $.due_date, '#', '-')),
    tag: (_$) => token(prec(1, /#[\p{L}0-9_-]+(=("[^"\n]*"|'[^'\n]*'|[\p{L}0-9_-]*))?/)),
    due_date: (_$) =>
      token(
        prec(
          1,
          /-> [0-9]{4}(-(0[1-9]|1[0-2])(-(0[1-9]|[12][0-9]|3[01]))?|\/(0[1-9]|1[0-2])(\/(0[1-9]|[12][0-9]|3[01]))?|[-/](W(0[1-9]|[1-4][0-9]|5[0-3])|Q[1-4]))?/
        )
      ),
    open_checkbox: (_$) => token(seq('[ ]')),
    open_task: ($) => seq($.open_checkbox, optional(seq(' ', optional($.description)))),
    checked_checkbox: (_$) => token(seq('[x]')),
    checked_task: ($) => seq($.checked_checkbox, optional(seq(' ', optional($.description)))),
    ongoing_checkbox: (_$) => token(seq('[@]')),
    ongoing_task: ($) => seq($.ongoing_checkbox, optional(seq(' ', optional($.description)))),
    obsolete_checkbox: (_$) => token(seq('[~]')),
    obsolete_task: ($) => seq($.obsolete_checkbox, optional(seq(' ', optional($.description)))),
    in_question_checkbox: (_$) => token(seq('[?]')),
    in_question_task: ($) => seq($.in_question_checkbox, optional(seq(' ', optional($.description)))),
    description: ($) =>
      choice(
        seq($.priority, ' ', $.main_line),
        seq($.priority, ' ', $.main_line, '\n', repeat(seq($.indent, '\n')), $.indent),
        $.main_line,
        seq($.main_line, '\n', repeat(seq($.indent, '\n')), $.indent)
      ),
    priority: (_$) => choice(
      /!+/,
      /!+\.+/,
      /\.+!+/,
      /\.\.+/,
    ),
  },
});
