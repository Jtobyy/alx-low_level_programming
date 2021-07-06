#include "holberton.h"

unsigned int find_h(unsigned int *arr);

/**
 *_strspn - gets the length of a prefix substring
 *@s: pointer to string s
 *@accept: prefix substring
 *Return: number of bytes in initial segment of s which consit only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int k;
unsigned int p[1000];
unsigned int m;
unsigned int b;
m = 0;
for (i = 0; i < 1000; i++)
p[i] = 0;

for (i = 0; *(accept + i) != '\0'; i++)
{
  for (k = 0; *(s + k) != '\0'; k++)
    {
      if (accept[i] == s[k])
	{
	  p[m] = (k + 1);
	  printf("p[m] is %d\n", k+1);
	  m++;
      break;
	}
    }
}
b = find_h(p);
return (b);
}

unsigned int find_h(unsigned int *arr)
{
  unsigned int i;
  for (i = 0; i < 1000; i++)
    printf("arr[i] is : %d\n", arr[i]);
  /**
  unsigned int tmp;
  unsigned int h;
  for (i = 0; i < 1000; i++)
   {
   if (arr[i] < arr[i + 1])
     {
       printf("arr[i] was: %d while arr[i + 1] was: %d\n", arr[i], arr[i + 1]);
     tmp = arr[i];
     arr[i] = arr[i + 1];
     arr[i + 1] = tmp;
            printf("arr[i] is: %d while arr[i + 1] is: %d\n", arr[i], arr[i + 1]);
     }
   }
 for (i = 0; i < 1000; i++)
   {
   if (arr[i] < arr[i + 1])
     {
       find_h(arr);
     }
   }
   h = arr[0]; */
  return 3;
}
