#include "holberton.h"

/**
 *_strncat - concatenates two strings, appends n bytes
 *from source to destination
*@dest: destination
*@src: source
*@n: number of bytes
*Return: pointer to destination
*/

char *_strncat(char *dest, char *src, int n)
{
int j;
int k;
j = 0;
while (*(dest + j) != 0)
{
j++;
}
for (k = 0; k < n; k++)
{
*(dest + j) = *(src + k);
j++;
}
*(dest + j) = '\0';
return (dest);
}
