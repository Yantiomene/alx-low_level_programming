#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid previously allocated
 * @grid: the grid in question
 * @height: number of line
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
