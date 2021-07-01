#include "holberton.h"

/**
 *reverse_array - reverses the content of an array of ints.
*@a: array
*@n: no of elements of he array
*Return: void
*/

void reverse_array(int *a, int n)
{
int i;
int k;
int j[n];
k = 0;
for (i = (n - 1); i >= 0; i--)
{
j[k] = a[i];
k++;
}
for (i = 0; i < n; i++)
a[i] = j[i];
return;
}
