#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strncat - Concatenate two strings and don't need
* to be null terminated
* @dest: param pointer
* @src: param pointer
* @n: int param
* Return: char pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = strlen(dest);

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
