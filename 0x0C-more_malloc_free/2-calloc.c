#include "holberton.h"

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: size of array
 *@size: number of bytes of each element
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc((size * nmemb) + size);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
{
*(p + i) = 0;
}
return ((void *)p);
}
