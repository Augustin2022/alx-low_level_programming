#include "main.h"

/**
 * _strlen -> function that returns the length of a string.
 * @s: string adresse parameter
 * Return: the length of a string
 */
int _strlen(char *s)
{
int n = 0;
while (*s != '\0')
{
	n = n + 1;
	s = s + 1;
}
return (n);
}

