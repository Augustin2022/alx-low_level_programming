#include <stdlib.h>
#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: Print alphabet in lowcase in reverse followd
 * by a new line
 * Return: return always 0
 */
int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
