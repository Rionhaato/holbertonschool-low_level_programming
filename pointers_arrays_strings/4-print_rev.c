#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Return: Nothing (void)
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find string length first */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print backward */
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}
