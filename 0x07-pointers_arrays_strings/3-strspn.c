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
char p[1000];
p[0] = '\0';
j = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
  for (k = 0; *(accept + k) != '\0'; k++)
   {
      if (s[i] == accept[k])
	{
	for (m = 0; p[m] != 0; m++)
	  {
	    if (p[m] == accept[k])
	      continue;
	  }
	p[j] = accept[k];
	p[j + 1] = '\0';
	  j++;
	}
    }
  }
return (j);
}
