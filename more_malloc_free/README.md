# More malloc, free

Exercises focused on dynamic memory allocation in C.

## Requirements
- Compile on Ubuntu 20.04 LTS with `gcc`
- Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code style: Betty

## Files
- `0-malloc_checked.c` — Implements `void *malloc_checked(unsigned int b);`
  - Allocates `b` bytes with `malloc`
  - Exits with status `98` if allocation fails
- `main.h` — Function prototypes for this directory
- `0-main.c` — Local test file only (not to be pushed)

## Build & Run (local)
```sh
cd more_malloc_free
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
```

## Notes
- Always check the return value of `malloc`.
- On failure, `malloc_checked` terminates the process with exit status `98`.
