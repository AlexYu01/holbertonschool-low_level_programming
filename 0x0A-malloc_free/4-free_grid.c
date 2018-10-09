#include <stdlib.h>

/**
  * free_grid - Frees a 2 dimensional grid/array.
  * @grid: Pointer to a 2 dimensional array.
  * @height: Hegiht of the 2 dimensional array.
  *
  * Return: void.
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid && height)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
