#include <stdio.h>

/**
 * main - Print all letters except 'q' and 'e'
 * Return: return (0) success
 */
int main(void)
{
	char letter = 'a';

	for (letter; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
