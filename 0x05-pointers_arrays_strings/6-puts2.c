#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string to print
 */

void puts2(char *str)
{
	int longx = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longx++;
	}
	t = longx - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
