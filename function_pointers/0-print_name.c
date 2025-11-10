/*
 * File: 0-print_name.c
 * Desc: Implements print_name using a callback function pointer.
 */

#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a callback function
 * @name: pointer to the name string
 * @f: function pointer to a function that takes a char * and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
