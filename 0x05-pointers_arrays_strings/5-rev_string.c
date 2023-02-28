#include <string.h>
#include "main.h"

/**
 * rev_string - Print string in reverse
 * @s: char s pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = strlen(s);
	i = 0;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
