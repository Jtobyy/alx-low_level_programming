#include "holberton.h"

/**
 * main - test programs)
 * Return: 0
 */
int main (void)
{
  /**  char s1[98] = "Hello ";
  char s2[] = "World!\n";
  char *ptr;

  printf("%s\n", s1);
  printf("%s", s2);
  ptr = _strncat(s1, s2, 1);
  printf("%s\n", s1);
  printf("%s", s2);
  printf("%s\n", ptr);
  ptr = _strncat(s1, s2, 1024);
  printf("%s", s1);
  printf("%s", s2);
  printf("%s", ptr);
  return 0; */

  /**  char s1[98];
  char *ptr;
  int i;

  for (i = 0; i < 98 - 1; i++)
    {
      s1[i] = '*';
    }
  s1[i] = '\0';
  printf("%s\n", s1);
  ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
  printf("%s\n", s1);
  printf("%s\n", ptr);
  ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
  printf("%s", s1);
  printf("%s", ptr);
  for (i = 0; i < 98; i++)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
      printf("0x%02x", s1[i]);
    }
  printf("\n");
  return (0); 
  */
  
  /**  char s1[] = "Hello";
  char s2[] = "World!";

  printf("%d\n", _strcmp(s1, s2));
  printf("%d\n", _strcmp(s2, s1));
  printf("%d\n", _strcmp(s1, s1));
  return (0); */
  /**  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

  print_array(a, sizeof(a) / sizeof(int));
  reverse_array(a, sizeof(a) / sizeof(int));
  print_array(a, sizeof(a) / sizeof(int));
  return (0); */
  /**  
char str[] = "Holberton School!\n";
  char *ptr;

  ptr = string_toupper(str);
  printf("%s", ptr);
  printf("%s", str);
  return (0); */
  
  /**  char str[] = "emdo dofda f/afjosf/af afdsoif.s fsodifjd, aifdosf /t iodofjsf\todsijf sodfi\n";
  char *ptr;

  ptr = cap_string(str);
  printf("%s", ptr);
  printf("%s", str);
  return (0); */
  /**  char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
  char *p;

  p = rot13(s);
  printf("%s", p);
  printf("------------------------------------\n");
  printf("%s", s);
  printf("------------------------------------\n");
  p = rot13(s);
  printf("%s", p);
  printf("------------------------------------\n");
  printf("%s", s);
  printf("------------------------------------\n");
  p = rot13(s);
  printf("%s", p);
  printf("------------------------------------\n");
  printf("%s", s);
  return (0); */
  /**  print_number(98);
       putchar('\n');*/
  print_number(402);
  putchar('\n');
  /**print_number(1024);
  putchar('\n');
  print_number(0);
  putchar('\n');
  print_number(-98);
  putchar('\n');*/
  return (0);
}
/**
void print_array(int *a, int n)
{
  int i;

  i = 0;
  while (i < n)
    {
      if (i != 0)
	{
	  printf(", ");
	}
      printf("%d", a[i]);
      i++;
    }
  printf("\n");
  return;
}
  
*/
