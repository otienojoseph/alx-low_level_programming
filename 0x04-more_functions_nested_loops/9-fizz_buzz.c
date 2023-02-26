#include <stdio.h>

/**
 * main - Print Fizz Buzz or FizzBuzz for multiples of 3, 5, and (3,5)
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (a % 3 == 0)
		{
			printf("Buzz\n");
		}
		else if (a % 5 == 0)
		{
			printf("Fizz\n");
		}
		else
		{
			printf("%d\n", a);
		}
	}

	return (0);
}
