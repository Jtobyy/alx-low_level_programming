#include <stdio.h>
#include "holberton.h"

/**
 *print_sign - checks the sign of a number
 *@n: number to be checked
 *Return: 1, 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
return (2);
}
