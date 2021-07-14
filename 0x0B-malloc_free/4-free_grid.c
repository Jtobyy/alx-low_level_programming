#include "holberton.h"

/**
 *free_grid - frees a 2D grid previously created by alloc_grid function.
 *@grid: pointer to grid
 *@height: height of grid
 *Retrun: void
 */
void free_grid(int **grid, int height)
{
int i;
free(grid);
for (i = 0; i < height; i++)
{
     for (j = 0; j < i; j++)
     free(p[i][j]);
   }
return;
}
