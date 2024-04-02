module.exports = grammar({
    name: "timedot",

    rules: {
        source_file: $ => repeat(choice($.day_entry, $.comment)),

        day_entry: $ => $.date,

        comment: $ => seq(choice("#", ";"), /.*\n/),

        date: $ => seq($._single_date),

        // NOTE: I took this date definition from the ledger parser.
        // https://github.com/cbarrete/tree-sitter-ledger
        _dsep: $ => /[-\.\/]/,
        _2d: $ => /\d{1,2}/,
        _4d: $ => /\d{4}/,
        _single_date: $ => choice(
            seq($._4d, $._dsep, $._2d, $._dsep, $._2d),
            seq($._2d, $._dsep, $._2d, $._dsep, $._2d),
            seq($._2d, $._dsep, $._2d),
        ),
    },
});
