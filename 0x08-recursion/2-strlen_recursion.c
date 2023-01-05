#include "main.h"

/**
 * strlen_recursion - returns the length of a string.
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


=======
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
>>>>>>> cfafe8cd6ccd26f4dfeacb796d36f5439c494886
