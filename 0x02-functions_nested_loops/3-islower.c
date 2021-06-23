#include <stdio.h>
#include "holberton.h"

int _islower(int c);

/**
 *main - calls _islower
 *Return: 0
 */

int main(void)
{
int r;
r = _islower('H');
putchar(r + '0');
r = _islower('o');
putchar(r + '0');
r = _islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}

/**
 *_islower- checks if a letter is in lowercase
 *@c: character to be checked
 *Return: 1 or 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
