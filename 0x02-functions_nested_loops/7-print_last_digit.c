#include <stdio.h>
#include "holberton.h"

/**
 *print_last_digit - returns the value of last digit
 *@n: given series of digits
 *Return: value of last digit
 */
int print_last_digit(int n)
{
int i;
if (n < 0)
{
n = 0 - n;
}
i = n % 10;
putchar(i + '0');
return (i);
}

