#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: On success 0
 */

int main(int argc, char **argv)
{
	(void) **argv;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
