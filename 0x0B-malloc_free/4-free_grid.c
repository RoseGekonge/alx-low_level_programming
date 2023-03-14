#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - for 2d arrays
 * @grid: variable
 * @height: variable
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
