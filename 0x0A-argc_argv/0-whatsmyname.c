#include <stdio.h>

/**
 * main - Print function name
 * @argc: argument count
 * @argv: array of char pointers
 * Return: On success 0
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
