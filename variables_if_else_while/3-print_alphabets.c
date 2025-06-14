#include <stdio.h>

/**
* main - prints the alphabet in lowercase, then uppercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
char c;

/* Print lowercase alphabet */
for (c = 'a'; c <= 'z'; c++)
putchar(c);
/* Print uppercase alphabet */
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
/* Print newline */
putchar('\n');
return (0);
}
