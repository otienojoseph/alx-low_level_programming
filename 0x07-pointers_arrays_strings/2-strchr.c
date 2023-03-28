#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: param string
 * @c: param char
 * Return: a pointer to the first occurance of the character @c
 * @s. Return NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
