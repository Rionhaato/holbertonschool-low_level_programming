#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: The string to print
 *
 * Return: Nothing (void)
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
