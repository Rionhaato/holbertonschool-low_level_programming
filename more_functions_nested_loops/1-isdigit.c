#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: 1 if digit, 0 otherise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
