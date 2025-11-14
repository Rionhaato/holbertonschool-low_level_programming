#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints integers separated by a string
 * @separator: string printed between numbers (ignored when NULL)
 * @n: number of integers supplied
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
