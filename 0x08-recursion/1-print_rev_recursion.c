#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Print string character in reverse
 * @s: String to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
