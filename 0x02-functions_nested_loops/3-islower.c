#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: param
 * Return: return 1 if char is lowercase
 */

int _islower(int c)
{
	char alpha;
	int validate;

	alpha = 'a';

	while (alpha < 'z')
	{
		if (alpha == c)
		{
			validate = 1;
			break;
		}
		else
		{
			validate = 0;
			break;
		}

		alpha++;
	}
	return (validate);
}
