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
int t;
for (i = 1; i <= 100; i++)
{
t = i % 10;
if (i % 3 == 0 && i % 5 != 0)
{
fizzbuzz('f');
continue;
}
if (i % 5 == 0 && i % 3 != 0)
{
fizzbuzz('b');
continue;
}
if (i % 3 == 0 && i % 5 == 0)
{
fizzbuzz('a');
continue;
}
if (i >= 10 && i < 20)
{
g_putchar(t, 'a');
}
else if (i >= 20 && i < 30)
{
g_putchar(t, 'b');
}
else if (i >= 30 && i < 40)
{
g_putchar(t, 'c');
}
else if (i >= 40 && i < 50)
{
g_putchar(t, 'd');
}
else if (i >= 50 && i < 60)
{
g_putchar(t, 'e');
}
else if (i >= 60 && i < 70)
{
g_putchar(t, 'f');
}
else if (i >= 70 && i < 80)
{
g_putchar(t, 'g');
}
else if (i >= 80 && i < 90)
{
g_putchar(t, 'h');
}
else if (i >= 90 && i < 100)
{
g_putchar(t, 'i');
}
else if (i == 100)
{
g_putchar(t, 'j');
}
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
putchar(' ');
break;
case 'b':
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
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
putchar(' ');
break;
}
return;
}

/**
 *g_putchar: check for the the first digit of an iteration
 *in order to avoid putchar anomaly
 *@x: indicator as well
 *@y: last intege
 */
void g_putchar(int y, char x)
{
int t = y;
switch (x)
{
case 'a':
putchar(1 + '0');
putchar(t + '0');
break;
case 'b':
putchar(2 + '0');
putchar(t + '0');
break;
case 'c':
putchar(3 + '0');
putchar(t + '0');
break;
case 'd':
putchar(4 + '0');
putchar(t + '0');
break;
case 'e':
putchar(5 + '0');
putchar(t + '0');
break;
case 'f':
putchar(6 + '0');
putchar(t + '0');
break;
case 'g':
putchar(7 + '0');
putchar(t + '0');
break;
case 'h':
putchar(8 + '0');
putchar(t + '0');
break;
case 'i':
putchar(9 + '0');
putchar(t + '0');
break;
case 'j':
putchar(1);
putchar(0);
putchar(0);
break;
}
return;
}
