/**
  * factorial - Return factorial of a number
  * @n: Number parameter
  * Return: Factorial of the number
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
