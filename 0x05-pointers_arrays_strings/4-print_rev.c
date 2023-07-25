#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: the string to reverse
 */

void print_rev(char *s)
{
	int longx = 0;
	int o;

	while (*s != '\0')
	{
		longx++;
		s++;
	}
	s--;
	for (o = longx; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
