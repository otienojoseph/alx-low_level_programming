#include <stdio.h>

/**
  * main - Print the number of args passed
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
