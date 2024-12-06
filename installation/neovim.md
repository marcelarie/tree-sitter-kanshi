# neovim

## Lazy.nvim installation

Extend your lazy config with treesitter and the kanshi parser. The parser
doesn't have to be listed under dependencies.

```lua
{
    "nvim-treesitter/nvim-treesitter",
    config = function()
        require("nvim-treesitter.configs").setup {
            ensure_installed = { "kanshi" }, -- Ensure the "kanshi" parser is installed
            highlight = {
                enable = true,            -- Enable syntax highlighting
            },
        }
    end,
    dependencies = {
        -- Additional Nushell parser
        { "marcelarie/tree-sitter-kanshi", build = ":TSUpdate kanshi" },
    },
    build = ":TSUpdate",
},
```

## Manual installation

The ability to add syntax highlighting can be provided by [tree-sitter] using
[nvim-treesitter] (please refer to its own installation instructions).

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.kanshi = {
  install_info = {
    url = "https://github.com/marcelarie/tree-sitter-kanshi",
    files = { "src/parser.c", "src/scanner.c" },
    branch = "main",
  },
  filetype = "kanshi",
}
```

Run `:TSInstall kanshi` in neovim to install the above parser.

> **Note**
> To get an overview of how [tree-sitter] is parsing [kanshi] config files, I recommend
> poking around with [nvim-treesitter/playground].

With [tree-sitter] available, you can now add [highlights queries] to associate
highlight groups with tree-sitter nodes. Run `:highlight` in neovim for a list
of highlight groups.

You need to run this snippet whenever the highlights change and `:TSUpdate
kanshi` whenever there is a new version of the parser.

Since Kanshi config files are typically named `config`, it's not possible to
identify them as Kanshi files by name alone. To ensure proper recognition in
Neovim, add the following line to your config file:

```bash
# vim: set ft=kanshi:
# ... the rest of your config
```

This will tell neovim to treat the file as a kanshi file.

[tree-sitter]: https://tree-sitter.github.io/tree-sitter/
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
[nvim-treesitter/playground]: https://github.com/nvim-treesitter/playground
[kanshi]: https://sr.ht/~emersion/kanshi/
[highlights queries]: https://tree-sitter.github.io/tree-sitter/syntax-highlighting#highlights
