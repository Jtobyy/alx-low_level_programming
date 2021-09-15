#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: pointer to destination
 *@src: source to copy from
 *@n: number of bytes
 *Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
