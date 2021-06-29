#include "holberton.h"

/**
 * print_array - prints n elements of an array of ints
 *@a: pointer to an array of ints
 *@n: no of elments to print
 *Return: void
 */
void print_array(int *a, int n)
{
int i;
int tmp;
i = 0;
while (i < n)
{
tmp = *(a + i);
printf("%d", tmp);
if (i != (n - 1))
printf(", ");
i++;
}
putchar('\n');
return;
}
