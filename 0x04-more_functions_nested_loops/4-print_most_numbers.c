#include "main.h"
/**
 * print_most_numbers -  a function that prints the numbers,
 * from 0 to 9, followed by a new line.Do not print 2 and 4
 */

void print_most_numbers(void)
{

int i;
for (i = 0; i <= 9; i++)
{
	if (i != 4 || != 9)
	{
	_putchar(i + '0');
	}
}
	_putchar('\n');
}
