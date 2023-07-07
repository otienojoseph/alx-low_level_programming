#include <stdio.h>

/**
  * main - Print name of the program
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
