# Tree Sitter Parser for 65c02 Assembly

[vasm](http://sun.hasenbraten.de/vasm/) 65c02 oldstyle grammar for tree-sitter

# TODO

- [ ] more directives
    - [ ] string directives
    - [ ] macro directives
    - [ ] add all names as defined in docs
- [ ] inline macro includes
- [ ] make a tree?
    - [ ] each global label makes a sub-tree
    - [ ] each local label makes a sub-tree until the next label
        * (local labels can't nest)
- [ ] queries
    - [ ] add folds
    - [ ] add textobjects
    - [ ] add locals
    - [ ] make sure highlights make sense
- [ ] more relevant tests
- [ ] differentiate 65c02 from 6502? (and wdc65c02 from both?)
