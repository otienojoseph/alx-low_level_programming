#include "main.h"

int sclose(int d);

/**
 * main - Function to copy files
 * @argc: number of args passed
 * @argv: pointer to array of args
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, eof = 1, from_filde, to_filde, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_filde = open(argv[1], O_RDONLY);
	if (from_filde < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from_filde file %s\n", argv[1]);
		exit(98);
	}

	to_filde = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_filde < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		sclose(from_filde);
		exit(99);
	}

	while (eof)
	{
		eof = read(from_filde, buffer, 1024);
		if (eof < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from_filde file %s\n", argv[1]);
			sclose(from_filde);
			sclose(to_filde);
			exit(98);
		}
		else if (eof == 0)
			break;

		bytes_read += eof;
		error = write(to_filde, buffer, eof);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			sclose(from_filde);
			sclose(to_filde);
			exit(99);
		}
	}

	error = sclose(to_filde);
	if (error < 0)
	{
		sclose(from_filde);
		exit(100);
	}
	error = sclose(from_filde);
	if (error < 0)
		exit(100);

	return (0);
}

/**
 * sclose - Function that closes file and prints error
 * @d: descriptor error
 * Return: 1 on success, -1 on failure
 */
int sclose(int d)
{
	int error;

	error = close(d);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
	return (error);
}
