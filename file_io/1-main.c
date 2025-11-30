/*
 * File: 1-main.c
 * Auth: Joshua
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point for testing create_file.
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
