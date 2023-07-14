#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: number of characters to print
 * Return: Pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, str_len1, str_len2;
	char *new_str;

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= str_len2)
		n = str_len2;

	new_str = malloc(str_len1 + n * sizeof(*new_str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_len1; i++)
	{
		new_str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		new_str[str_len1 + i] = s2[i];
	}

	new_str[str_len1 + n] = '\0';

	return (new_str);
}

