#include "holberton.h"

unsigned int find_h(unsigned int *arr);

/**
 *_strspn - gets the length of a prefix substring
 *@s: pointer to string s
 *@accept: prefix substring
 *Return: number of bytes in initial segment
 * of s which consit only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int k;
unsigned int p[30];
unsigned int m;
unsigned int b;
unsigned int j;
m = 0;
for (i = 0; i < 30; i++)
p[i] = 0;
while (*(s + j) != 0)
j++;
for (i = 0; i < (j + 1); i++)
{
for (k = 0; *(s + k) != '\0'; k++)
{
if (accept[i] == s[k])
{
p[m] = (k + 1);
m++;
break;
}
}
}
b = find_h(p);
return (b);
}

/**
 *find_h - looks for the highest integer in an
 * array using bubble sort technique
 *@arr: array
 *Return: highest integer
 */
unsigned int find_h(unsigned int *arr)
{
int i;
unsigned int tmp;
for (i = 0; i < 30; i++)
{
if (arr[i] > arr[i + 1])
{
tmp = arr[i];
arr[i] = arr[i + 1];
arr[i + 1] = tmp;
}
else
continue;
}
return (arr[29]);
}
