#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Create a file name and write text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated (or NULL to create an empty file).
 *
 * Return: 1 on success, -1 on fail (created, written, or write fails)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t text_len = strlen(text_content);

		ssize_t bytes_written = write(fd, text_content, text_len);

		close(fd);

		if (bytes_written != text_len)
		{
			return (-1);
		}
	}
	else
	{
		close(fd);
	}
	return (1);
}
