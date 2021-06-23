#include <stdio.h>
#include "holberton.h"

/**
 *print_last_digit - returns the value of last digit
 *@n: given series of digits
 *Return: value of last digit
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = 0 - n;
}
int tmp;
tmp = n % 10;
putchar(tmp + '0');
return (tmp);
}

