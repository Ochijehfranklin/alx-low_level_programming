#include "main.h"

/**
 * _strpbrk - To detect the first character that matches the char accept
 *
 * @s: pointer to the string to search
 *
 * @accept: pointer for the strings to be matched
 *
 * Return: pointer to the byte matches or NULL if it is not found
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
