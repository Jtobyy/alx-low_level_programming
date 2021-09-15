#include "main.h"

/**
 *_strcat - concatenates two strings, appends source to destination
*@dest: destination
*@src: source
*Return: pointer to destination
*/

char *_strcat(char *dest, char *src)
{
int i;
int j;
int k;
i = 0;
j = 0;
while (*(src + i) != 0)
{
i++;
}
while (*(dest + j) != 0)
{
j++;
}
for (k = 0; k < i; k++)
{
*(dest + j) = *(src + k);
j++;
}
*(dest + j) = '\0';
return (dest);
}
