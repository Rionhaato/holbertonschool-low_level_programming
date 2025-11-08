/*
 * File: 5-free_dog.c
 * Desc: Function that frees a dog and its allocated fields.
 */

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free a dog instance and its strings
 * @d: pointer to dog_t to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

