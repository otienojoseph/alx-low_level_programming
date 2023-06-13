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

	printf("%d\n", argc);
	return (0);
}
