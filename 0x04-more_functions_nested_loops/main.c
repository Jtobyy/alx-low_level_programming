#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  /**  char c;

   *  c = 'A';
   *  printf("%c: %d\n", c, _isupper(c));
   *  c = 'a';
   *  printf("%c: %d\n", c, _isupper(c));
   *  return (0); */
  char c;

  c = '0';
  printf("%c: %d\n", c, _isdigit(c));
  c = 'a';
  printf("%c: %d\n", c, _isdigit(c));
  return (0);
}
