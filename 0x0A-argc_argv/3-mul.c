#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: param 1
 * @argv: param 2
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, mul;

	i = 1;
	mul = 1;

	if (argc > 2)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
