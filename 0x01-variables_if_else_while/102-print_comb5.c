#include <stdio.h>

/**
 * main - Print all possible combinations of two digit numbers
 * Return: return (0) for success
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar(',');	
		}
	}
	putchar('\n');

	return (0);
}
