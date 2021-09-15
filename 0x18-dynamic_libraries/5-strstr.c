#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: pointer to string
 *@needle: substring to find
 *Return: a pointer to the begining of th elocated substring
 *or NULL if no such byte is found.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int k;
int m;
char *p;
k = 0;
while (haystack[k] != '\0')
k++;
while (needle[k] != '\0')
m++;
for (i = 0; i <= k; i++)
{
if (haystack[i] == needle[0])
{
p = &(haystack[i]);
for (j = 0; j <= m; j++)
{
if (haystack[i + j] != needle[j])
  {
break;
  }
if (j == m)
return (p);
}
}
}
return (NULL);
}
