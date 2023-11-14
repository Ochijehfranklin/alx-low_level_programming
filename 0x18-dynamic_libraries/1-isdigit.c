#include "main.h"

/**
 * _isdigit - Checks if a char is a digit
 *
 * @c: The character that detemrins if it is a digit
 * Return: 1 if it is a digit and 0 if else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
