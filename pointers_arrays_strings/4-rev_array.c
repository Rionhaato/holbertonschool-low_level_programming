#include "main.h"

/**
 * reverse_array - reverses an array of integers in place
 * @a: array of integers
 * @n: numbers of elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
