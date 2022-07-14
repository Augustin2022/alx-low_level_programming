#include "main.h"

/**
 * _strncpy -> a function that copies a string.
 * @dest: string parameter
 * @src: string parameter
 * @n: integer
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);

}
