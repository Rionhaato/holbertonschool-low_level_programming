#include "main.h"

/**
 * print numbers - prints the numbers 0 through 9, followed by a new line
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
