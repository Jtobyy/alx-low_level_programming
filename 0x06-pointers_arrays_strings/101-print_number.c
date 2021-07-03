#include "holberton.h"

/**
 *print_number - prints an integer
 *@n: number to be printed
 *Return: void
 */
void print_number(int n)
{
int quo;
int i;
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
    quo = n / 10;
    printf("quo at this while: %d\", quo);
    i++;
} 
putchar(quo + '0');
n = (n - (quo*10*i));
if (n >= 10)
print_number(n);
else
putchar(n + '0');
printf("n at this last else: %d", n);
return;
}
