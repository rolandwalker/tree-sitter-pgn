# tree-sitter-pgn

## Overview

Chess Portable Game Notation (PGN) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Used in

 * [Emacs pygn-mode](https://github.com/dwcoates/pygn-mode)

## Highlighting Example

<a href="/doc/images/pgn_syntax_highlight.png">
    <img src="/doc/images/pgn_syntax_highlight.png" width=500/>
</a>

## Python Example

```python
from tree_sitter import Language, Parser, Query, QueryCursor
import tree_sitter_pgn as ts_pgn

PGN_LANGUAGE = Language(ts_pgn.language())

PARSER = Parser(PGN_LANGUAGE)

# Query for game boundaries and main-line moves.
# Ignore all headers, comments, variations, and result codes.
QUERY = Query(
    PGN_LANGUAGE,
    """
    (series_of_games
      game: (game) @game)

    (game
      (movetext
        san_move: (san_move) @san_move))

    (game
      (movetext
        lan_move: (lan_move) @lan_move))
    """,
)


def emit_output(main_line: list[bytes | None]) -> None:
    if not main_line:
        return
    # eg: d4 d5 c4 c6 Nc3 Nf6 Nf3 e6 e3 Nbd7 Bd3 dc4
    print(' '.join(x.decode().strip() for x in main_line if x is not None))


def main() -> None:
    with open('multi_game.pgn', 'rb') as file:
        tree = PARSER.parse(file.read())

    query_cursor = QueryCursor(QUERY)
    matches = query_cursor.matches(tree.root_node)

    main_line: list[bytes | None] = []
    for item in matches:
        if item[1].get('game'):
            emit_output(main_line)
            main_line = []
            continue
        if nodes := item[1].get('san_move'):
            main_line.append(nodes[0].text)
            continue
        # some move notation is eagerly classified as LAN, an oddity to keep in mind
        if nodes := item[1].get('lan_move'):
            main_line.append(nodes[0].text)
            continue

    emit_output(main_line)


if __name__ == '__main__':
    main()
```

## References

 * [PGN specification](http://www.saremba.de/chessgml/standards/pgn/pgn-complete.htm)
 * [Commonly-used extensions](https://www.enpassant.dk/chess/palview/enhancedpgn.htm)
 * [Commonly-used annotation glyphs](https://en.wikipedia.org/wiki/Numeric_Annotation_Glyphs)
