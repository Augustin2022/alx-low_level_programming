#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet, in lowercase
 * Description:  a function that prints the alphabet, in lowercase,
 *  followed by a new line.
*/
void printlphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
