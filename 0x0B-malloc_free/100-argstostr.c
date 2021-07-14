#include "holberton.h"

/**
 *argstostr - concatenates all the arguments of a program
 *@ac: lenth of args
 *@av: array pointer to args
 *Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
int i;
int j;
int n;
int k;
int e;
char *p;
n = 0;
k = 0;
e = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
k++;
e++;
}
p = (char *)malloc(sizeof(char) * (k + e - 1));
if (p == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
p[n] = av[i][j];
n++;
}
p[n] = '\n';
n++;
}
return (p);
}
