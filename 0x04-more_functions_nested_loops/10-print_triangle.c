#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the square
 * Return: void
 */
void print_triangle(int size)
{
int x;
int i;
int j;
int tmp;
tmp = size;
if (size <= 0)
{
putchar('\n');
return;
}
for (x = 0; x < size; x++)
{
for (j = 0; j < tmp - 1; j++)
{
putchar(' ');
}
for (i = 0; i < x + 1; i++)
{
putchar('#');
}
tmp -= 1;
putchar('\n');
}
return;
}
