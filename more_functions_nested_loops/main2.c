#include "main.h"

/**
 * main - tests the mul function
 *
 * Return: Always 0
 */
int main(void)
{
	int result;

	result = mul(5, 7);
	_putchar((result / 10) + '0'); /*prints tens digit */
	_putchar((result % 10) + '0'); /*prints ones digit */
	_putchar('\n');

	return (0);
}
