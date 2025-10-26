#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School Students
 *
 * Description: This main file tests the function 'leet' by encoding
 * different strings into 1337 format, replacing specific letters with numbers.
 * It prints the string before and after encoding to verify correct behavior.
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. leet TIME!";
	char *p;

	p = leet(s);
	printf("%s\n", p);
	printf("%s\n", s);
	return (0);
}
