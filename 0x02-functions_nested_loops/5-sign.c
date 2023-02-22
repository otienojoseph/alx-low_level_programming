#include "main.h"

/**
 * print_sign - Print + if number is positive, - if negative and 0 if zero
 * @n: param
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	int validate;

	if (n > 0)
	{
		validate = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		validate = 0;
		_putchar(0 + '0');
	}
	else
	{
		validate = -1;
		_putchar('-');
	}

	return (validate);
}
