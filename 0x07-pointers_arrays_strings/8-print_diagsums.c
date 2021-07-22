#include "holberton.h"
#include <stdlib.h>

int count_digit(int);
/**
 *print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
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
int p;
int sign;
char *buf;
int x;
f = a[0];
d = size + 1;
for (i = d; i < size * size; i += d)
{
f += a[i];
}
x = count_digit(f);
buf = ecvt(f, x, &p, &sign);
for (i = 0; buf[i] != '\0'; i++)
{
putchar(buf[i]);
}
putchar(',');
putchar(' ');
j = (size * size) - (size - 1);
l = 0;
for (i = (j - 1); i > 0; i -= (size - 1))
{
l += a[i];
}
x = count_digit(l);
buf = ecvt(l, x, &p, &sign);
for (i = 0; buf[i] != '\0'; i++)
{
putchar(buf[i]);
}
putchar('\n');
return;
}

/**
 *count_digit - counts amount of digits in an integer
 *@quo: integer
 *Return: amount
 */
int count_digit(int quo)
{
int x;
x = 1;
while (quo >= 10)
{
quo = quo / 10;
x++;
}
return (x);
}
