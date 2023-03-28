#include "main.h"

/**
 * _pow_recursion - Raise x to y
 * @x: param 1
 * @y: param 2
 * Return: 1 on success, -1 or error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
