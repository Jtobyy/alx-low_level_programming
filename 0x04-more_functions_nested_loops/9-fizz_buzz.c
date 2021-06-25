#include "holberton.h"

/**
 * main -  a program that prints the numbers from 1 to 100, 
 *followed by a new line. But for multiples of three print Fizz 
 *instead of the number and for the multiples of five print Buzz. 
 *For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 */
int main(void)
{
  int i;
  for (i = 1; i <= 100; i++)
    {
      if (i % 3 == 0 && i % 5 != 0)
	{
	  putchar('F');
	  putchar('i');
	  putchar('z');
	  putchar('z');
	  putchar(' ');
	  continue;
	}
      if (i % 5 == 0 && i % 3 != 0)
	{
	  putchar('B');
	  putchar('u');
	  putchar('z');
	  putchar('z');
	  putchar(' ');
	  continue;
	}
      if (i % 3 == 0 && i % 5 == 0)
	{
	  putchar('F');
	  putchar('i');
	  putchar('z');
	  putchar('z');
	  putchar('B');
	  putchar('u');
	  putchar('z');
	  putchar('z');
	  putchar(' ');
	  continue;
	}
      if (i >= 10 && i < 20)
	{
	  int t = i % 10;
	  putchar(1 + '0');
	  putchar(t + '0'); 
	}
      else if (i >= 20 && i < 30)
	{
	  int t = i % 10;
	  putchar(2 + '0');
	  putchar(t + '0'); 
	}
      else if (i >= 30 && i < 40)
	{
	  int t = i % 10;
	  putchar(3 + '0');
	  putchar(t + '0'); 
	}
      else if (i >= 40 && i < 50)
	{
	  int t = i % 10;
	  putchar(4 + '0'); 
	  putchar(t + '0'); 
	}
      else if (i >= 50 && i < 60)
	{
	  int t = i % 10;
	  putchar(5 + '0');
	  putchar(t + '0'); 
	}
      else if (i >= 60 && i < 70)
	{
	  int t = i % 10;
	  putchar(6 + '0');
	  putchar(t + '0'); 
	}
      else if (i >= 70 && i < 80)
	{
	  int t = i % 10;
	  putchar(7 + '0');
	  putchar(t + '0'); 
	}
      else if (i >= 80 && i < 90)
	{
	  int t = i % 10;
	  putchar(8 + '0');
	  putchar(t + '0');

	}
      else if (i >= 90 && i < 100)
	{
	  int t = i % 10;
	  putchar(9 + '0');
	  putchar(t + '0');

	}
      else if (i == 100)
	{
	  putchar(1);
	  putchar(0);
	  putchar(0);
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
