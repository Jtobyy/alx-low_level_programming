#include "holberton.h"

/**
 *_strncpy - copys n bytes of src to dest
*@dest: destination
*@src: source
*@n: number of bytes
*Return: pointer to destination
*/

char *_strncpy(char *dest, char *src, int n)
{
int j;
int k;
j = 0;
while (*(src + j) != 0)
{
j++;
}
for (k = 0; k < n; k++)
{
*(dest + k) = *(src + k);
}
if (n <= j)
return (dest);
else
{
while (j < n)
{
*(dest + j) = '\0';
j++;
}
}
return (dest);
}
