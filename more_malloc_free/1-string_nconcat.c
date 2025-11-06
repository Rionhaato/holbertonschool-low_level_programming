#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to use
 *
 * Return: pointer to newly allocated space containing s1, then the first
 * n bytes of s2, and null-terminated. Returns NULL on allocation failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	unsigned int copy2;
	char *res;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	copy2 = (n >= len2) ? len2 : n;

	res = malloc((len1 + copy2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (i = 0; i < copy2; i++)
		res[len1 + i] = s2[i];

	res[len1 + copy2] = '\0';

	return (res);
}
