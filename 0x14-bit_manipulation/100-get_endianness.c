#include "main.h"

/**
 * get_endianness - this checks if machine is big or small
 * Return: 0 for big or 1 for small
 */

int get_endianness(void)

{

	unsigned int x = 1;

	char *v = (char *) &x;

	return (*v);

}
