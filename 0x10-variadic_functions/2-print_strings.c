#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: separator
 * @n: number of arguments passed
 * Return: Print strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *word;

	va_start(args, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			word = va_arg(args, char *);
			if (word != NULL)
			{
				printf("%s", word);
			}
			else
			{
				printf("(nil)");
			}

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(args);
}
