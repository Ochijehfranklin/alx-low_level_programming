#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: points to a number to change
 * @index: index of bit I want cleared
 * Return: -1 for failure and 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
