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
import more_itertools
from tree_sitter import Language, Parser
import tree_sitter_pgn as ts_pgn

PGN_LANGUAGE = Language(ts_pgn.language())
parser = Parser(PGN_LANGUAGE)

query = PGN_LANGUAGE.query(
    '''
    (series_of_games
      game: (game) @game)

    (movetext
      san_move: (san_move) @san_move)
    ''')

with open('input_file.pgn', 'rb') as file:
    content = b''.join(file.readlines())
    tree = parser.parse(content)

matches = query.captures(tree.root_node)

merged_nodes = [
    *matches.get('game', []),
    *matches.get('san_move', []),
]
merged_nodes = sorted(merged_nodes, key=lambda elt: elt.start_byte)

for game in more_itertools.split_before(merged_nodes, lambda node: node.type == 'game'):
    san = []
    for node in game:
        if node.type == 'san_move' and node.text is not None:
            san.append(node.text.decode().strip())
            continue
    print(' '.join(san))
```

## References

 * [PGN specification](http://www.saremba.de/chessgml/standards/pgn/pgn-complete.htm)
 * [Commonly-used extensions](https://www.enpassant.dk/chess/palview/enhancedpgn.htm)
 * [Commonly-used annotation glyphs](https://en.wikipedia.org/wiki/Numeric_Annotation_Glyphs)
