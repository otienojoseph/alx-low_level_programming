#include <stdio.h>

/**
 * main - Print numbers 0 - 9 using putchar
 * Return: return (0) success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
