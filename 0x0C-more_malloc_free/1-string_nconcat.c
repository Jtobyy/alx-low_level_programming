#include "holberton.h"

char *exfunc(char *p, char *, char *, unsigned int, unsigned int);
/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes of s2 to add
 *Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int t;
unsigned int q;
char *p;
i = 0;
q = 0;
if (s1 == NULL)
{
s1 = malloc(sizeof(*s1) * 1);
s1[0] = '\0';
}
if (s2 == NULL)
{
s2 = malloc(sizeof(*s2) * 1);
s2[0] = '\0';
}
while (s1[i] != '\0')
i++;
while (s2[q] != '\0')
q++;
if (n > q)
n = q;
t = i + n + 1;
p = malloc(sizeof(*p) * t);
if (p == NULL)
return (NULL);
p = exfunc(p, s1, s2, i, t);
return (p);
}

/**
 *exfunc - does the concatenation
 *@p: destination
 *@s1: string 1
 *@s2: string 2
 *@i: length of s1
 *@t: length of s1 + s2
 *Return: char *
 */
char *exfunc(char *p, char *s1, char *s2, unsigned int i, unsigned int t)
{
unsigned int m;
unsigned int k;
unsigned int j;
m = 0;
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
