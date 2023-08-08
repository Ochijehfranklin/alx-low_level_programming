#include "main.h"

/**
 * _strdup -  points to copy of a string
 *
 * @str: string to copy to new space in memory
 *
 * Return: char
 */

char *_strdup(char *str)
{
	int x, y;
	char *newString;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	newString = (char *)malloc(sizeof(char) * (x + 1));

	if (newString == NULL)
	{
		return (NULL);
	}

	for (y = 0; str[y]; y++)
	{
		newString[y] = str[y];
	}
	return (newString);
}
