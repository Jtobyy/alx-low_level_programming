#include <stdlib.h>
#include <stdio.h>

/**
*main- prints out hex numbers
*Return: 0
*/
int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for(j = 1; j < 10; j++)
{
if(i == j)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
}
return (0);
}
