#include <stdio.h>

/**
*main - Entry point
*
*Description- Prints the alphabet in lowercase using putchar
*
*Return: always 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
