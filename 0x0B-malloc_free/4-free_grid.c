#include "main.h"
/**
 * free_grid - frees a grid from memory.
 * @grid: the grid.
 * @height: the height of the grid to be freed.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
