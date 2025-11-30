/*
 * File: 0-read_textfile.c
 * Auth: Joshua
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to stdout.
 * @filename: name of the file to read.
 * @letters: maximum number of letters to read and print.
 *
 * Return: actual number of letters printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	if (wr == -1 || wr != rd)
	{
		close(fd);
		return (0);
	}

	if (close(fd) == -1)
		return (0);

	return (wr);
}
