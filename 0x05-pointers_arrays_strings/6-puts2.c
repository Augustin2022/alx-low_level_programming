#include "main.h"
#include <string.h>

/**
 * puts2 -  prints every other character of a string, starting with
 * the first character,
 * @str: parameter string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		str = str + 2;
	}
putchar('\n');
}
