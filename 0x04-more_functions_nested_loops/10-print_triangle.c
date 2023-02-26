#include "main.h"

/**
 * print_triangle - Print triangle with size
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar(' ');
			_putchar('\n');
		}
	}
}
