#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse,
 *@s: string
 *Return: void
 */
void print_rev(char *s)
{
int i;
char c;
i = 0;
while (*(s + i) != 0)
{
i++;
}
while ((s + i) != s)
{
c = *(s + i);
putchar(c);
i--;
}
c = *(s + i);
putchar(c);
putchar('\n');
return;
}
