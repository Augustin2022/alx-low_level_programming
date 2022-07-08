#include "main.h"
/**
 * _isupper - Function that checks for uppercase character
 * @c: integer to be check
 *
 * Description: Write a function that checks for uppercase character
 *
 * Return: 1 when it is good an 0 when it is bad
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
