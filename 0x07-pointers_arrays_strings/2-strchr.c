#include "main.h"

/**
 * _strchr - function to search for a string and returnwhere it is found
 *
 * @s: the sring to be searched for character c
 *
 * @c: the string to search for in pointer s
 *
 * Return: the first place the character c is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}
	return (NULL);
}
