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

	while (s[n] != '\0')
		n = n + 1;

	for (i = 0; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
