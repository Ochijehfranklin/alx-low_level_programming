#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *
 * @c: character to check for
 *
 * Return: 1 if uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
