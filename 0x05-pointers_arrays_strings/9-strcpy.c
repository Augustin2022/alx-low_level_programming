#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: string parameter
 * @src: string parameter
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *t = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
	}
	*dest = '\0';
	return (t);
}
