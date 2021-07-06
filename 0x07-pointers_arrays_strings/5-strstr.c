#include "holberton.h"

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
char *p = NULL;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
p = &(haystack[i]);
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
return (p);
}
}
}
return ("0");
}
