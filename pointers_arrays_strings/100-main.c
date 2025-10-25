#include "main.h"
#include <stdio.h>

/**
 * main - checks the _atoi function
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", _atoi("98"));
	printf("%d\n", _atoi("-402"));
	printf("%d\n", _atoi("   ---+--+1234ab567"));
	printf("%d\n", _atoi("no digits here"));
	printf("%d\n", _atoi("--+-42"));
	return (0);
}
