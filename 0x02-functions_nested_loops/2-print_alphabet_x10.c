#include "main.h"

/**
 * print_alphabet_x10 -  a function that prints the alphabet, in lowercase
 *
 * Description:  a function that prints the alphabet, in lowercase,
 * followed by a new line.
*/
void print_alphabet_x10(void)
{
int j;
int i;

for (j = 1; j <= 10; j++)
{
	for (i = 97; i <= 122; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
}
}

