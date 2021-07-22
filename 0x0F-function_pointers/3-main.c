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
fp = get_op_func(argv[2]);
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
