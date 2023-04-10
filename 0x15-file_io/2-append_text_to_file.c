#include  "main.h"
#include <string.h>

/**
 * append_text_to_file - appends content to a file
 * @filename: the name of the file
 * @text_content: string to be added at the end of the file
 *
 * Return: 1 on sucess and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
	}
	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
