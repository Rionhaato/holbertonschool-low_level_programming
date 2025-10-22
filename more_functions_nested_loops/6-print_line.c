#include "main.h"

/**
 * print_line - graws a straight line in the terminal
 * @n: numbers of times the character '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
