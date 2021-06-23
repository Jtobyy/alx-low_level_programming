#include <stdio.h>
#include "holberton.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: integer whose absolute value is to be determined
 *Return: 1, 0 or -1
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else if (n < 0)
{
n = 0 - n;
return (n);
}
return (2);
}
