#include "holberton.h"
#include <limits.h>
#include <string.h>

/** int main(void)
{
  char *c;
  int *i;
  float *f;
  double *d;

  c = malloc_checked(sizeof(char) * 1024);
  printf("%p\n", (void *)c);
  i = malloc_checked(sizeof(int) * 402);
  printf("%p\n", (void *)i);
  f = malloc_checked(sizeof(float) * 100000000);
  printf("%p\n", (void *)f);
  d = malloc_checked(INT_MAX);
  printf("%p\n", (void *)d);
  free(c);
  free(i);
  free(f);
  free(d);
  return (0); 
  char *concat;

  concat = string_nconcat("Holberton ", NULL, 3);
  printf("%s\n", concat);
  free(concat);
  return (0);
}*/
/**void simple_print_buffer(char *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

int main(void)
{
  char *a;

  a = _calloc(98, sizeof(char));
  strcpy(a, "Holberton");
  strcpy(a + 9, " School! :)\n");
  a[97] = '!';
  simple_print_buffer(a, 98);
  free(a);
  return (0);
  }*/
void simple_print_buffer(int *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}
int main(void)
{
  int *a;

  a = array_range(0, 10);
  simple_print_buffer(a, 11);
  free(a);
  return (0);
}
