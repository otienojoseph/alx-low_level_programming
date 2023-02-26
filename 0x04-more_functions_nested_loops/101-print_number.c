#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: param
 * Return: void
 */

void print_number(int n)
{
	if (n == INT_MIN)
	{
		printf("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n > 9)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + '0');
	}
}
