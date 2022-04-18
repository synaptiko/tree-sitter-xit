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

Necessary setup and some additional functionality is done by [xit-nvim](https://github.com/synaptiko/xit-nvim#installation) plugin.

## Roadmap

See also [Roadmap.xit](./Roadmap.xit)

### 0.1 (Released)

Basic functionality.

### 0.2 (WIP)

Support for tags.

### 0.3

Support for due date.

### 0.4

Support for divider.

### 1.0

Stabilized syntax.

## Contributing

Any contributions are welcome (check [the list above](#roadmap) to see open/ongoing tasks).

You can also check [recommended learning resources](./LearningResources.md) and [ideas](./Ideas.md).
