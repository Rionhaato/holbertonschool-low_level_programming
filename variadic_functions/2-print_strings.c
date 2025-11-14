#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings separated by a delimiter
 * @separator: string printed between each argument (ignored if NULL)
 * @n: number of string arguments provided
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
