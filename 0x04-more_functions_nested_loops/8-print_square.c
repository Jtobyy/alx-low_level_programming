#include "holberton.h"

/**
 * print_square - prints a quare
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
int x;
int i;
if (size <= 0)
{
putchar('\n');
return;
}
for (x = 0; x < size; x++)
{
for (i = 0; i < size; i++)
{
putchar('#');
}
putchar('\n');
}
return;
}
