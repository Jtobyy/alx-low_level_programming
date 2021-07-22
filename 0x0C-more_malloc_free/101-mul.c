#include "holberton.h"

char * mult_large(char *, char *, int, int);
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
int j;
int k;
unsigned long m;
char *p;
char *endptr;
j = 0;
k = 0;
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
p = argv[1];
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
p = argv[2];
while (p[k] != '\0')
{
if (p[k] < 48 || p[k] > 57)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(98);
}
k++;
}
if (j + k >= 10)
{
mult_large(argv[1], argv[2], j, k);
}
else
{
m = strtol(argv[1], &endptr, 10) * strtol(argv[2], &endptr, 10);
if (m == 0)
putchar(0 + '0');
else
print_number(m);
putchar('\n');
return (0);
   }
}

/**
 *mutl - does the multiplication of large values
 *@a: first number
 *@b: second number
 *Return: void
 */

char *mult_large(char *a, char *b, int c, int d)
{
int i;
int j;
char *p;
for (i = 0; a[i] != 0; a++)
{
pass
}
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
if (quo >= 10)
{
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
else
{
putchar(n + '0');
return;
}
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
