/*
 * File: 1-array_iterator.c
 * Desc: Applies a callback to each element of an int array.
 */

#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function on each array element
 * @array: pointer to the first int element
 * @size: number of elements in @array
 * @action: function pointer to apply to each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
