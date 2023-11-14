#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: the string
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int longx = 0;

	while (*s != '\0')
	{
		longx++;
		s++;
	}

	return (longx);
}
