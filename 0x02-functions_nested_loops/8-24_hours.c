#include <stdio.h>
#include "holberton.h"

void jack_bauer(void);

/**
 *main: calls the only function at the bottom...
 *Return - 0
 */

int main(void)
{
jack_bauer();
return (0);
}

/**
 *jack_bauer: prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59
 *Return - value of last digit
 */
void jack_bauer(void)
{
int h;
int i;
int j;
int k;
for (h = 0; h < 3; h++)
{
for (i = 0; i < 10; i++)
{
if (h == 2 && i == 5)
{
break;
}
for (j = 0; j < 6; j++)
{
if (h == 2 && i == 4)
{
break;
}
for (k = 0; k < 10; k++)
{
if (h == 2 && i == 4)
{
break;
}
putchar(h + '0');
putchar(i + '0');
putchar(':');
putchar(j + '0');
putchar(k + '0');
putchar('\n');
}
}
}
}
}

