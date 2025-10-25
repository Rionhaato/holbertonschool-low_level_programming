#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Task 0 (concatenate two strings)
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char  *ptr;

	ptr = _strcat(s1, s2);
	printf("%s", ptr);
	printf("%s", s1);

	return (0);
}
