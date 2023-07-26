#include "main.h"

/**
 * reverse_array - This function reverses an array
 *
 * @a: array to reverse
 *
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
