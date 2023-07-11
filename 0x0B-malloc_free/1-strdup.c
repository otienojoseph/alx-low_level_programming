#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * _strdup - Return pointer to a new string which is a duplicate
  * of the string str
  * @str: string
  * Return: Pointer to the duplicated string
  */

char *_strdup(char *str)
{
	int str_len, i;
	char *ptr_str;

	str_len = strlen(str);
	ptr_str = (char *) malloc(str_len * sizeof(char));

	if (str_len == 0)
	{
		return (NULL);
	}

	if (ptr_str != NULL)
	{
		for (i = 0; i < str_len; i++)
		{
			ptr_str[i] = str[i];
		}

		return (ptr_str);
	}
	else
	{
		return (NULL);
	}
}
