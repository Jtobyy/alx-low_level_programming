#include "holberton.h"

/**
 * print_most_numbers - skips 2 iterations
 * Return: void
 */
void print_most_numbers(void)
{
int x = 0;
while (x < 10)
{
if (x == 2 || x == 4)
{
x++;
continue;
}
putchar(x + '0');
x++;
}
putchar('\n');
return;
}
