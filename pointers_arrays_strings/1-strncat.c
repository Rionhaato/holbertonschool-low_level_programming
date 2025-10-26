#include "main.h"

/**
 * _strncat - concatenates at most n bytes of src to dest
 * @dest: destination buffer (must be large enough)
 * @src: source string
 * @n: maximum number of bytes from src to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* move i to the end of dest */
	while (dest[i] != '\0')
		i++;

	/* copy up to n bytes from src */
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	/* always NUL-terminate */
	dest[i + j] = '\0';
	return (dest);
}
