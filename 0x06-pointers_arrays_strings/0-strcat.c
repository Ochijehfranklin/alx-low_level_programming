#include "main.h"

/**
 * _strcat - This function copies a sting to another
 *
 * @dest: This would hold the other value
 *
 * @src: This is the string that would copied to another
 *
 * Return: a character
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

