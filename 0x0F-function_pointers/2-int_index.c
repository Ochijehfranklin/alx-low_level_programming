#include "function_pointers.h"

/**
 * int_index - This searches for the index of an integer
 * @size: The size of the integer
 * @array: The array to search for a value
 * @cmp: function pointer to address of array where integer is
 * Return: Always success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
