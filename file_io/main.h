#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Joshua
 * Desc: Function prototypes for basic file I/O utilities.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read a text file and print to STDOUT.
 * @filename: path to file to read.
 * @letters: maximum number of bytes to print.
 *
 * Return: number of bytes printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - create or truncate a file with owner RW permissions.
 * @filename: path to file to create.
 * @text_content: NULL-terminated string to write, or NULL for empty file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - append text to an existing file.
 * @filename: path to file to append to.
 * @text_content: NULL-terminated string to add, or NULL to change nothing.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
