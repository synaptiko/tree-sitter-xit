module.exports = grammar({
  name: 'xit',

  extras: (_$) => [],

  conflicts: (_$) => [],

  rules: {
    document: ($) => repeat(choice($.line, '\n')),
    line: ($) => choice(
      seq($.at, ' ', $.priority, ' ', $.text),
      seq($.at, ' ', $.text),
    ),
    at: (_$) => '@',
    priority: (_$) => '!',
    text: (_$) => seq(/[^\n]+/),
  },
});
