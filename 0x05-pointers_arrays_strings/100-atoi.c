#include "main.h"

/**
 * _atoi - converts a string to integer
 *
 * @s: string to convert
 *
 * Return: the string converted to integer
 */

int _atoi(char *s)
{
	int w, x, y, len, z, digit;

	w = 0;
	x = 0;
	y = 0;
	len = 0;
	z = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (w < len && z == 0)
	{
		if (s[w] == '-')
			++x;

		if (s[w] >= '0' && s[w] <= '9')
		{
			digit = s[w] - '0';
			if (x % 2)
				digit = -digit;
			y = y * 10 + digit;
			z = 1;
			if (s[w + 1] < '0' || s[w + 1] > '9')
				break;
			z = 0;
		}
		w++;
	}

	if (z == 0)
		return (0);

	return (y);
}


