#include "main.h"
#include <string.h>

/**
 * puts_half - The function should print the second half of the string
 * @str: parameter string
 */

void puts_half(char *str)
{
	int lon, i, j;

	lon = strlen(str);
	if (lon % 2 == 0)
	{
	j = lon / 2;
	}
	else
	{
	j = lon / 2 + 1;
	}
	for (i = j; i < lon; i++)
		_putchar(str[i]);
	_putchar('\n');
}
