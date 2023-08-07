#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid previously
  * created by your alloc_grid function.
  * @height: specifies the number of rows in the grid.
  * @grid: is a pointer to the 2D array of integers
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
