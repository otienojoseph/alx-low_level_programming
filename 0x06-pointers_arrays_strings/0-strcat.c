#include "main.h"

/**
*_strcat - Appendsthe'src'stringto'dest'string
*@dest: pointer
*@src: pointer
*Return: Concatnatedstring
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[i] != '\0')
	{
		dest[i++] = src[j++];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
