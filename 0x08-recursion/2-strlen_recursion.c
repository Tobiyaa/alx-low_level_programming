<<<<<<< HEAD
/**
 * _strlen_recurtion - returns the length of string.
 * @s: pointr to string.
=======
#include "main.h"

/**
 * strlen_recursion - returns the length of a string.
 * @s: string to calculate the length of
>>>>>>> cfafe8cd6ccd26f4dfeacb796d36f5439c494886
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
<<<<<<< HEAD
	if (*s)
	{
return (1 + _strlen_recursion(s + 1));
	}
else
	{
return (0);
	}

}


=======
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
>>>>>>> cfafe8cd6ccd26f4dfeacb796d36f5439c494886
