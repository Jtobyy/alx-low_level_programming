#include "holberton.h"

/**
 *main - prints the number of args passed into it
 *@argc: numb of cmd line args
 *@argv: array of pointers containing cmd line ags
 *Return: int 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int j;
j = 0;
while (j < argc)
{
j++;
}
printf("%d", j - 1);
putchar('\n');
return (0);
}
