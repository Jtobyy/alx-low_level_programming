#include "holberton.h"

/**
 * _atoi -  function that convert a string to an integer.
 *@s: string
 *Return: integer
 */
int _atoi(char *s)
{
int i;
int j;
int k;
int tmp;
i = 0;
while (*(s + i) != 0)
{
i++;
}
for (j = 0; j < i; j++)
{
if (*(s + j) >= 0 && *(s + j) <= 9)
  {
    for (k = j; k < i; k++)
      {
	tmp = *(s + k);
      }
  }
break;
else
continue;
}
return (0);
}
