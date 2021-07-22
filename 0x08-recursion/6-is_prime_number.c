#include "holberton.h"

int prime_no(int, int);
/**
 *is_prime_number - Checks if an input is prime
 *@n: input
 *Return: 1 if its prime and 0 if not
 */
int is_prime_number(int n)
{
int y;
if (n <= 1)
return (0);
y = prime_no(n, n);
if (y == n)
return (1);
else
return (0);
}

/**
 *prime_no - really does the checking
 *@x: number
 *@y: counter
 *Return: An int that is checked
 */
int prime_no(int x, int y)
{
int p;
if (x == 1)
return (0);
if (y == 2)
return (2);
p = prime_no(x, y - 1);
if (x % p == 0)
return (1);
else
return (p + 1);
}







