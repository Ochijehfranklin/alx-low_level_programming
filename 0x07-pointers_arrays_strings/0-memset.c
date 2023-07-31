#include "main.h"

/**
 * _memset - This sets the memore of pointer to n bytes
 *
 * @s: pointer that starts the address of memeory area
 *
 * @b: The constant byte tha I need to be set
 *
 * @n: The number of bytes that would be set to value b
 *
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
