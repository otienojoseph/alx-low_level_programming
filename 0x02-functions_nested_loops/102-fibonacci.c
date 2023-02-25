#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int i, j, k, l;

	i = 1, j = 1;

	printf("%d, %d, ", i, j);

	for (k = 2; k < 50; k++)
	{
		l = i + j;
		printf("%d, ", l);
		
		/* update value of i to j and j to k */
		i = j;
		j = k;
	}
	printf("\n");

	return (0);
}
