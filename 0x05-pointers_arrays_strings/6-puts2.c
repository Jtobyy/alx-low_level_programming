#include "holberton.h"

/**
 * puts2 - prints evwry other character 
 *@str: string
 *Return: void
 */
void puts2(char *str)
{
int i;
i = 0;
while (*(str + i) != 0)
{
putchar(*(str + i));
i += 2;
}
putchar('\n');
return;
}
