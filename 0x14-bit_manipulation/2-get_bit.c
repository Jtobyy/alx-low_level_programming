#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: given index
 *Return: the value at given index of -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
unsigned int j;
unsigned int k;
for (k = 0; k <= index; k++)
{
if (n == 0)
break;
i = 0;
j = n;
while (j >= 2)
{
j -= 2;
i++;
}
n = i;
}
if ((k - 1) == index)
return (j);
return (-1);
}
