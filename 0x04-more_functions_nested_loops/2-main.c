#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int ans;
	
	ans = mul(98, 1024);

	if (ans < 100)
	{
		_putchar(((ans / 10) % 10) + '0');
		_putchar(ans % 10 + '0');
	}
	else
	{
		_putchar((ans / 100) + '0');
		_putchar(((ans / 10) % 10) + '0');
		_putchar(ans % 10 + '0');
	}

	_putchar('\n');
	return (0);
}
