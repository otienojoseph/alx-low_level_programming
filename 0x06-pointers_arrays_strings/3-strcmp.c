#include "main.h"

/**
 * _strcmp - Compares string
 * @s1: pointer
 * @s2: pointer
 * Return: <0 if s<t, 0 s==t, >0 s>t
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
			return (0);
	}

	return (*s1 - *s2);
}
