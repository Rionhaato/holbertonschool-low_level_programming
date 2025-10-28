#include "main.h"

/**
 * _strchr - locates first ocurrence of a character in a string
 * @s: pointer to the string to scan
 * @c: character to locate (search target)
 *
 * Return: pointer to the first ocurrence of @c in @s,
 *         or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	if (c == '\0')
		return (s + i);

	return (0);
}
