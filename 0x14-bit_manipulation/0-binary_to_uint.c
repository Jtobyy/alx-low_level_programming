#include "main.h"

/**
 *binary_to_uint - convert a binary number to an unsigned int.
 *@b: pointer to a string of zeros
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int k;
unsigned int n;
unsigned int j;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if ((b[i] == '0') || (b[i] == '1'))
continue;
else if (b[i] == '\0')
break;
else
return (0);
}
j = 1;
n = 0;
for (k = i - 1; k >= 0; k--)
{
n += ((b[k] - 48) * j);
j *= 2;
}
return (n);
}
