#include <stdio.h>

/**
 * main - Print sum of even valued fibs not greater than 4000000
 * Return: Always 0
 */

int main(void)
{
	int sum, a, b, c;

	sum = 0;

	a = 1, b = 2;

	while (a <= 4000000)
	{
		c = a + b;

		if (a % 2 == 0)
		{
			sum += a;
		}
		a = b;
		b = c;
	}

	printf("%i", sum);
	printf("\n");

	return (0);
}
