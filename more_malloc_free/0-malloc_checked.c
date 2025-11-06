#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and exits on failure
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 *         exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
