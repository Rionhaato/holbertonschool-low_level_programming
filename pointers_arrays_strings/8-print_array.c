#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an int array
 * @a: pointer to the first element of the array
 * @n: how many elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
