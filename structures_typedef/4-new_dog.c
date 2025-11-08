/*
 * File: 4-new_dog.c
 * Desc: Function that creates a new dog with copied name and owner.
 */

#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Compute string length
 * @s: input string
 *
 * Return: length of @s, 0 if NULL
 */
static int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - Copy string from src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
static char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL || src == NULL)
		return (dest);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Create a new dog instance with copies of name and owner
 * @name: dog's name (will be copied)
 * @age: dog's age
 * @owner: dog's owner (will be copied)
 *
 * Return: pointer to new dog_t on success, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy;
	char *owner_copy;
	int name_len;
	int owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	name_copy = (char *)malloc((name_len + 1) * sizeof(char));
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}
	owner_copy = (char *)malloc((owner_len + 1) * sizeof(char));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}

