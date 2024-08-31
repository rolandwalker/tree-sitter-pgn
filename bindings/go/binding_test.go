package tree_sitter_pgn_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_pgn "github.com/tree-sitter/tree-sitter-pgn/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_pgn.Language())
	if language == nil {
		t.Errorf("Error loading Pgn grammar")
	}
}
