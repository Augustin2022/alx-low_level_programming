#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: lengh of the line
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
putchar ('\n');
}
else
{
	for (i = 1 ; i <= n; i++)
	{
		putchar (92);
		if (i != n)
		{
			putchar ('\n');
		}
		for (j = 1 ; j <= i; j++)
		{
			putchar (' ');
		}
	}
putchar ('\n');
}
}
