#include "main.h"
<<<<<<< HEAD

/**
 * print_alphabet - entry point
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char C = 'a';

	while (C <= 'z')
	{
		_putchar(C);
		c++;
	}
	
	_putchar('\n');
=======
/**
 * print_alphabet - print alphabet
*/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	_putchar (alpha);
	_putchar ('\n');

>>>>>>> 176ece527ed9f69abc27ea2186b722d2c159f6a4
}
