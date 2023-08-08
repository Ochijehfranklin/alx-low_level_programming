#include "main.h"

/**
 * free_grid - frees the 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: this fees memory of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
