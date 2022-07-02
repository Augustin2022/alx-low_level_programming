#include <stdlib.h>
#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: Print alphabet in low except e and q
 * case followd by a new line
 * Return: return always 0
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x != 101 && x != 113)
		putchar(x);
	}
		putchar('\n');
	return (0);
}
