#include <stdio.h>

/**
 * main - Print first 98 fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	double a, b, c;
	int i;

	a = 1.0;
	b = 2.0;

	printf("%f, %f", a, b);

	for (i = a; i < 98; i++)
	{
		c = a + b;

		printf("%f, ", c);
		a = b;
		b = c;
	}
	printf("%f", c);
	printf("\n");

	return (0);
}
