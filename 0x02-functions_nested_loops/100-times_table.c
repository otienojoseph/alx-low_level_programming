#include "main.h"

/**
 * print_times_table - Print times table
 * @n: param
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (n > 15 || n < 0)
				continue;

			if (j == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');

				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product < 100)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}

}

