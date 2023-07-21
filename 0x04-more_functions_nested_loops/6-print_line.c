#include "main.h"

/**
 * print_line - This function prints a line
 *
 * @n: determines the number of lines to print
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

