#include "holberton.h"

/**
 *print_chessboard - prints the chessboard
 *@a: pointer
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
int k;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
k = a[i][j];
putchar(k);
}
putchar('\n');
}
return;
}
