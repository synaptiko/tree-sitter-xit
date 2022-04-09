# tree-sitter-xit

[[x]it!](https://xit.jotaen.net/) [grammar](https://xit.jotaen.net/syntax-guide) for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Installation

You need to have a proper [tree-sitter setup first](https://github.com/nvim-treesitter/nvim-treesitter#installation).

Then you need to have support for [`xit`](https://xit.jotaen.net/) filetype added, you can follow one of the methods from `:help new-filetype`, example:
```viml
augroup xit_filetype
	autocmd!
	autocmd BufRead,BufNewFile,BufReadPost *.xit set filetype=xit
	autocmd FileType xit setlocal shiftwidth=4 softtabstop=4 expandtab
augroup END
```

Additional functionality and necessary setup is done by [xit-nvim](https://github.com/synaptiko/xit-nvim#installation) plugin.

## Status

Work in progress, see more in:
[TODO.xit](./TODO.xit)
