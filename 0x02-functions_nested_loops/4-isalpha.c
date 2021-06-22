#include <stdio.h>
#include "holberton.h"

int _isalpha(int c);

/**
 *main: calls _isalpha
 *Return - 0
 */

int main(void)
{
int r;
r = _isalpha('H');
putchar(r + '0');
r = _isalpha('o');
putchar(r + '0');
r = _isalpha(108);
putchar(r + '0');
r = _isalpha(';');
putchar(r + '0');
putchar('\n');
return (0);
}

/**
 *_islower: checks if a letter is in upercase
 *Return - 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return 1;
}
return 0;
}
