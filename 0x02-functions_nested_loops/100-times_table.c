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
			if (n < 0 || n > 15)
			{
				return;
			}

			product = i * j;
			if (j == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');

				if (product < 10)
				{
					check_product_less_than_10(product);
				}
				else if (product < 100)
				{
					check_product_less_than_100(product);
				}
				else
				{
					check_product_greater_than_100(product);
				}
			}
		}
		_putchar('\n');
	}
}

/**
 * check_product_less_than_10 - Check product < 10
 * @product: param
 * Return: void
 */
void check_product_less_than_10(int product)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(product % 10 + '0');
}

/**
 * check_product_less_than_100 - Check product < 100
 * @product: param
 * Return: void
 */
void check_product_less_than_100(int product)
{
	_putchar(' ');
	_putchar(' ');
	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');
}

/**
 * check_product_greater_than_100 - Check product > 100
 * @product: param
 * Return: void
 */
void check_product_greater_than_100(int product)
{
	_putchar(' ');
	_putchar((product / 100) + '0');
	_putchar(((product / 10) % 10) + '0');
	_putchar((product % 10) + '0');
}
