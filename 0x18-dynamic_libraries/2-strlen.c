#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: pointer
 *Return: length
 */
int _strlen(char *s)
{
int l = 0;
char y = *(s + 0);
while (y != 0)
{
l++;
y = *(s + l);
}
return (l);
}
