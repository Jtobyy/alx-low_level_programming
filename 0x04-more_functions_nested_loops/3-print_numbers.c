#include "holberton.h"

/**
 * print_numbers - multiplies two integers
 * Return: void
 */
void print_numbers(void)
{
int x = 0;
while (x < 10)
{
putchar(x + '0');
x++;
}
putchar('\n');
return;
}
