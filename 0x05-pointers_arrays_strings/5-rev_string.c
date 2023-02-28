#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Print string in reverse
 * @s: char s pointer
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
