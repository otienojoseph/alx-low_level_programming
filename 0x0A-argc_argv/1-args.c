#include <stdio.h>

/**
 *main - Print number of args
 *@argc: param 1
 *@argv: param 2
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	while (i < argc)
	{
		i++;
	}

	printf("%d\n", --i);
	return (0);
}
