/**
 * _strlen_recurtion - returns the length of string.
 * @s: pointr to string.
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
return (1 + _strlen_recursion(s + 1));
	}
else
	{
return (0);
	}

}


