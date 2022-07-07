#include "main.h"

/**
 * _abs -  a function that computes the absolute value of an integer.
 * @n: The number to be checked
 *
 * Description: a function that computes the absolute value of an integer.
 * Return: Returns n and prints + if n is greater than zero returns 0
 * and prints 0 if n is zero Returns -n and prints - if n is less than zero
 */
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else
		if (n == 0)
		{
		return (0);
		}
		else
		{
		return (-n);
		}
}
