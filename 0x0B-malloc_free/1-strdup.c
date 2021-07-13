#include "holberton.h"

/**
 *_strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as parameter
 *@str: size of array
 *Return: pointer to arry
 */
char *_strdup(char *str)
{
unsigned int i;
char *p;
p = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
p[i] = c;
}
if (p == 0)
return (NULL);
if (p)
return (p);
else
return (NULL);
}
