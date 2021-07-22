#include "3-calc.h"

/**
 *op_add - adds 2 ints
 *
 *@a: first int
 *@b: second int
 *Return: sum of ints
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - substracts b from a
 *
 *@a: first int
 *@b: second int
 *Return: diff between ints
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - mul a by b
 *
 *@a: first int
 *@b: second int
 *Return: multiplication of ints
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - divides a by b
 *
 *@a: first int
 *@b: second int
 *Return: division of ints
 */
int op_div(int a, int b)
{
if (b == 0)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(100);
}
return (a / b);
}

/**
 *op_mod - calc remainder of division of a by b
 *
 *@a: first int
 *@b: second int
 *Return: Sum of ints
 */
int op_mod(int a, int b)
{
if (b == 0)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(100);
}
return (a % b);
}
