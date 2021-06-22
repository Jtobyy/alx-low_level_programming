#include <stdio.h>
#include "holberton.h"

int _abs(int n);

/**
 *main: cals _abs
 *Return - 0
 */

int main(void)
{
int r;
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}

/**
 *_islower: computes the absoluet value of an integer
 *Return - 1, 0 or -1
 */
int _abs(int n)
{
if (n >= 0)
{
return n;
}
else if (n < 0)
{
n = 0 - n;
return n;
}
}
