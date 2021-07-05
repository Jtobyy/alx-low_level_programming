#include "holberton.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to memory area
 *@b: constant byte b
 *@n: number of bytes
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
