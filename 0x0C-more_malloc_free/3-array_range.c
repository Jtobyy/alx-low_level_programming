#include "holberton.h"

/**
 *array_range - creates an array of ints
 *@min: mininum value
 *@max: maximum value
 *Return: pointer to harry
 */

int *array_range(int min, int max)
{
int *p;
int l;
int i;
if (min > max)
return (NULL);
l = (max - min) + 1;
p = malloc(sizeof(*p) * l);
if (p == NULL)
return (NULL);
for (i = 0; i < l; i++)
p[i] = min + i;
return (p);
}
