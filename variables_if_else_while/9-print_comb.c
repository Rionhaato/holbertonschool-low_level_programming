#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Numbers must be separated by comma followed by a space
 * Numbers should be printed in ascending order
 * Uses exactly 4 putchar function calls in the code (not execution)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
