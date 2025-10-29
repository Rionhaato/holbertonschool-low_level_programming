## Recursion

Small C functions to practice recursion.

## Requirements
- C files compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Use only the provided `_putchar` for output when required
- Header: `main.h`

## Files
- `0-puts_recursion.c` — prints a string, followed by a new line, using recursion.
- `_putchar.c` — helper to write a single character to stdout.
- `main.h` — prototypes for project functions.
- `0-main.c` — local test driver (not checked by the checker).

## Usage
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
    recursion/_putchar.c recursion/0-puts_recursion.c recursion/0-main.c \
    -I recursion -o recursion/0-puts_recursion
./recursion/0-puts_recursion
```

