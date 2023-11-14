#include "main.h"

/**
 * _islower - prints 1 if c is lowercase, else 0
 * @c: This is an ASCII code
 * Return: 1 for lowercase character, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
