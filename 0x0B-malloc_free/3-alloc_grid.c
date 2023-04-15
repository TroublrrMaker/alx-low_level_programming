#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of int
 * @width: of the array
 * @height: of the array
 * Return: A pointer
 */

int **alloc_grid(int width, int height)
{
int **rect;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);


rect = malloc(sizeof(int) * height);

if (rect == NULL)
return (NULL);

for (i = 0; i < width; i++)
{
rect[i] = malloc(sizeof(int) * height);
if (rect[i] == NULL)
{
for (; i >= 0; --i)
free(rect[i]);
free(rect);
return (NULL);
}
}

for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
rect[i][j] = 0;
}

return (rect);
}
