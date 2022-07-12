#include "main.h"
#include <string.h>

/**
 * rev_string -  a function that reverses a string
 * @s: string parameter
 */

void rev_string(char *s)
{
	int i, n;

	n = 0;

	for (i = 9; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
