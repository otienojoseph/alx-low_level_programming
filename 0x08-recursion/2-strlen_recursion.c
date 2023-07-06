/**
  * _strlen_recursion - Return the length of a string
  * @s: String argument
  *Return: Length of string
  */

int _strlen_recursion(char *s)
{
	/* base case */ 
	if (*s == '\0')
	{
		return (0);
	}
	/* call function with the value of the next pointer */
	return 1 + _strlen_recursion(s + 1);
}
