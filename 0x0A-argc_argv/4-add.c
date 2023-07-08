#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main - Print all numbers passed
  * Throw error when a non-digit is passed
  * @argc: Argument count
  * @argv: Argument vector
  *Return: On success 0
  */

int main(int argc, char *argv[])
{
	int result, i, temp;

	result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		temp = atoi(argv[i]);
		/* isdigit - checks if value is a digit */
		if (isdigit(temp))
		{
			printf("Error\n");
			return (1);
		}
		result += temp;
	}
	printf("%d\n", result);
	return (0);
}
