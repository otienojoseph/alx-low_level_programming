#include "main.h"

/**
 * *_strcpy: Copy string pointed to by src, including the terminating nullbyte
 * @dest: param
 * @src: param
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';

	return dest;
}
