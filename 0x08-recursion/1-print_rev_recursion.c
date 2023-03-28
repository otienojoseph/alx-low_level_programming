#include <stdio.h>

/**
 * _print_rev_recursion - Print string in reverse
 * @s: string
 * Return: void but prints string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
