#include "main.h"

/**
 * _isdigit - Check for 0 - 9
 * @c: param
 * Return: 1 if true
 */

int _isdigit(int c)
{
	int digit;

	digit = 0;

	while (digit < 10)
	{
		if (c == digit + '0')
		{
			return (1);
		}

		digit++;
	}
	return (0);
}
