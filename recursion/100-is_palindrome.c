#include "main.h"

/**
 * pal_check - helper to compare chars from both ends recursively
 * @s: string to check
 * @l: left index
 * @r: right index
 *
 * Return: 1 if palindrome, otherwise 0
 */
static int pal_check(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (s[l] != s[r])
		return (0);
	return (pal_check(s, l + 1, r - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len;

	if (!s)
		return (0);
	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (pal_check(s, 0, len - 1));
}
