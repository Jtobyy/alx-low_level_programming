#include "holberton.h"

int find_sqrt(int, int);
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *Return: square root on n
 */
int _sqrt_recursion(int n)
{
int y;
if (n < 0)
return (-1);
if (n == 1)
return (1);
y = find_sqrt(n, 1);
if (y == n)
return (-1);
return (y);
}

/**
 *find_sqrt - really computes the natural square root, if n doesnt
 * have, it returns n as it is.
 *@n: number
 *@x: counter
 *Return: natural square root
 */
int find_sqrt(int n, int x)
{
int y;
if (x == n)
return (1);
y = find_sqrt(n, x + 1);
if (y *y == n)
return (y);
else
return (y + 1);
}







