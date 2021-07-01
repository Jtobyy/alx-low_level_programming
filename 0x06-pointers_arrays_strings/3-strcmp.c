#include "holberton.h"

/**
 *_strcmp - compares two strings
*@s1: string 1
*@s2: string 2
*Return: an int
*/

int _strcmp(char *s1, char *s2)
{
int i;
int j;
i = 0;
while (*(s1 + i) != 0)
{
i++;
}
for (j = 0; j < i; j++)
{
if (*(s1 + j) < *(s2 + j))
return (-15);
else if (*(s1 + j) == *(s2 + j))
continue;
else if (*(s1 + j) > *(s2 + j))
return (15);
}
return (0);
}
