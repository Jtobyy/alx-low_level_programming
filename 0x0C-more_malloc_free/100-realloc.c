#include "holberton.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated with
 *a call to malloc(old_size)
 *@old_size: size, in bytes of the allocated space for ptr
 *@new_size: new size, in bytes of the new memory block
 *Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *p;
char *q;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
p = malloc(new_size);
return ((void *) p);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
p = malloc(sizeof(*p) * new_size);
if (p == NULL)
return (NULL);
q = (char *)ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
p[i] = q[i];
}
else
{
for (i = 0; i < old_size; i++)
p[i] = q[i];
}
free(ptr);
return ((void *)p);
}
