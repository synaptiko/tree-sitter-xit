module.exports = grammar({
  name: 'xit',

  extras: ($) => [],

  conflicts: ($) => [[$.description]],

  rules: {
    document: ($) => repeat(choice($.task, '\n')),
    task: ($) => choice(
      $.open_task,
      $.checked_task,
      $.ongoing_task,
      $.obsolete_task,
    ),
    indent: ($) => seq(token(/[ ]{4}/), $.other_line),
    main_line: ($) => token(/[^\n]+/),
    other_line: ($) => token(/[^\n]+/),
    open_checkbox: ($) => token(seq('[ ]')),
    open_task: ($) => seq($.open_checkbox, optional(seq(' ', optional($.description)))),
    checked_checkbox: ($) => token(seq('[x]')),
    checked_task: ($) => seq($.checked_checkbox, optional(seq(' ', optional($.description)))),
    ongoing_checkbox: ($) => token(seq('[@]')),
    ongoing_task: ($) => seq($.ongoing_checkbox, optional(seq(' ', optional($.description)))),
    obsolete_checkbox: ($) => token(seq('[~]')),
    obsolete_task: ($) => seq($.obsolete_checkbox, optional(seq(' ', optional($.description)))),
    description: ($) => choice(
      $.main_line,
      seq($.main_line, '\n', repeat(seq($.indent, '\n')), $.indent),
    ),
  },
});
