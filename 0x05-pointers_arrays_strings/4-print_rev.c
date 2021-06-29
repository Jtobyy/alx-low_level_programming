#include "holberton.h"

/**
 * print_rev - prints a string, in reverse,
 *@s: string
 *Return: void
 */
void print_rev(char *s)
{
int i;
int j;
char c;
i = 0;
while (*(s + i) != 0)
{
i++;
}
j = i - 1;
while (&*(s + j) != &*s)
{
c = *(s + j);
putchar(c);
j--;
}
c = *s;
putchar(c);
putchar('\n');
return;
}
