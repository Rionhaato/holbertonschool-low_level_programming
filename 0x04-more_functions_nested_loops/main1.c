#include "main.h"

/**
 * main - test the _isdigit function
 *
 * Return: Always 0
 */
int main(void)
{
	_putchar('0' + _isdigit('8')); /* 1 */
	_putchar('0' + _isdigit('a')); /* 0 */
	_putchar('\n');
	return (0);
}
