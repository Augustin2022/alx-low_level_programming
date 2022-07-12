#include "main.h"
#include <string.h>

/**
 * puts2 -  prints every other character of a string, starting with
 * the first character,
 * @str: parameter string
 */

void puts2(char *str)
{
	int lon, i;

	lon = strlen(str);
	for (i = 0; i < lon; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
