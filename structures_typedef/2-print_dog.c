/*
 * File: 2-print_dog.c
 * Desc: Function that prints a struct dog.
 */

#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print the contents of a struct dog
 * @d: pointer to struct dog to print
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

