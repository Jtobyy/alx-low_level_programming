#include "holberton.h"

/**
 *print_number - prints an integer
 *@n: number to be printed
 *Return: void
 */
int _pow10(int);

void print_number(int n)
{
int quo;
int rem;
int i;
int j;
int p;
int m;

i = 0;
quo = n;
rem = n % 10;
if (n < 0)
{
putchar('-');
n = 0 - n;
print_number(n);
}
while (quo >= 10)
{
    quo = quo / 10;
    i++;
}
 
putchar(quo + '0');
p = _pow10(i);
n = (n - (quo * p));


 if ((P / 10) > n)
  {
    m = p - n;
{
for (j = 0; j < i; j++)
putchar('0');
return;
}
else
{
for (j = 1; j < i; j++)
putchar('0');
putchar(n + '0');
return;
}

  }
if (n >= 10)
print_number(n);
else
{

{
}
}

  /**
   *_pow - calculates the value of 10 raised to an integer
   */
int _pow10(int n)
{
int i;
int tmp;
tmp = 10;
for (i = 1; i < n; i++)
{
tmp *= 10;
}
return (tmp);
}
