#include "holberton.h"

int calcent(int g);
/**
 *main - prints the minimum number of coins to make
 * change for an amount of money
 *@argc: numb of cmd line args
 *@argv: array of pointers containing cmd line ags
 *Return: 0 for success
 *Coins type: 25, 10, 5, 2, 1 cents.
 */

int main(int argc, char *argv[])
{
int j;
int g;
int c;
char *p;
j = 0;
c = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
p = argv[1];
while (*(p + j) != '\0')
{
if (*(p + 0) < 48 || *(p + 0) > 57)
{
printf("Error\n");
return (1);
}
j++;
}
g = atoi(argv[1]);
if (g < 0)
printf("%d\n", 0);
c = calcent(g);
printf("%d\n", c);
return (0);
}

/**
 *calcent - Really calculates amount of cents to be used
 *@g: given change
 *Return: amount of cents
 */
int calcent(int g)
{
int c;
c = 0;
while (g != 0)
{
if (g < 25)
{
if (g < 10)
{
if (g < 5)
{
if (g < 2)
{
g -= 1;
c++;
continue;
}
g -= 2;
c++;
continue;
}
g -= 5;
c++;
continue;
}
g -= 10;
c++;
continue;
}
else
{
g -= 25;
c++;
}
}
return (c);
}
