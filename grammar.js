module.exports = grammar({
  name: 'xit',

  extras: (_$) => [],

  rules: {
    document: ($) => repeat(choice($.line, '\n')),
    line: ($) => seq($.at, ' ', $.name),
    at: (_$) => '@',
    name: ($) => choice(
      $.priority,
      $.text_a,
      seq($.priority, ' ', $.text_a),
    ),
    priority: (_$) => choice(
      /!+/,
      /!+\.+/,
      /\.+!+/,
      /\.\.+/,
    ),
    text_a: (_$) => /[^!. \n][^\n]*/,
  },
});
