#include "holberton.h"

/**
 *_strchr - locates a character in a string
 *@s: pointer to string s
 *@c: character to locate
 *Return: char
 */
char *_strchr(char *s, char c)
{
unsigned int i;
char *p;
for (i = 0; *(s + i) != '\0'; i++)
{
if (*(s + i) == c)
{
p = &(*(s + i));
return (p);
}
}
return (NULL);
}
