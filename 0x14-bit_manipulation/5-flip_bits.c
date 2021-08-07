#include "main.h"

void local_print_binary(unsigned long int n, char *);

/**
 *flip_bits - returns no of bits to flip to get one no from another
 *@n: uint1
 *@m: uint 2
 *Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int f;
unsigned int b;
int i;
char bits[65];
bits[0] = '\0';
f = m ^ n;
local_print_binary(f, bits);
i = 0;
b = 0;
while (bits[i] != '\0')
{
if (bits[i] == '1')
b++;
i++;
}
return (b);
}

/**
 *local_print_binary - converts uint to bit and stores bit sequence in an array
 *@n: uint to convert
 *@bits: array
 *Return: void
 */
void local_print_binary(unsigned long int n, char *bits)
{
unsigned int i;
unsigned int j;
unsigned int k;
unsigned int c;
k = 0;
while (bits[k] != '\0')
k++;
if (n == 0)
{
bits[k] = '0';
bits[k + 1] = '\0';
return;
}
else if (n == 1)
{
bits[k] = '1';
bits[k + 1] = '\0';
return;
}
for (c = 0; n > 0; c++)
{
i = 0;
j = n;
while (j >= 2)
{
j -= 2;
i++;
}
bits[k] = j + '0';
k++;
n = i;
}
bits[k] = '\0';
return;
}
