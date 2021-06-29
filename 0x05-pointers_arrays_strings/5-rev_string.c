#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - Reverse a string
 *@s: string
 *Return: void
 */
void rev_string(char *s)
{
int i;
int j;
int k;
char tmp;
char rev[255];
j = 0;
k = 0;
while (*(s + j) != 0)
{
j++;
}
i = j - 1;
while (i >= 0)
{
tmp = *(s + i);
i--;
rev[k] = tmp;
k++;
}
rev[k] = '\0';
for (i = 0; i < j; i++)
{
*(s + i) = rev[i];
}
s = rev;
return;
}
