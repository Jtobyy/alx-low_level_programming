#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: pointer to string s
 *@accept: prefix substring
 *Return: number of bytes in initial segment of s which consit only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
unsigned int k;
unsigned int m;
m = 0;
j = 0;
while (accept[m] != 0)
m++;
for (i = 0; *(s + i) != '\0'; i++)
{
  for (k = 0; *(accept + k) != '\0'; k++)
    {
      if (s[i] == accept[k])
	  j++;
    }
  if (j == m)
    return (j);
}
return (j);
}
