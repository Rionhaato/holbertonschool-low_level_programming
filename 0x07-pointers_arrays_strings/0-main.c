#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[20];
	char *ptr;

	ptr= _memset(buffer, 'A', 10);

	buffer[10] = '\0';


	printf("%s\n", ptr);

	return (0);
}
