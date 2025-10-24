#include "main.h"
#include <stdio.h>

/**
 * main - check the print_array function
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5] = {98, 402, -198, 298, -1024};

	print_array(array, 5);
	print_array(array, 0);
	print_array(array, 3);
	return (0);
}
