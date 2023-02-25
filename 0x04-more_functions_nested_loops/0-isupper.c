#include "main.h"

/**
 * _isupper - Checks for uppercase
 * @c: param
 * Return: 1 if successful
 */

int _isupper(int c)
{
	char alpha;

	alpha = 'A';

	while (alpha <= 'Z')
	{
		if (c == alpha)
		{
			return (1);
		}

		alpha++;
	}
	return (0);
}
