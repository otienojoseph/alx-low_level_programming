#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 * Return: return (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
	}
	putchar('\n');

	return (0);
}
