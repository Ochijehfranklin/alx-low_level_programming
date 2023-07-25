#include "main.h"

/**
 * _strcpy - this function copies a string, pointing the source
 *
 * @dest: destination
 *
 * @src:whwere to copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
