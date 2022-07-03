#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: Print numbers of base 10 starting by 0
 * followd by a new line
 * Return: return always 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
