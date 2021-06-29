#include "holberton.h"

/**
<<<<<<< HEAD
=======
 * puts_half - prints half of a string
>>>>>>> 578771a91115aa830171d420e3d43d3ddf9e2263
 *@str: string
 *Return: void
 */
void puts_half(char *str)
{
<<<<<<< HEAD
=======
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
>>>>>>> 578771a91115aa830171d420e3d43d3ddf9e2263
}
