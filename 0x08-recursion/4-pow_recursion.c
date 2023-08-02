#include "main.h"

/**
 * _pow_recursion - This prints the power of x
 *
 * @x: integer that would be raised
 *
 * @y: integer that be raising factor
 *
 * Return: An integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
