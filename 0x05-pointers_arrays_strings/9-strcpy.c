#include "main.h"

/**
 * *_strcpy: Copy string pointed to by src, including the terminating nullbyte
 * @dest: param
 * @src: param
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char d[100];
	int i;

	d = dest;
	i = 0;

	while (src[i] != '\n')
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\n';

	return dest;
}
