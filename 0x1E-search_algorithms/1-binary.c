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
	size_t left = 0;
	size_t right = size - 1;
	size_t i = 0;
	size_t middle = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;

			/*Print the array being searched*/
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d ", array[i]);
			}
			printf("%d\n", array[i]);

			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}

		return (-1);
}

