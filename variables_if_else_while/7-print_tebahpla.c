#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 25; i >= 0; i--)
{
putchar('a' + i);
}
putchar('\n');
return (0);
}
