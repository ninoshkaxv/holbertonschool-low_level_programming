#include <stdlib.h>
#include "main.h"

/**
 * free_grid - it frees the memory allocated for the grid
 * created by alloc_grid()
 * @grid: the grid to free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
