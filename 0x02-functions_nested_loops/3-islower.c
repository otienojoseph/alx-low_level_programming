#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase characters
 * @c: param
 * Return: return 1 if char is lowercase
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
