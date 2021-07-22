#include "holberton.h"

/**
 *strtow - splits a string into words
 *@str: string
 *Return: pointer to an array of string
 */
char **strtow(char *str)
{
int i;
int j;
int n;
int k;
int c;
char *p;
char **d;
j = 0;
k = 0;
n = 0;
c = 0;
if (str == NULL || str == "")
return (NULL);
for (i = 0; str[i] != '\0'; i++)
k++
p = (char *)malloc(sizeof(char) * (k));
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
i = n;
while(str[n] != ' ')
{
p[j] = str[n];
n++;
j++;
}
p[j] = ' ';
j++
}
p[j] = '\0';
}
 for (i = 0; p[i] != '\0'; i++)
   {
     if(p[i] == ' ')
       
       continue;
     c++;
   }
return (p);
}

