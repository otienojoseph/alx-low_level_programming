#include "main.h"

/**
 * _strcpy - Copy str pointed to by src including the terminating nullbyte
 * @dest: param
 * @src: param
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
