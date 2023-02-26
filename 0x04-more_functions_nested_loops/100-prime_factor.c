#include <stdio.h>
#include <math.h>

/**
 * main - Find largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long n;
	int i, largest_factor;

	largest_factor = 1;
	n = 612852475143;

	/* Check for 2 as a factor repeatedly */
	while (n % 2 == 0)
	{
		largest_factor = 2;
		n = n / 2;
	}

	/* Check for odd factors up to the square root of n */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n = n / i;
		}
	}

    /* If n is still greater than 2, it must be a prime factor */
	if (n > 2)
	{
		largest_factor = n;
	}

	printf("%d\n", largest_factor);

	return (0);
}
