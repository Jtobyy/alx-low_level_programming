#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

/**
*main- prints alphabets in lowercase
*Return: 0
*/
int main(void)
{
char a = 'a';
char z = 'z';
int i;
for (i = z; i > a - 1; i--)
{
char tmp = i;
putchar(tmp);
}
putchar('\n');
return (0);
}
