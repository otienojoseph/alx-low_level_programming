#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * str_concat - Concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: Return pointer to the new string
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr_str;
	int i, str_len1, str_len2, total_len;

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);
	total_len = str_len1 + str_len2 + 1;

	ptr_str = (char *) malloc(total_len * sizeof(char));

	if (ptr_str != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			ptr_str[i] = s1[i];
		}

		for (i = 0; i < str_len2; i++)
		{
			ptr_str[str_len1 + i] = s2[i];
		}
		ptr_str[total_len - 1] = '\0';

		return (ptr_str);
	}
	else
	{
		return (NULL);
	}
}
