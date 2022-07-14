#include "main.h"

/**
 * *_strcat -> a function that concatenates two strings
 * @dest: string parameter
 * @src: string parameter
 *
 * Return: return string
 */

char *_strcat(char *dest, char *src)
{
	int i, l1;

	l1 = 0;

	while (dest[l1])
		l1++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[l1] = src[i];
		l1 = l1 + 1;
	}
	dest[l1] = '\n';
	return (dest);

}
