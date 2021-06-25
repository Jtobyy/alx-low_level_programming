#include "holberton.h"

/**
 * print_line - prints line
 * @n: number of times dash should be printed
 * Return: void
 */
void print_line(int n)
{
int x;
for (x = 0; x < n; x++)
{
putchar('_');
}
putchar('\n');
return;
}
