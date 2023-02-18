#include <stdio.h>

/**
 * main - Print all combinations of single digit integers
 * Return: return (0)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		putchar(',');

		if (n < 9)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
