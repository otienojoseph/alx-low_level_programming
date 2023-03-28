#include "main.h"

/**
 * factorial - Print factorial of number
 * @n: param
 * Return: -1 for failure
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
