#include "main.h"

/**
 * print_sign - prints a sign based on number returned
 *
 * @n: An integr that determines what to print
 *
 * Return: 1, 0 or 1 if n is + , 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
