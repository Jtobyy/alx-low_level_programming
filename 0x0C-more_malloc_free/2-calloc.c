#include "holberton.h"

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: size of array
 *@size: number of bytes of each element
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
return (p);
}
