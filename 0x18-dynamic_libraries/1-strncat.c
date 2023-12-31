#include "main.h"


/**
 * _strncat - this function concatenates two strings
 *
 * @dest: destination for the copy
 *
 * @src: the integer to copy to
 *
 * @n: input value
 *
 * Return: concatenated dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

