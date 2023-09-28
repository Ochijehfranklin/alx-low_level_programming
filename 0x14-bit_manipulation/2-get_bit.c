#include "main.h"

/**
 * get_bit - return value of bit at a recise index of decimal number
 * @n: the number to search
 * @index: the index of the bit
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)

{

	int val;

	if (index > 63)

		return (-1);

	val = (n >> index) & 1;

	return (val);

}
