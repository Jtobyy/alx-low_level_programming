#include <stdlib.h>
#include <string.h>
#include <time.h>
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
putchar(i + '0');
}
for (j = 97; j < 103; j++)
{
char tmp = j;
putchar(tmp);
}
putchar('\n');
return (0);
}
