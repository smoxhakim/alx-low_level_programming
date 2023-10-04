#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional
 * @grid: the ptr
 * @height: the height
 * Return: NULL or ptr
 * owned by: SmoxHakim
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
