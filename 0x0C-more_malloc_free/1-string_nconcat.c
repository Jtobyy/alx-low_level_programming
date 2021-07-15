#include "holberton.h"

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes of s2 to add
 *Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i;
int j;
int k;
int m;
int t;
unsigned int q;
char *p;
i = 0;
m = 0;
q = 0;
if (s1 == NULL)
{
s1 = malloc(sizeof *s1 * 1);
s1[0] = '\0';
}
if (s2 == NULL)
{
s2 = malloc(sizeof *s2 * 1);
s2[0] = '\0';
}  
while (s1[i] != '\0')
i++;
while (s2[q] != '\0')
q++;
if (n > q)
n = q;
t = i + n + 1;
p = malloc(sizeof *p * t);
if (p == NULL)
return (NULL);
for (j = 0; j < i; j++) 
{
p[j] = s1[j];
}
for (k = j; k < t - 1; k++)
{
p[k] = s2[m];
m++;
}
p[k] = '\0';
return (p);
}
