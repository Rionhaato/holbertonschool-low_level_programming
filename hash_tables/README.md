# Hash Tables

Intro project implementing a simple hash table in C with chaining collision handling.

## Files
- `hash_tables.h`: data structures and function prototypes.
- `0-hash_table_create.c`: allocate a hash table and its array.
- `1-djb2.c`: djb2 hash function.
- `2-key_index.c`: map a key to an array index.
- `3-hash_table_set.c`: insert/update key/value pairs.
- `4-hash_table_get.c`: retrieve values by key.
- `5-hash_table_print.c`: print the table contents.
- `6-hash_table_delete.c`: free all allocated memory.

## Build example
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c \
    0-hash_table_create.c 1-djb2.c 2-key_index.c \
    3-hash_table_set.c 4-hash_table_get.c \
    5-hash_table_print.c 6-hash_table_delete.c -o a
```
