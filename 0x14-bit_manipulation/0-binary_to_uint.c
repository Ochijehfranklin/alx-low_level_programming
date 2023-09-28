#include "main.h"

/**
 * binary_to_uint - to convert binary to unsigned int
 * @b: string that contains the binary
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)

{

	int x;
	unsigned int dex_val = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dex_val = 2 * dex_val + (b[x] - '0');
	}
	return (dex_val);

}
