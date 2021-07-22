#include "holberton.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: string
 *Return: string's length
 */
int _strlen_recursion(char *s)
{
char *p;
if (s[0] == '\0')
{
return (0);
}
p = &(*(s + 1));
return (1 + _strlen_recursion(p));
}
