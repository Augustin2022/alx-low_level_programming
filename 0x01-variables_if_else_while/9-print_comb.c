#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: Print numbers with space and comma followd
 * by a new line
 * Return: return always 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
		putchar('\n');
	return (0);
}
