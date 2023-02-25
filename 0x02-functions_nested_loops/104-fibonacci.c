#include <stdio.h>

/**
 * main - Print first 98 fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	long a, b, c, i;

	a = 1.0;
	b = 2.0;

	printf("%lu, %lu, ", a, b);

	for (i = a; i < 98; i++)
	{
		c = a + b;

		printf("%lu, ", c);
		a = b;
		b = c;
	}
	printf("%lu", a + b);
	printf("\n");

	return (0);
}
