#include "holberton.h"

void simple_print_buffer(char *, unsigned int);

int main(void)
{
  /**  char *buffer;

  buffer = create_array(98, 'H');
  if  (buffer == NULL)
    {
      printf("failed to allocate memory\n");
      return (1);
    }
  simple_print_buffer(buffer, 98);
  free(buffer);
  return (0); */

  char *s;

  s = _strdup("Holberton");
  if (s == NULL)
    {
      printf("failed to allocate memory\n");
      return (1);
    }
  printf("%s\n", s);
  free(s);
  return (0);
  
}

void simple_print_buffer(char *buffer, unsigned int size)
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
