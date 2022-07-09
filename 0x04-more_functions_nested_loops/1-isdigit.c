#include "main.h"
/**
 * _isdigit -  a function that checks for a digit (0 through 9).
 * @c: integer to be check
 * Return: 1 when it is good an 0 when it is bad
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <=  57))
{
return (1);
}
else
{
return (0);
}
}
