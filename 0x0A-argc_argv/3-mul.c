#include <stdio.h>
#include <stdlib.h>

/**
  * main - Take 2 numbers and multiple them and return result
  * @argc: Argument count
  * @argv: Argument vector
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int result, i;

	result = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
