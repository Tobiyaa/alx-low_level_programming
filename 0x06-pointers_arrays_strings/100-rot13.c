#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * return: encoded string
 */

char *rot13(char *s)
{

int a[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	     'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
	     'w', 'x', 'y', 'z'};
int b[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
	     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	     'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	     'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
	     'j', 'k', 'l', 'm'};

int i, j;

for (j = 0; s[j] != '\0'; j++) /*loop through string*/
{
i = 0;
while (a[i] != '\0' && s[j] != a[i]) /*loop through rot13 arr*/
i++;

if (s[j] == a[i]) /*if alpha matches, set to index in b arr*/
	s[j] = b[i];
}

return (s);
}
