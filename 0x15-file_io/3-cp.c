#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int fd);

/**
 * create_buf - Allocates 1024 bytes for a buffer.
 * @file: name of the file buffer is storing characters for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
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
 * main - Copies the file contents to another file.
 * @argc: The number of arguments passedd to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, rd, wt;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	rd = read(fd1, buf, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (fd1 == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, 
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wt = write(fd2, buf, rd);
		if (fd2 == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
				exit(99);
		}
		rd = read(fd1, buf, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	}while (0 < rd);
	free(buf);
	close_file(fd1);
	close_file(fd2);

	return (0);
}
