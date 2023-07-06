/**
  * _pow_recursion - Return x raised to power of y
  * @x: param x
  * @y: param y
  * Return: value of x raised to y
  */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y < 0)
	{
		return (-1);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}

	/* recursive case */
	return (x * _pow_recursion(x, y - 1));
}
