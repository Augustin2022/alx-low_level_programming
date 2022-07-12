#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: parameter string
 * @n: parameter integer
 */

void print_array(int *a, int n)
{
int i;

	for (i = 0; i < 0; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(",");
		printf(" ");
		}
	}
	printf("\n");
}
