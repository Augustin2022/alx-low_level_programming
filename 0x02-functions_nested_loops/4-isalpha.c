#include "main.h"

/**
 * _isalpha -  a function that checks for lowercase character.
 * @c: The number to be checked
 *
 * Description: a function that checks for lowercase character.
 * followed by a new line.
 * Return: Returns 1 if c is lowercase or upercase, Returns 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		
		return (1);
	else
		return (0);
}
