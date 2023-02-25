#include "main.h"

/**
 * _isdigit - Check for 0 - 9
 * @c: param
 * Return: 1 if true
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
