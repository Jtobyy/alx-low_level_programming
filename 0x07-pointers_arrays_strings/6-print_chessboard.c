#include "holberton.h"

/**
 *_print_chessboard - prints the chessboard
 *@a: pointer to string
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
char *p = NULL;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
p = &(haystack[i]);
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
return (p);
}
}
}
return ("null");
}
