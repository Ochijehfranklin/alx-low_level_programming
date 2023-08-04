#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 *
 * @s: starting adress to be filled
 *
 * @b: the required value
 *
 * @n: number of bytes i want to be changed
 *
 * Return: new array with new vales based on n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
