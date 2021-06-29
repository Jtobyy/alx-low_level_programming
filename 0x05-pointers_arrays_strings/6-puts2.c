#include "holberton.h"

/**
 * puts2 - prints evwry other character
 *@str: string
 *Return: void
 */
void puts2(char *str)
{
int i;
char tmp;
i = 0;
do {
tmp = *(str + i);
putchar(tmp);
i += 2;
} while (*(str + i) != 0 && *(str + (i - 1)) != 0);
putchar('\n');
return;
}
