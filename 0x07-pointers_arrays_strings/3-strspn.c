#include "main.h"

/**
 * _strspn - This function returns number of matching charcaters
 *
 * @s: pointer to the string to search
 *
 * @accept: pointer of the string to search and count in s
 *
 * Return: The number of similar char in both
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int number = 0;

	int seen;

	int i;

	while (*s)
	{
		seen = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				seen = 1;
				break;
			}
		}

		if (seen)
		{
			number++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (number);
}
