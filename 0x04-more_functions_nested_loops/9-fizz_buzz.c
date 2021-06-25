#include "holberton.h"

/**
* main -  a program that prints the numbers from 1 to 100,
*followed by a new line. But for multiples of three print Fizz
*instead of the number and for the multiples of five print Buzz.
*For numb.
* Return: 0
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
int t = i % 10;
if (i % 3 == 0 && i % 5 != 0)
fizzbuzz('f');
else if (i % 5 == 0 && i % 3 != 0)
fizzbuzz('b');
else if (i % 3 == 0 && i % 5 == 0)
fizzbuzz('a');
else if (i >= 10 && i < 20)
g_putchar(t, 'a');
else if (i >= 20 && i < 30)
g_putchar(t, 'b');
else if (i >= 30 && i < 40)
g_putchar(t, 'c');
else if (i >= 40 && i < 50)
g_putchar(t, 'd');
else if (i >= 50 && i < 60)
g_putchar(t, 'e');
else if (i >= 60 && i < 70)
g_putchar(t, 'f');
else if (i >= 70 && i < 80)
g_putchar(t, 'g');
else if (i >= 80 && i < 90)
g_putchar(t, 'h');
else if (i >= 90 && i < 100)
g_putchar(t, 'i');
else if (i == 100)
g_putchar(t, 'j');
else
{
putchar(i + '0');
}
putchar(' ');
}
putchar('\n');
return (0);
}

/**
 *fizzbuzz - checks if a number is a multiple of 3, 5 or
 *both
 *@x: indicator like a flag that tells checker what iteration it is
 */
void fizzbuzz(char x)
{
switch (x)
{
case 'f':
putchar('F');
putchar('i');
putchar('z');
putchar('z');
break;
case 'b':
putchar('B');
putchar('u');
putchar('z');
putchar('z');
break;
case 'a':
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
break;
}
return;
}

/**
 *g_putchar- check for the the first digit of an iteration
 *in order to avoid putchar anomaly
 *@x: indicator as well
 *@y: last intege
 */
void g_putchar(int y, char x)
{
if (x == 'a')
putchar(1 + '0');
else if (x == 'b')
putchar(2 + '0');
else if (x == 'c')
putchar(3 + '0');
else if (x == 'd')
putchar(4 + '0');
else if (x == 'e')
putchar(5 + '0');
else if (x == 'f')
putchar(6 + '0');
else if (x == 'g')
putchar(7 + '0');
else if (x == 'h')
putchar(8 + '0');
else if (x == 'i')
putchar(9 + '0');
else if (x == 'j')
{
putchar(1);
putchar(0);
putchar(0);
return;
}
putchar(y + '0');
return;
}
