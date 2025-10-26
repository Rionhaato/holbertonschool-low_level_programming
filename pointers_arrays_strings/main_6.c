#include "main.h"
#include <stdio.h>

/**
 * main - test cap_string
 * Return: 0.
 */
int main(void)
{
	char str[] = "hello world! this is: a test. let's-go crazy? okay.";

	printf("Before: %s\n", str);
	cap_string(str);
	printf("After: %s\n", str);

	return (0);
}
