#include "holberton.h"

/*void simple_print_buffer(char *buffer, unsigned int size);*/

int main(void)
{
  /** char buffer[98] = {0};
  char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

  simple_print_buffer(buffer, 98);
  _memcpy(buffer + 50, buffer2, 10);
  printf("-------------------------------------------------\n");
  simple_print_buffer(buffer, 98);
  return (0); */
  /**  char *s = "hello";
  char *f;

  f = _strchr(s, 'j');

  if (f != NULL)
    {
      printf("%s\n", f);
    }
    return (0); */
  /**  char *s = "hello, world";
  char *f = "o,";
  unsigned int n;

  n = _strspn(s, f);
  printf("%u\n", n);
  return (0); */
  char *s = "hello, world";
  char *f = "\0";
  char *t;

  t = _strpbrk(s, f);
  printf("%s\n", t);
  return (0);
  /**  char *s = "hello, world";
  char *f = "pp";
  char *t;

  t = _strstr(s, f);
  printf("%s\n", t);
  return (0); */
  /**  char board[8][8] = {
		      {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		      {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		      {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		      {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
  };
  print_chessboard(board);
  return (0); */
  /**int c3[3][3] = {
		  {0, 1, 5},
		  {10, 11, 12},
		  {1000, 101, 102},
  };
  int c5[5][5] = {
		  {0, 1, 5, 12124, 1234},
		  {10, 11, 12, 123521, 12512},
		  {1000, 101, 102, 12545, 214543435},
		  {100, 1012451, 11102, 12545, 214543435},
		  {10, 12401, 10452, 11542545, 1214543435},
  };
  print_diagsums((int *)c3, 3);
  print_diagsums((int *)c5, 5);
  return (0);*/
}


/** void simple_print_buffer(char *buffer, unsigned int size)
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
*/
