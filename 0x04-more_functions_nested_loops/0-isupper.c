#include <stdio.h>

/**
 * _isupper - Checks for uppercase
 * @c: param
 * Return: 1 if successful
 */

int _isupper(int c)
{
	char alpha;
	int validate;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
		{
			validate = 1;
			break;
		}
		else
		{
			validate = 0;
			break;
		}
	}
	return (validate);
}
