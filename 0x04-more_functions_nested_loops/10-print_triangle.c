#include "main.h"

/**
 * print_triangle - Prints a triangle with #
 *
 * @size: Determines triangle size
 */

void print_triangle(int size)

{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
