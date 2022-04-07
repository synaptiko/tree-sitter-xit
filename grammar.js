module.exports = grammar({
	name: 'xit',

	extras: $ => [],

	rules: {
		document: $ => repeat(
			choice(
				$.task_definition,
				'\n',
			),
		),
		task_definition: $ => choice(
			$.open_task,
			$.ongoing_task,
			$.checked_task,
			$.obsolete_task,
		),
		open_checkbox: $ => seq('[ ]'),
		open_task: $ => seq(
			$.open_checkbox,
			optional($.task_description),
		),
		ongoing_checkbox: $ => seq('[@]'),
		ongoing_task: $ => seq(
			$.ongoing_checkbox,
			optional($.task_description),
		),
		checked_checkbox: $ => seq('[x]'),
		checked_task: $ => seq(
			$.checked_checkbox,
			optional($.task_description),
		),
		obsolete_checkbox: $ => seq('[~]'),
		obsolete_task: $ => seq(
			$.obsolete_checkbox,
			optional($.task_description),
		),
		task_description: $ => seq(
			token.immediate(' '),
			optional(choice(repeat1(' '), $.task_name))
		),
		task_name: $ => choice(
			token.immediate(/[^ \n][^\n]+/),
			seq(
				token.immediate(/[^ \n][^\n]+/),
				repeat1(
					seq('\n   ', token.immediate(/[^\n]+/))
				),
			),
		),
	}
});
