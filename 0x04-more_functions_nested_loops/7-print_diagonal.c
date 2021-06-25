#include "holberton.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
int x;
int i;
if (n <= 0)
{
putchar('\n');
return;
}
for (x = 0; x < n; x++)
{
for (i = 0; i < x; i++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
return;
}
