#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if character is alpha character
 * @c: param
 * Return: 1 if successful
 */

int _isalpha(int c)
{
	int validate;

	if (isalpha(c))
	{
		validate = 1;
	}
	else
	{
		validate = 0;
	}

	return (validate);
}
