#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array.
 * @grid: double pointer matrix.
 * @height: matrix rows.
 * Return: Memory.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i])
	}
	free(grid);
}
