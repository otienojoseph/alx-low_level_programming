#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all parameters
 * @n: param
 * Return: Sum of all params
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int result, i;

	result = 0;
	va_start(args, n);

    if (n == 0)
        return (0);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);
	return (result);
}
