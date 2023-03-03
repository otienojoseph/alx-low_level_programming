#include "main.h"
#include <string.h>

/**
 * leet - Encodes function to leet
 * @s: param pointer
 * Return: string
 */

char *leet(char *s)
{
	/* char str1[20]; */
	/* char str2[20]; */
	int i, j;

	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
			}
		}
	}

	return (s);
}
