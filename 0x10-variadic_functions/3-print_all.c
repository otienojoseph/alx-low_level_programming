#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: list of arguments passed to function
 * Return: print anything
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *string_val;

	va_start(args, format);

	if (format[i] == '\0')
	{
		putchar('\n');
		exit(0);
	}

	while (format[i] != '\0')
	{

		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string_val = va_arg(args, char *);
				if (string_val == NULL)
					printf("(nil)");
				printf("%s", string_val);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(args);
}
