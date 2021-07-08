#include "holberton.h"

int prime_no(int, int);
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *Return: square root on n
 */
int is_prime_number(int n)
{
int y;
if (n <= 1)
return (0);
y = prime_no(n, n/2);
return (y);
}

/**
 *find_sqrt - really computes the natural square root, if n doesnt
 * have, it returns n as it is.
 *@n: number
 *@x: counter
 *Return: natural square root
 */
int prime_no(int x, int y)
{
int m;
if (x == 1)
return (1);
m = prime_no(x, y - 1);
if (x % m == 0)
return (1);
else
return (0);
}







