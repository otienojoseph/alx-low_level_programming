#include "main.h"

/**
* _strncat - Concatenate two strings and don't need
* to be null terminated
* @dest: param pointer
* @src: param pointer
* n: int param
* Return: char pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, size_dest;

	size_dest = sizeof(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		 dest[size_dest  + i] = src[i];
	}
	dest[n + i] = '\0';

	return (dest);
}
