module.exports = grammar({
  name: 'xit',

  extras: (_$) => [],

  conflicts: ($) => [[$.task, $.headline], [$.description]],
  inline: ($) => [$.empty_line],

  rules: {
    document: ($) => seq(repeat(choice($.headline, seq($.task, '\n'), $.empty_line)), optional($.task)),
    headline: (_$) => seq(/[^\[ \n][^\n]+/, '\n'),
    empty_line: (_$) => seq(repeat(' '), '\n'),
    task: ($) => choice($.open_task, $.checked_task, $.ongoing_task, $.obsolete_task),
    indent: ($) => seq(token(/[ ]{4}/), $.other_line),
    main_line: (_$) => token(/[^!.\n][^\n]+/),
    other_line: (_$) => token(/[^\n]+/),
    open_checkbox: (_$) => token(seq('[ ]')),
    open_task: ($) => seq($.open_checkbox, optional(seq(' ', optional($.description)))),
    checked_checkbox: (_$) => token(seq('[x]')),
    checked_task: ($) => seq($.checked_checkbox, optional(seq(' ', optional($.description)))),
    ongoing_checkbox: (_$) => token(seq('[@]')),
    ongoing_task: ($) => seq($.ongoing_checkbox, optional(seq(' ', optional($.description)))),
    obsolete_checkbox: (_$) => token(seq('[~]')),
    obsolete_task: ($) => seq($.obsolete_checkbox, optional(seq(' ', optional($.description)))),
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
