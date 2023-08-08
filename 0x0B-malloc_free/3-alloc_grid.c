#include "main.h"

/**
 * alloc_grid - pointer to two dimensional array
 *
 * @width: the width of the array
 *
 * @height: The height of the array
 *
 * Return: A pointer the the two dimesnsional array
 */

int **alloc_grid(int width, int height)
{
	int **ptr2;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr2 = malloc(sizeof(int *) * height);

	if (ptr2 == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		ptr2[x] = malloc(sizeof(int) * width);
		if (ptr2[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptr2[x]);
			free(ptr2);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr2[x][y] = 0;
	}
	return (ptr2);
}

