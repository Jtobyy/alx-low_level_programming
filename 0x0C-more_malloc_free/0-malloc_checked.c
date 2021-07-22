#include "holberton.h"

/**
 *malloc_checked - Allocates memory using malloc
 *@b: no of elements
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
