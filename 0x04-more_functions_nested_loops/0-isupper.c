#include "main.h"

/*
 * _isupper - a function that checks for uppercase character.
 * @c :integer to be check
 * Return : return 1 when it is good an 0 when it is bad
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
