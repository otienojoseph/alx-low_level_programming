#include "main.h"

/**
 * read_textfile - Reads textfile and prints it to POSIX output
 * @filename: text filename
 * @letters: number of letters to print
 * Return: Actual number of letters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t bytesRead, totalRead;

	if (filename == NULL)
		return (0);

	buffer = (char *) malloc(letters + 1);
	if (buffer == NULL)
	{
		return (-1);
	}

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* manipulate file */
	totalRead = 0;
	while ((bytesRead = read(fd, buffer, letters)) > 0)
	{
		buffer[bytesRead] = '\0';
		write(STDOUT_FILENO, buffer, strlen(buffer));
		totalRead += bytesRead;
	}

	/* close file */
	close(fd);
	free(buffer);

	return (totalRead);
}
