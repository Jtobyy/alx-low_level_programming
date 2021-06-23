#include <stdio.h>
#include "holberton.h"

void times_table(void);

/**
 *main: calls times_table
 *Return - 0
 */

int main(void)
{
times_table();
return (0);
}

/**
 *prints teh 9 times table, starting with 0
 *Return - void
 */
void times_table(void)
{
int i;
int j;
int k = 0;
for (i = 0; i < 10; i++)
{
if (i == 0)
{
for (j = 0; j < 10; j++)
{
_putchar('0');
_putchar(',');
_putchar('.');
_putchar('.');
}   
}
if (i == 1)
{
for (j = 0; j < 10; j++)
{
_putchar(k + '0');
_putchar(',');
_putchar('.');
_putchar('.');
k += i;
}
k = 0;
}
if (i == 2)
{
for (j = 0; j < 10; j++)
{
_putchar(k + '0');
_putchar(',');
_putchar('.');
_putchar('.');
k += i;
}
k = 0;
}
putchar('\n');
}
}

