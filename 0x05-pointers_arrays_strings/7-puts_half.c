#include "main.h"
#include <string.h>

/**
 * puts_half - The function should print the second half of the string
 * @str: parameter string
 */

void puts_half(char *str)
{
	int lon, i;

	lon = strlen(str);
	for (i = lon / 2; i < lon; i++)
		_putchar(str[i]);
	_putchar('\n');
}
