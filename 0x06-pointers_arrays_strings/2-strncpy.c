#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: pointer param
 * @src: pointer param
 * @n: length of copy
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	/* Loop through chars and make sure it's not null */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	/* Add null at end of string loop */
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
