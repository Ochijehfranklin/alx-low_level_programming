#include "search_algos.h"
/**
 * binary_search - Function to search for binary algo
 * @array: pointer to firest element
 * @size: number of elements
 * @value: value to search for
 * Return: index whwere value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t i;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
