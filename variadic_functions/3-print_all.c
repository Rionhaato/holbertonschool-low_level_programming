#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints values based on a format string
 * @format: list of types of arguments provided
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	const char *sep = "";
	const char *comma = ", ";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			sep = comma;
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			sep = comma;
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			sep = comma;
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = comma;
			break;
		default:
			break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
