#include "main.h"

/**
 * _strncat -> a function that concatenates two strings
 * @dest: string parameter
 * src: string parameter
 * @n: integer
 *
 * Return : string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat (*dest, *src, n);
	return (dest);

}
