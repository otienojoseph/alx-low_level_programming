#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: string to be printed between numbers
 * @n: number of args passed
 * Return: Print numbers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator && n != 0)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(args, int));

			if (i < n)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}

	va_end(args);
}
