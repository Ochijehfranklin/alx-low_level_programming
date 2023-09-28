#include "main.h"

/**
 * flip_bits - this counts number of the bits to change
 * @n: first number
 * @m: the second number
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{

	int x, counts = 0;

	unsigned long int curr;

	unsigned long int exc = n ^ m;

	for (x = 63; x >= 0; x--)

	{

		curr = exc >> x;

		if (curr & 1)

			counts++;

	}

	return (counts);

}
