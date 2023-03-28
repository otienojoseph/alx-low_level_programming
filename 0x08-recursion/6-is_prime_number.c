#include "main.h"

/**
 * prime - evaluate from 1 to n
 * @a: same number as n
 * @b: iterates from 1 to n
 * Return: 1 on success, -1 on error
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: param
 * Return: 1 on success, -1 on error
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
