#include "main.h"

/**
 * str_concat - To concatenate strings
 *
 * @s1: first string
 *
 * @s2: string to concatenate to s1
 *
 * Return: A string of characters if s1 and s2 is not null
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0;
	char *retPtr;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}
	retPtr = (char *)malloc(sizeof(char) * (x + y + 1));
	if (retPtr == NULL)
	{
		return (NULL);
	}

	x = 0;
	while (s1[x] != '\0')
	{
		retPtr[x] = s2[y];
		x++, y++;
	}
	retPtr[x] = '\0';
	return (retPtr);
}

