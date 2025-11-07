# 0x0D. C - Structures, typedef

A short project on defining and using C structures and `typedef`.

## Requirements
- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Style: Betty (both style and docs)

## Files
- `dog.h` — Defines `struct dog` with members `name`, `age`, `owner`, and the alias `dog_t`.

## Usage
Example compile with a simple test main stored as `0-main.c`:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t d = {"Poppy", 3.5, "Bob"};
	printf("My name is %s, and I am %.1f :) - Woof!\n", d.name, d.age);
	return (0);
}
```

Build and run:
- `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`
- `./a`

Note: For checker submissions, only `dog.h` is required for Task 0.
