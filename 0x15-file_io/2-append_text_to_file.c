#include "main.h"

/**
 * append_text_to_file - Append text to file
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes_written;

	len = 0;
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content && *(text_content + len))
		len++;

	bytes_written = write(fd, text_content, len);
	close(fd);

	if (bytes_written < 0)
		return (-1);

	return (1);
}
