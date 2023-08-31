#include "main.h"

/**
 * binary_to_uint - converst binary to unsigned int
 * @b: pointer to char 0 and 1
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;

	if (!b)
	{
		return (0);
	}

	for (x = 0; x < b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		result = 2 * result + (b[x] - '0');
	}
	return (result);
}
