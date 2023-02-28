#include "main.h"

/**
 * puts2 - Print every other character of string
 * @s: char pointer 
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
