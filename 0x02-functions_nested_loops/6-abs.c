#include "main.h"

/**
 * _abs - Returns an absolute value
 *
 * @r: The integer to convert to absolute value
 *
 * Return: the absolute value
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
	_putchar('\n');
}
