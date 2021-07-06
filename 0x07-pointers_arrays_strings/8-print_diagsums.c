#include "holberton.h"

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 *@a: pointert to matrix
 *@size: size of matrix
 *Return: void
 */
void print_diagsums(int *a, int size)
{
int f;
int d;
int i;
int j;
int l;
f = a[0];
d = size + 1;
for (i = d; i < size * size; i += d)
{
f += a[i];
}
printf("%d, ", f);
j = (size * size) - (size - 1);
l = 0;
for (i = (j - 1); i > 0; i -= (size - 1))
{
l += a[i];
}
printf("%d\n", l); 
return;
}
