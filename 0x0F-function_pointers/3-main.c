#include "3-calc.h"

/**
 *main - performs simple operations
 *@argc: no of arguments
 *@argv: array of arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
int v1;
int v2;
int ans;
char *p;
int (*fp)(int, int);
if (argc != 4)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(98);
}
v1 = atoi(argv[1]);
v2 = atoi(argv[3]);
p = argv[2];
if (p[1] != '\0')
{
printf("Error\n");
exit(99);
return (0);
}
fp = get_op_func(p);
if (fp == NULL)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(99);
}
ans = fp(v1, v2);
printf("%d\n", ans);
return (0);
}
