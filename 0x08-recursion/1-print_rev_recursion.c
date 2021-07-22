#include "holberton.h"

/**
 *_print_rev_recursion - prints a string, followed by a new line
 *@s: string
 *Return: void
 */
void _print_rev_recursion(char *s)
{
char x;
char *a;
a = s;
if (*(a + 0) == '\0')
{
return;
}
a++;
_print_rev_recursion(a);
x = *(a - 1);
putchar(x);
a--;
return;
}
