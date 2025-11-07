/*
 * File: 1-init_dog.c
 * Desc: Function that initializes a variable of type struct dog.
 */

#include "dog.h"

/**
 * init_dog - Initialize a struct dog variable
 * @d: pointer to struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
