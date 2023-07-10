#include "main.h"
#include <string.h>
/**
 * create_file - creates a file and writes some content to it
 * @filename: the file to be created
 * @text_content: pointer to the string to be written to the file created
 *
 * Return: 1 on success and 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytesWritten, longi;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		longi = strlen(text_content);
	}
	bytesWritten = write(fd, text_content, longi);
	if (bytesWritten != longi)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
