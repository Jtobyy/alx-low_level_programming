#include <stdio.h>
#include "holberton.h"

/**
 *print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line.void print_alphabet(void)
 *Return: void
 */
void print_alphabet(void)
{
int i = 97;
while (i <= 122)
{
putchar(i);
i++;
}
putchar('\n');
}
