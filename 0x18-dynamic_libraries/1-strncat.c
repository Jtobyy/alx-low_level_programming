#include "main.h"

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
int i;
int j;
int k;
j = 0;
i = 0;
while (*(dest + j) != 0)
j++;
while (*(src + i) != 0)
i++;
if (n > i)
n = i;
for (k = 0; k < n; k++)
{
*(dest + j) = *(src + k);
j++;
}
*(dest + j) = '\0';
return (dest);
}


