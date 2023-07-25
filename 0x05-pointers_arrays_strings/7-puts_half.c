#include "main.h"

/**
 * puts_half -prints half of a string
 *
 * @str: the string to work with
 */

void puts_half(char *str)
{
	int x, y, longz;

	longz = 0;

	for (x = 0; str[x] != '\0'; x++)
		longz++;

	y = (longz / 2);

	if ((longz % 2) == 1)
		y = ((longz + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
