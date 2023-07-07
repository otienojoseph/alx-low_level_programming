#include <stdio.h>

/**
  * main - Print all arguments recieved
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
