#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: count of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv; /* suppress unused parameter warning */

	printf("%d\n", argc - 1);

	return (0);
}

