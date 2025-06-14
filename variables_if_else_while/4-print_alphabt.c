#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
* except letter q and e
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
