#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int k;
	long i, j, l;

	i = 1, j = 2;

	printf("%ld, %ld, ", i, j);

	for (k = 3; k < 50; k++)
	{
		l = i + j;
		printf("%ld, ", l);

		/* update value of i to j and j to k */
		i = j;
		j = l;
	}
	printf("%ld", i + j);
	printf("\n");

	return (0);
}
