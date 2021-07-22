#include "holberton.h"
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: numb of cmd line args
 *@argv: array of pointers containing cmd line ags
 *Return: int 0
 */
int main(int argc, char **argv)
{
int i;
int j;
int a;
char *p;
a = 0;
j = 0;
if (argc < 2)
{
printf("%d\n", 0);
return (0);
}
for (i = 0; i < argc; i++)
{
if (i == 0)
continue;
p = argv[i];
while (*(p + j) != '\0')
{
if (*(p + j) < 48 || *(p + j) > 57)
{
printf("Error\n");
return (1);
}
j++;
}
a += atoi(p);
j = 0;
}
printf("%d\n", a);
return (0);
}
