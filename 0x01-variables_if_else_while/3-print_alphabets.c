#include <stdlib.h>
#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: Print alphabet in lowcase and uppercase followd
 * by a new line
 * Return: return always 0
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}

	for (x = 65; x <= 90; x++)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
