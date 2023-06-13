#include <stdio.h>

/**
 * main - Print all args including the first one
 * @argc: argument count
 * @argv: argument array
 * Return: On success 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
