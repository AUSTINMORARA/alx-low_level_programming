#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D array.
 * @width: the columns of the array.
 * @height: the rows of the array.
 * Return: A double pointer.
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j, k, l;

	if (width <= 0 || height <= 0)
		return (0);
	a = malloc(height * sizeof(int *));
	if (a == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == 0)
		{
			l = 1;
			break;
		}
		j = 0;
		while(j < width)
		{
			a[i][j] = 0;
			j++;
		}
	}
	if (l == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(a[k]);
		}
		free(a);
	}
	return (a);
}
