#include <stdio.h>

/**
 *main - prints both lower case and
 *upper case alphabets
 *Return: 0
 */

int main(void)
{
int i;
int j;
for (i = 97; i < 123; i++)
{
char x = i;
putchar(x);
}
for (j = 65; j < 91; j++)
{
char x = j;
putchar(x);
}

putchar('\n');
return (0);
}
