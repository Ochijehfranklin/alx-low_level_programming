#include "main.h"

/**
 * _memcpy - To copy te numbber of character from src to dest
 *
 * @n: bytes of src to be copied to dest
 *
 * @src: The pointer containingchar to copy to dest
 *
 * @dest: The pointer that would hold the character in src after copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
