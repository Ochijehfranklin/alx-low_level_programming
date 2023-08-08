#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 *
 * @size: memory block to allocate
 *
 * @c: char to assign
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
	free(array);
}
