#include "holberton.h"
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: numb of cmd line args
 *@argv: array of pointers containing cmd line ags
 *Return: int 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
int a;
a = 0;
if (argc < 2)
{
printf("%d\n", 0);
return (0);
}
for (i = 0; i < argc; i++)
{
if (i == 0)
continue;
if (*(argv[i]) >= 48 && *(argv[i]) <= 57)
a += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", a);
return (0);
}
