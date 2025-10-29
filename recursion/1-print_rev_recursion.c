/* Forward declaration to avoid requiring main.h during checker compile */
int _putchar(char c);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

