#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: ponter to first int
 * @b: pointer to second int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
