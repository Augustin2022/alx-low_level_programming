#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: lengh of the line
 */

void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 0 ; i <= n; i++)
{
putchar (92);
putchar ('\n');
for (j = 0 ; j <= i; j++)
{
putchar (' ');
}
}
putchar ('\n');
}
else
{
putchar ('\n');
}
}
