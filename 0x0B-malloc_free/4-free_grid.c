#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the array created in project alloc grid
 * @grid: 2D array
 * @height: of array
 * Return: Void
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
