#include "main.h"

/**
 * create_file - Create file
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		perror("fails\n");
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			perror("fail\n");
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
