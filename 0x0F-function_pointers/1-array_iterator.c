#include "function_pointers.h"

/**
 * array_iterator - This iterates through an aray and prints teh elements
 * @array: The array to print
 * @size: size of array to be copied
 * @action: function pointer to address of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
