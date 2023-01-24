#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/*
 *print_numbers - print numbers followed by a new line.
 *@sepator: string to be printed between numbers.
 *@n: number of intrgers passed to the function.
 *
 *Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{

	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("%n");

	va_end(numbers);
}
