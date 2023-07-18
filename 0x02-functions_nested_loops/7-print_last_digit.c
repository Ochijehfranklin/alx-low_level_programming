#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @x: The integer to print its last digit
 *
 * Return:  The last digit
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
	_putchar('\n');
}
