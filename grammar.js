module.exports = grammar({
    name: "timedot",

    extras: $ => [], // manage whitespace manually

    // NOTE: I need these conflicts because of the spacing in the dot quantity,
    //       maybe in the future I do understand on how
    //       to structure the rules so this is not needed.
    conflicts: $ => [
        [$.quantity, $.transaction],
        [$.quantity]
    ],

    rules: {
        source_file: $ => repeat(choice($.day_entry, seq($.comment, "\n"), "\n")),

        day_entry: $ => seq($.date, "\n", repeat($.transaction)),

        transaction: $ => seq(
            optional($._whitespace),
            $.account,
            optional(/\s\s+/),
            optional($.quantity),
            optional($._whitespace),
            optional($.comment),
            "\n",
        ),

        account: $ => "wrk", // TODO: regex that does not clash with dates

        comment: $ => seq(choice("#", ";"), /.*/),

        quantity: $ => choice(
            $._quantity_dot,
            $._quantity_number,
        ),

        _quantity_dot: $ => repeat1(choice(".", " ")),
        _quantity_number: $ => seq(choice(/\d+/, /\d+\.\d+/), optional($._unit)),
        _unit: $ => choice("s", "m", "h", "d", "w", "mo", "y"),

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
