#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int k1, k2, i, j;
	char *s;
	char *nul = "";

	k1 = 0, k2 = 0;

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	while (*(s1 + k1))
		k1++;
	while (*(s2 + k2))
		k2++;

	s = malloc(sizeof(char) * (k1 + k2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < k1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = k1; i <= k2; j++, i++)
		*(s + j) = *(s2 + i);

	return (s);
}
