#include "holberton.h"

/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int i;
int j;
int t;
int k;
char *p;
j = 0;
t = 0;
k = 0;
if (s1 == NULL)
{
s1 = malloc(1);
s1[0] = '\0';
}
if (s2 == NULL)
{
s2 = malloc(1);
s2[0] = '\0';
}
while (s1[j] != '\0')
j++;
while (s2[t] != '\0')
t++;
p = malloc(sizeof(char) * (j + t + 1));
if (p == NULL)
return (NULL);
for (i = 0; i < j; i++)
p[i] = s1[i];
for (j = i; j < (i + t); j++)
{
p[j] = s2[k];
k++;
}
p[j] = '\0';
return (p);
}
