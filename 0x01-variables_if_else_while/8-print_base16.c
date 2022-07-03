#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of base 16
 *
 * Description: Print all the number of base 16 in lowcase followd
 * by a new line
 * Return: return always 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}

	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
