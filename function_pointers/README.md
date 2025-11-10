# Function Pointers (C)

Small project to practice using pointers to functions in C: callbacks, runtime dispatch, and operator tables. All code follows Betty style and compiles with `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Learning Objectives
- What function pointers are and how to use them
- What a function pointer holds exactly
- Where a function pointer points in virtual memory

## Requirements
- Editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Compiler: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- No global variables; ≤ 5 functions per file
- Only allowed C library calls: `malloc`, `free`, `exit` (no `printf`, `puts`, etc.)
- `_putchar` is allowed; its prototype must be in `function_pointers.h`
- Provide `function_pointers.h` with include guards and all prototypes
- Betty style enforced by `betty-style.pl` and `betty-doc.pl`

## Files
- `function_pointers.h` — Prototypes; includes `<stddef.h>` for `size_t`
- `0-print_name.c` — `void print_name(char *name, void (*f)(char *))`
- `1-array_iterator.c` — `void array_iterator(int *array, size_t size, void (*action)(int))`
- `2-int_index.c` — `int int_index(int *array, int size, int (*cmp)(int))`
- `3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, `3-main.c` — Simple calculator using function pointers
- Local test mains: `0-main.c`, `1-main.c`, `2-main.c`

## Build Examples
From repository root:
```
# Task 0
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 function_pointers/0-main.c \
    function_pointers/0-print_name.c -o a0

# Task 1
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 function_pointers/1-main.c \
    function_pointers/1-array_iterator.c -o a1

# Task 2
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 function_pointers/2-main.c \
    function_pointers/2-int_index.c -o a2

# Task 3 (calculator)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
    function_pointers/3-main.c function_pointers/3-op_functions.c \
    function_pointers/3-get_op_func.c -o calc
```

## Notes
- Always check for `NULL` before calling through a function pointer.
- Do not use stdio functions inside required implementations unless the task explicitly asks for it; local mains may use `printf` for testing only.
