#include "holberton.h"

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of ints
 *@width: width of grid
 *@height: height of grid
 *Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
int i;
int j;
int **p;
if (width == 0 || height == 0)
return (NULL);
p = (int **)malloc(sizeof(int *) * height);
if (p == NULL)
return (NULL);
for (i = 0; i < height; i++)
p[i] = malloc(sizeof(int) * width);
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
