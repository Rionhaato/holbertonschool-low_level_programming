#include <stdio.h>
#include "main.h"

/**
	* print_to_98 - prints all numbers from n to 98
	* @n: starting integer
	*
	* Description: Prints integers from @n up or down to 98,
	* separated by comma and space, and ends with a newline.
	*/
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n != 98)
	printf("%d, ", n);
	else
	printf("%d\n", n);
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n != 98)
	printf("%d, ", n);
	else
	printf("%d\n", n);
	}
	}
}
