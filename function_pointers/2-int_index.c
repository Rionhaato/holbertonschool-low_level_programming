/*
 * File: 2-int_index.c
 * Desc: Searches for an int using a comparator callback.
 */

#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - search for an integer matching a predicate
 * @array: pointer to the first int element
 * @size: number of elements in @array
 * @cmp: pointer to a function that compares an int (non-zero means match)
 *
 * Return: index of first matching element, or -1 if none or on error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
