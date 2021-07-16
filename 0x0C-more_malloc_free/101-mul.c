#include "holberton.h"

unsigned long _pow10(unsigned long n);
void add_zeros(unsigned long n, unsigned long p);
void print_number(unsigned long n);

/**
 *main - multiplies two different intergers
 *@argc: no of arguments
 *@argv: array of arguments
 *Return: zero
 */

int main(int argc, char *argv[])
{
int i;
int j;
unsigned long m;
char *p;
j = 0;
if (argc != 3)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(98);
}
for (i = 0; i < argc; i++)
{
if (i == 0)
continue;
p = argv[i];
while (p[j] != '\0')
{
if (p[j] < 48 || p[j] > 57)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(98);
}
j++;
}
j = 0;
}
m = atol(argv[1]) * atol(argv[2]);
if (m == 0)
putchar(0 + '0');
else
print_number(m);
putchar('\n');
return (0);
}

/**
 *print_number - prints an integer
 *@n: number to be printed
 *Return: void
 */

void print_number(unsigned long n)
{
unsigned long quo;
unsigned long i;
unsigned long p;
i = 0;
quo = n;
while (quo >= 10)
{
quo = quo / 10;
i++;
}
putchar(quo + '0');
p = _pow10(i);
n = (n - (quo *p));
add_zeros(n, p);
if (n >= 10)
print_number(n);
else
putchar(n + '0');
return;
}

/**
 *_pow10 - calculates the value of 10 raised to an integer
 *@n: value of power
 *Return: void
 */
unsigned long _pow10(unsigned long n)
{
unsigned long i;
unsigned long tmp;
tmp = 10;
for (i = 1; i < n; i++)
tmp *= 10;
return (tmp);
}

/**
 *add_zeros - adds appropratite amount of zeros before digits
 *@n: integer that zeros should be added before
 *@p: Power of MSD of initial integer
 *Return: void
 */

void add_zeros(unsigned long n, unsigned long p)
{
unsigned long i;
for (i = p / 10; i > 1 && n < i; i /= 10)
{
putchar(0 + '0');
}
return;
}