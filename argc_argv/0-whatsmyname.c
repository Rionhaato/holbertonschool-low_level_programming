#include <stdio.h>

/**
 * main - prints the program name followed by a new line
 * @argc: number of command-line arguments (unused)
 * @argv: array of argument strings; argv[0] is the program name
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc; /* suppress unused parameter warning */

	printf("%s\n", argv[0]);

	return (0);
}
