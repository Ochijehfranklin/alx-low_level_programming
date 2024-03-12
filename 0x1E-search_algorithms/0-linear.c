#include "search_algos.h"

/**
 * linear_search - Function to search for number
 * @size: Size of array
 * @array: Array that holds values
 * @value: number to search for in array
 * Return: Value found at desired array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("value checked array{%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
