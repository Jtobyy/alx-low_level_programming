#include <stdio.h>
#include "holberton.h"

/**
 *_islower- checks if a letter is in lowercase
 *@c: character to be checked
 *Return: 1 or 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
