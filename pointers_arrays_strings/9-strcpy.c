#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: buffer where we copy the string
 * @src: the source string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;


	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
