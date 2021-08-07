#include "main.h"

unsigned int local_binary_to_uint(char *b);

/**
 *clear_bit - sets the value of a bit to 0 at a given index.
 *@n: series of bits
 *@index: index
 pp*Return: 1 if it works and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i;
unsigned int b;
char *p;
if (n == NULL)
return (-1);
p = malloc(sizeof(*p) * 65);
if (p == NULL)
return (-1);
i = 0;
while (i < 64)
{
if (i == (63 - index))
{
p[i] = '0';
}
else
p[i] = '1';
i++;
}
p[i] = '\0';
b = local_binary_to_uint(p);
*n = *n & b;
free(p);
return (1);
}

/**
 *local_binary_to_uint - converts binary to unsigned int
*@b: binary to convert
*Return: answer
*/
unsigned int local_binary_to_uint(char *b)
{
int i;
int k;
unsigned int n;
unsigned int m;
m = 1;
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
n = 0;
for (k = (i - 1); k >= 33; k--)
{
n += ((b[k] - 48) * m);
m *= 2;
}
return (n);
}
