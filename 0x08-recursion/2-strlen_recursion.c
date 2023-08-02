#include "main.h"

/**
 * _strlen_recursion - prints length of string
 *
 * @s: string to count
 *
 * Return: Length of strng
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
