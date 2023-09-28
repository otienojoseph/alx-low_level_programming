#include "main.h"

/**
 * print_binary - Prints binary representation of number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* Equivalent to dividing the number by 2 */
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
