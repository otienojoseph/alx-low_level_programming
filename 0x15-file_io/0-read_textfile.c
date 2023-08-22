#include "main.h"

/**
 * read_textfile - Reads textfile and prints it to POSIX output
 * @filename: text filename
 * @letters: number of letters to print
 * Return: Actual number of letters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, bytesRead, totalRead;

	if (filename == NULL)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (-1);
	}

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/* manipulate file */
	bytesRead = read(fd, buffer, letters);
	if (bytesRead < 0)
	{
		free(buffer);
		return (0);
	}

	totalRead = write(STDOUT_FILENO, buffer, strlen(buffer));
	/* close file */
	close(fd);
	free(buffer);

	if (totalRead < 0)
		return (0);

	return (totalRead);
}
