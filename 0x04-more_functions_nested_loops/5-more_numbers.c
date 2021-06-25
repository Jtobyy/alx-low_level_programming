#include "holberton.h"

/**
 * more_numbers - prints 1 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
int x;
int i;
for (x = 0; x < 10; x++)
{
for (i = 0; i <= 14; i++)
{
int t = i % 10;
if (i > 9)
{
putchar(1 + '0');
}
putchar(t + '0');
}
putchar('\n');
}
return;
}
