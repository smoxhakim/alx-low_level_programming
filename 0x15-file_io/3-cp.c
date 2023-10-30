#include "main.h"
#include <stdio.h>

char *create_buff(char *file);
void clo_file(int fd);

/**
 * create_buff - Allocate bytes for a buffer
 * @file: name of the file buffer is storing chars for
 * Return: pointer to the allocated buffer
 * owned by: SmoxHAkim
 */

char *create_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * clo_file - Closes the file descriptors
 * @fd: file descriptor to be closed
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
 * main - Copies contents of file to another file
 * @argc: number of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int src, dst, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buffer, 1024);
	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(dst, buffer, r);
		if (dst == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(src, buffer, 1024);
		dst = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	clo_file(src);
	clo_file(dst);

	return (0);
}
