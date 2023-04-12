#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Function that frees 2d array
 * @grid: variable 2d grid
 * @height: variable of height dimension of grid
 * Return: no return
 *
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
