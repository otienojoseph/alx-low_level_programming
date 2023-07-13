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
	unsigned int i, str_len1, str_len2, total_string_len;
	char *new_str;

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);
	total_string_len = str_len1 + str_len2 + 1;

	new_str = (char *) malloc(total_string_len * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_len1; i++)
	{
		new_str[i] = s1[i];
	}

	if (n >= str_len2)
	{
		for (i = 0; i == str_len2; i++)
		{
			new_str[str_len1 + i] = s2[i];
		}
	}
	else if (n < str_len2)
	{
		for (i = 0; i < n; i++)
		{
			new_str[str_len1 + i] = s2[i];
		}
	}
	new_str[total_string_len - 1] = '\0';

	return (new_str);
}

