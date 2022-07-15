#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @x: string parameter
 * Return: String
 */

char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a, i;

	a = 0;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && (s[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
		i++;
		}
		a++;
	}
	return (x);
}
