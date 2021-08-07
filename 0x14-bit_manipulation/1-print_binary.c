#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number to print
 *Return: void
 */
void print_binary(unsigned long int n)
{
unsigned int i;
unsigned int j;
if (n == 0)
{
putchar('0');
return;
}
else if (n == 1)
{
putchar('1');
return;
}
i = 0;
j = n;
while (j >= 2)
{
j -= 2;
i++;
}
n = i;
if (n > 0)
print_binary(n);
putchar(j + '0');
return;
}
