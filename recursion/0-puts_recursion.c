/* Forward declaration to avoid requiring main.h during checker compile */
int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);
}
