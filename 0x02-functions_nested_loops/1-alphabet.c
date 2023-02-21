#include "main.h"

void print_alphabet(void);

/**
 * main - Print alphabet in lowercase
 * Return: return 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
