/*
 * File: 3-cp.c
 * Auth: Joshua
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - allocates a 1024-byte buffer.
 * @file: file name for error messages.
 *
 * Return: pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buffer = malloc(1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes a file descriptor.
 * @fd: file descriptor to close.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, exits with error codes on failure.
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close_file(from);
		exit(99);
	}

	while ((rd = read(from, buffer, 1024)) > 0)
	{
		wr = write(to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_file(from);
			close_file(to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close_file(from);
		close_file(to);
		exit(98);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
