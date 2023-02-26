#include "main.h"

/**
 * print_triangle - Print triangle with size
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c, counter;

	counter = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		for (b = 0; b < counter; b++)
		{
			_putchar(' ');
		}
		for (c = 0; c < a; c++)
		{
			_putchar('#');
		}

		counter--;
		_putchar('\n');
	}
}
