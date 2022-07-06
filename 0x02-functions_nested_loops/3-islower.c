#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 * @c: The number to be checked
 *
 * Description: a function that checks for lowercase character.
 * followed by a new line.
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
