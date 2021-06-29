#include "holberton.h"

/**
 * puts_half - prints half of a string
 *@str: string
 *Return: void
 */
void puts_half(char *str)
{
int i;
int n;
int j;
int tmp;
i = 0;
while (*(str + i) != 0)
{
i++;
}
if (i % 2 == 0)
n = i / 2;
else
n = (i + 1) / 2;
for (j = n; *(str + j) != 0; j++)
{
tmp = *(str + j);
putchar(tmp);
n++;
}
putchar('\n');
return;
}
