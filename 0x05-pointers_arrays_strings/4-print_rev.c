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
if (i > 1)
{
j = i - 1;
do {
c = *(s + j);
putchar(c);
j--;
} while (&*(s + j) != &*s);
c = *s;
putchar(c);
}
putchar('\n');
return;
}

