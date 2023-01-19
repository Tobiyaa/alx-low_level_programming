#include "main.h"

/**
 * strlen_recursion - returns the length of a string.
<<<<<<< HEAD
 * @s: pointer to string. 
 *
=======
 * @s: pointr to string. 
 * 
>>>>>>> 146632dbc4f8fce11867db2112b17cfb156d5567
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


=======
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
>>>>>>> cfafe8cd6ccd26f4dfeacb796d36f5439c494886
