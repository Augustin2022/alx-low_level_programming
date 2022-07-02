#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: Print all sigle digit of base 10
 * by a new line
 * Return: return always 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
		putchar('\n');
	return (0);
}
