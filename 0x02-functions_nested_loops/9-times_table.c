#include "main.h"

/**
 * times_table - Print 9 times table
 * Return: void
 */

#include <stdio.h>

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (j == 0)
			{
				putchar(product + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');

				if (product < 10)
				{
					putchar(' ');
					putchar(product + '0');
				}
				else if (product < 100)
				{
					putchar(' ');
					putchar((product / 10) + '0');
					putchar((product % 10) + '0');
				}
				else
				{
					putchar((product / 100) + '0');
					putchar(((product / 10) % 10) + '0');
					putchar((product % 10) + '0');
				}
			}
		}
		putchar('\n');			        }
}

