# Binary Trees

Holberton School project implementing basic binary tree operations (creation, insertion, traversal, metrics, and relationship helpers). All code follows Betty style and is built on Ubuntu 20.04 with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.

## Requirements
- No global variables; at most 5 functions per file.
- Prototypes live in `binary_trees.h` (guarded include).
- Use provided `binary_tree_print.c` only for local visualization (not graded).

## Tasks (0-18)
- New node, insert left/right, delete tree.
- Leaf/root checks, preorder/inorder/postorder traversals.
- Height, depth, size, leaves, internal nodes.
- Balance factor, fullness, perfection.
- Sibling and uncle helpers.

## Build
Example:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```
