#include "main.h"

/**
 * reverse_array -> a function that reverses the content of
 * an array of integers.
 * @a: pointer
 * @n: integer
 * */

void reverse_array(int *a, int n)
{
	int imp, index;
	for (index = n - 1; index > n / 2; index--)
		{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index} = tmp;
		}

}
