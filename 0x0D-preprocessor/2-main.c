#include <stdio.h>

/**
 *main - prints the name of the file it was compiled from,
 * followed by a new line.
 *Return: 0
 */

int main(void)
{
int i;
char *p;
p = __FILE__;
for (i = 0; p[i] != '\0'; i++)
{
putchar(p[i]);
}
putchar('\n');
return (0);
}
