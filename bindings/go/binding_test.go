package tree_sitter_kanshi_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_kanshi "github.com/tree-sitter/tree-sitter-kanshi/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kanshi.Language())
	if language == nil {
		t.Errorf("Error loading Kanshi grammar")
	}
}
