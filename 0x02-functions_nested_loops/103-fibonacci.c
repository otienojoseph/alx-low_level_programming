#include <stdio.h>

/**
 * main - Print sum of even valued fibs not greater than 4000000
 * Return: Always 0
 */

int main(void)
{
	long long sum;
	long a, b;

	sum = 0;

	a = 1, b = 2;
	
	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		a = b;
		b = a + b;
	}

	printf("%lli", sum);
	printf("\n");

	return (0);
}
