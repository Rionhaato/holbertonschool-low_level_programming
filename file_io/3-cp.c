/*
 * File: 3-cp.c
 * Auth: Joshua
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void copy_file(const char *from, const char *to);
void exit_read_error(const char *file, char *buffer, int from, int to);
void exit_write_error(const char *file, char *buffer, int from, int to);

/**
 * exit_read_error - print read error and exit.
 * @file: file name.
 * @buffer: allocated buffer to free.
 * @from: descriptor to close, or -1 to skip.
 * @to: descriptor to close, or -1 to skip.
 */
void exit_read_error(const char *file, char *buffer, int from, int to)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	free(buffer);
	if (from != -1)
		close_file(from);
	if (to != -1)
		close_file(to);
	exit(98);
}

/**
 * exit_write_error - print write error and exit.
 * @file: file name.
 * @buffer: allocated buffer to free.
 * @from: descriptor to close, or -1 to skip.
 * @to: descriptor to close, or -1 to skip.
 */
void exit_write_error(const char *file, char *buffer, int from, int to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	free(buffer);
	if (from != -1)
		close_file(from);
	if (to != -1)
		close_file(to);
	exit(99);
}

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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - copy file_from to file_to using a 1024-byte buffer.
 * @from: source file name.
 * @to: destination file name.
 */
void copy_file(const char *from, const char *to)
{
	int fd_from, fd_to;
	ssize_t rd, wr;
	char *buffer;

	buffer = create_buffer((char *)to);

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
		exit_read_error(from, buffer, -1, -1);

	fd_to = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_write_error(to, buffer, fd_from, -1);

	rd = read(fd_from, buffer, 1024);
	while (rd > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
			exit_write_error(to, buffer, fd_from, fd_to);

		rd = read(fd_from, buffer, 1024);
	}

	if (rd == -1)
		exit_read_error(from, buffer, fd_from, fd_to);

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);
}
