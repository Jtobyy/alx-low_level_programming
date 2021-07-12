#include "holberton.h"

/**
 *main - prints its name
 *@argc: numb of cmd line args
 *@argv: array of pointers containing cmd line ags
 *Return: int 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
char *s;
int i;
char x;
s = argv[0];
i = 0;
while (*(s + i) != '\0')
{
x = *(s + i);
putchar(x);
i++;
}
putchar('\n');
return (0);
}
