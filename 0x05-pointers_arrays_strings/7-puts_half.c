#include "holberton.h"

/**
 * puts2 - prints evwry other character
 *@str: string
 *Return: void
 */
void puts_half(char *str)
{
int i;
char tmp;
i = 0;
while (*(str + i) != 0)
{
tmp = *(str + i);
putchar(tmp);
i += 2;
}
putchar('\n');
return;
}
