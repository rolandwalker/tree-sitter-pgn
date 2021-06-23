#!/bin/bash

known_failures="$(cat script/known_failures.txt)"

tree-sitter parse -q -t \
  examples/**/*.pgn \
  $(for failure in $known_failures; do printf '%s\n' "!${failure}"; done)

#
