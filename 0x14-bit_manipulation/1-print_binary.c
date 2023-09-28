#include "main.h"

/**
 * print_binary - to print binaof decimal number
 * @n: the number to print it's binary
 */

void print_binary(unsigned long int n)
{
	int x, counts = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;
		if (current & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
			_putchar('0');
	}
	if (!counts)
		_putchar('0');
}
