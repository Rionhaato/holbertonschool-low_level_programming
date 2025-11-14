# Variadic Functions

This directory contains solutions for the Holberton "0x10. C - Variadic functions" project.

## Files

- `0-sum_them_all.c` – implements `int sum_them_all(const unsigned int n, ...)`, which sums variadic integer arguments (returns 0 when `n` is 0).
- `0-main.c` – simple test harness mirroring the intranet example; not part of the checker submission.
- `variadic_functions.h` – header with the `sum_them_all` prototype and include guards.

Compile tests with:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
./a
```
