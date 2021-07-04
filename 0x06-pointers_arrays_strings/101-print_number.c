#include "holberton.h"

int _pow10(int);
void add_zeros(int n, int p);

/**
 *print_number - prints an integer
 *@n: number to be printed
 *Return: void
 */

void print_number(int n)
{
int quo;
int i;
int p;
 
i = 0;
quo = n;
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

add_zeros(n, p);

if (n >= 10)
print_number(n);
else
{
  putchar(n + '0');
{
}

  /**
   *_pow - calculates the value of 10 raised to an integer
   *@n: value of power
   *Return: void
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

/**
 *add_zeros - adds appropratite amount of zeros before digits
 *@n: integer that zeros should be added before
 *@p: Power of MSD of initial integer
 *Return: void
 */

 void add_zeros(int n, int p)
 {
   int i;
   for (i = p / 10; i > 1 && n < i; i / 10)
     {
       putchar(0 + '0');
     }
   return;
 }
