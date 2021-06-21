
#include <stdio.h>

/**
 * main - use stderr through fwrite
 * Return: 1
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(str, 59, 1, stderr);
return (1);
}
