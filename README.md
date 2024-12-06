# Tree-sitter grammar for kanshi configs [WIP]

Kanshi allows you to define your monitor setup in a declarative way. This
repository provides a tree-sitter grammar for the configuration files.

Link to Kanshi repository:
[sr.ht/~emersion/kanshi](https://sr.ht/~emersion/kanshi/)

### Syntax highlighting
![satty-20241206-17:22:00](https://github.com/user-attachments/assets/45fa8a60-21f4-47df-9c4b-47c1581056ef)


### Goals

- Parse Kanshi configs with Tree-sitter.
- Support profiles, outputs, comments, and whitespace.
- Ensure editor integration (Any editor with tree-sitter integration).
- Provide a base for future tools (linters, validators).
- Syntax highlighting

## Installation guide

- for _neovim_ users, please have a look at
  [`installation/neovim.md`](installation/neovim.md)
- for _helix_ users, please have a look at
  [`installation/helix.md`](installation/helix.md)
