#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to the standard output
 * @filename: the name of the textfile to read from
 * @letters: the number of letters to read a print
 *
 * Return: return the number of bytes read and written
 * return 0 if filename is NULL or file cannot open or read from
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytes_r;
	ssize_t bytes_w;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_r = read(fd, buffer, letters);
	if (bytes_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_w);
}
