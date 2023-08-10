#include "main.h"
/**
 * malloc_checked - This returns the address to the memory of an integer
 *
 * @b: Integer whose address is to be returned
 *
 * Return: Address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
