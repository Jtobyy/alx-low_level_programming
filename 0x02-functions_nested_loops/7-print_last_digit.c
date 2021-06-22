
#include <stdio.h>

int print_last_digit(int n);

/**
 *main: calls print_last...
 *Return - 0
 */

int main(void)
{
int r;
print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
putchar('0' + r);
putchar('\n');
return (0);
}

/**
 *_islower: returns the value of last digit
 *Return - value of last digit
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = 0 - n;
}
int tmp = n % 10;
putchar(tmp + '0');
return tmp;
}

