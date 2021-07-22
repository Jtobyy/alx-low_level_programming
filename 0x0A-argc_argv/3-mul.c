#include "holberton.h"
#include <stdlib.h>
/**
 *main - prints product of two ints
 *@argc: numb of cmd line args
 *@argv: array of pointers containing cmd line ags
 *Return: int 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int r;
if (argc != 3)
{
printf("Error\n");
return (1);
}
r = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", r);
return (0);
}
