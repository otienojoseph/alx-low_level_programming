#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
	int n;

    c = '2';

	n = _isdigit(c);
    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(n + '0');
    _putchar('\n');
	
    c = 'a';
	n = _isdigit(c);
	_putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(n + '0');
    _putchar('\n');

    return (0);
}
