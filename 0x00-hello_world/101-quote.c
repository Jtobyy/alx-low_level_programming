<<<<<<< HEAD
#include <stdio.h>
/**
 * main - prints system specs
 * Return: 0
 */
int main(void)
{

=======

#include <stdio.h>

/**
 * main - use stderr through fwrite
 * Return: 1
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(str, 59, 1, stderr);
>>>>>>> 121a8e70903301b5b7d2419207a55456e361ff9f
return (1);
}
