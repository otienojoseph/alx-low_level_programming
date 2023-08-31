#include "main.h"

/**
 * print_binary - Prints binary representation of number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
		return;

	if (n == 0)
		_putchar('0');

	print_binary(n >> 1);
	_putchar(((n & 1) == 1) ? '1' : '0');
}
