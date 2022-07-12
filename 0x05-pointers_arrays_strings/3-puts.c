#include "main.h"

/**
 * _puts -> a function that prints a string, followed by a new line,
 * @str: pointer of string
 */

void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str);
	str = str + 1;
}
-putchar('\n');
}
