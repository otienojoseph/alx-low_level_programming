#include "main.h"

/**
 * read_textfile - Reads text from file and prints it
 * on the standard output POSIX
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	size_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	/* open file */
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	/* manipulate file */
	buffer = (char *) malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read == 0)
	{
		free(buffer);
		fclose(fp);

		return (0);
	}

	/* null terminate string buffer */
	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	fclose(fp);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
