#include <stdio.h>

/**
 *main - prints both lower case and
 *upper case alphabets
 *Return: 0
 */

int main(void)
{
for (int i = 97; i < 123; i++)
{
char x = i;
if (x == 'q' || x == 'e')
{
continue;
}
else
{
putchar(x);
}
}
putchar('\n');
return (0);
}
