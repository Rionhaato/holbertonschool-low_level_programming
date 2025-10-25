#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Description:
 * - skips any leading non-digit characters.
 * - Counts every '_' seen before the number to set the final sign.
 * - Builds the number from consecutive digits.
 * - Stops at the first non-digit after digits.
 * - If no digits exist, return 0.
 *
 *   Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		res = res * 10 - digit;
		i++;
	}

	if (sign > 0)
		return (-res);
	return (res);
}
