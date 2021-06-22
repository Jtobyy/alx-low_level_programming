
#include <stdio.h>

int print_sign(int n);

/**
 *main: calls print_sign
 *Return - 0
 */

int main(void)
{
int r;
r = print_sign(98);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0xff);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(-1);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
return (0);
}

/**
 *_islower: checks if a letter is in upercase
 *Return - 1, 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('1' + '0');
return 1;
}
else if (n == 0)
{
return 0;
}
else if (n < 0)
{
return -1;
}
}
