/*
 * File: 3-get_op_func.c
 * Desc: Returns the function pointer matching an operator.
 */

#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - select the correct function to perform the operation
 * @s: operator passed as argument
 *
 * Return: pointer to the matching function, or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (s != NULL && *(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
