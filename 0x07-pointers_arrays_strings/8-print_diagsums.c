#include "main.h"

/**
 * print_diagsums - This function prints diagonal sums
 *
 * @a: This points to the first element in the 2D array
 *
 * @size: The size of the square
 */

void print_diagsums(int *a, int size)
{
	int x, diag1 = 0, diag2 = 0;

	for (x = 0; x < size; x++)
	{
		diag1 += a[x * size + x];
		diag2 += a[x * size + (size - 1 - x)];
	}

	printf("%d, %d\n", diag1, diag2);
}
