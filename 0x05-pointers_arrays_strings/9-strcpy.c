#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src including terminating
 *null byte(\0), to the buffer pointed to by dest.
 *@dest: pointer to an array of ints
 *@src: no of elments to print
 *Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
int i;
int tmp;
i = 0;
while (*(src + i) != 0)
{
tmp = *(src + i);
*(dest + i) = tmp;
i++;
}
*(dest + (i + 1)) = '\0';
return (dest);
}
