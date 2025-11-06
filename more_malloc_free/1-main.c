#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the string_nconcat function
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	if (concat == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}
	printf("%s\n", concat);
	free(concat);
	return (0);
}
