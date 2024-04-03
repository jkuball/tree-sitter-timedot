module.exports = grammar({
    name: "timedot",

    extras: $ => [], // manage whitespace manually

    rules: {
        source_file: $ => repeat(choice($.day_entry, seq($.comment, "\n"), "\n")),

        day_entry: $ => seq($.date, "\n", repeat($.transaction)),

        transaction: $ => seq(
            optional($._whitespace),
            $.account,
            /\s\s+|\t/,
            optional($.amount),
            optional($._whitespace),
            optional($.comment),
            "\n",
        ),

        account: $ => "wrk", // TODO: regex that does not clash with dates

        amount: $ => repeat1("."),

        comment: $ => seq(choice("#", ";"), /.*/),

        _whitespace: $ => repeat1(choice(" ", "\t")),

        // NOTE: I took this date definition from the ledger parser.
        // https://github.com/cbarrete/tree-sitter-ledger
        date: $ => seq($._single_date),
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
