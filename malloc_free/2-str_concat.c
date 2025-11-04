#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a new buffer
 * @s1: first string (treated as "" if NULL)
 * @s2: second string (treated as "" if NULL)
 *
 * Return: pointer to newly allocated string containing s1 then s2,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < len2; j++)
		res[i + j] = s2[j];
	res[len1 + len2] = '\0';

	return (res);
}

