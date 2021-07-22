#include "holberton.h"

/**
 *_strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as parameter
 *@str: string
 *Return: pointer to array
 */
char *_strdup(char *str)
{
unsigned int i;
unsigned int j;
char *p;
j = 0;
if (str == NULL)
return (NULL);
while (str[j] != 0)
j++;
p = malloc(sizeof(char) * (j + 1));
if (p == NULL)
return (NULL);
for (i = 0; i < (j + 1); i++)
{
p[i] = str[i];
}
return (p);
}
