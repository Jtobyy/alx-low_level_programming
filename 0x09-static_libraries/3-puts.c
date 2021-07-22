#include "holberton.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 *@str: string
 *Return: void
 */
void _puts(char *str)
{
int i;
char c;
i = 0;
while (*(str + i) != 0)
{
c = *(str + i);
putchar(c);
i++;
}
putchar('\n');
return;
}
