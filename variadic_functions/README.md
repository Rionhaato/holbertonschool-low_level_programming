# Variadic Functions

This directory contains solutions for the Holberton "0x10. C - Variadic functions" project.

## Files

- `0-sum_them_all.c` – implements `int sum_them_all(const unsigned int n, ...)`, which sums variadic integer arguments (returns 0 when `n` is 0).
- `1-print_numbers.c` – implements `void print_numbers(const char *separator, const unsigned int n, ...)`, printing integers separated by an optional string and ending with a newline.
- `2-print_strings.c` – implements `void print_strings(const char *separator, const unsigned int n, ...)`, printing strings (or `(nil)` when NULL) separated by an optional delimiter.
- `3-print_all.c` – implements `void print_all(const char * const format, ...)`, iterating over a format string to print chars, ints, floats, and strings with graceful handling of `NULL` strings.
- `0-main.c` – simple test harness mirroring the intranet example; not part of the checker submission.
- `1-main.c` – local tester for `print_numbers`; not submitted.
- `2-main.c` – local tester for `print_strings`; not submitted.
- `3-main.c` – local tester for `print_all`; not submitted.
- `variadic_functions.h` – header with the `sum_them_all` prototype and include guards.

Compile tests with:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
./a

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
./b

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
./c

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
./d
```
