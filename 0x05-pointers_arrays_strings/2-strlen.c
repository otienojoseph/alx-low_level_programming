#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: param
 * Return: void
 */

int _strlen(char *s)
{
	int nc;

	for (nc = 0; *s != '\0'; s++)
	{
		nc++;
	}

	return (nc);
}
