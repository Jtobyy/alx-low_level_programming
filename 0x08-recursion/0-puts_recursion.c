#include "holberton.h"

/**
 *_puts_recursion - prints a string, followed by a new line
 *@s: string
 *Return: void
 */
void _puts_recursion(char *s)
{
char *p;
if (s[0] == '\0')
{
putchar('\n');
return;
}
putchar(s[0]);
p = &(*(s + 1));
_puts_recursion(p);
}
