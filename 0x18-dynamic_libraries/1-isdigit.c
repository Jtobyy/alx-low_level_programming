#include "main.h"

/**
 * _isdigit - checks to see if a givin value is a digit
 * @c: character to be tested
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
