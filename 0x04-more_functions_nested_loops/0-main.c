#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char c;
	int n;

	c = 'A';
	n = _isupper(c);

	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(n + '0');
	_putchar('\n');
	

	c = 'B';
	n = _isupper(c);
	
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(n + '0');
	_putchar('\n');

	return (0);

}
