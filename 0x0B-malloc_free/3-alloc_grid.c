#include "main.h"
/**
 * alloc_grid - make a 2d array of integers initalized with 0.
 * @width: the grid width.
 * @height: the grid height.
 *
 * Return: pointer to the 2d array.
 * if width or height is not positive return null.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}
