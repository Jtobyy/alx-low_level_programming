#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - Reverse a string
 *@s: string
 *Return: void
 */
void rev_string(char *s)
{
int i;
int r;
char tmp;
char rev[255];

i = 0;
r = 0;
while (*(s + i) != 0)
{
i++;
}
printf("r:%d rev:%p s:%p *s:%c \n", r, rev, s, *s);
printf("checkpoint 2\n");
while ( i >= 0)
{
tmp = *(s + i);
printf("value of tmp is: %c ", tmp);
printf("checkpoint 3 ");
rev[r] = tmp;
printf("rev + r: %c\n" , rev[r]);
i--;
r++;
 printf("rev: %c", rev[0]);
}
 s = rev;
 printf("s: %s", s);
 printf("rev: %c", *rev);
 printf("rev: %p ", rev);
 printf("s: %p, ", s);



/**
  printf("checkpoint 5");
printf("value in reverse is : %s", rev);
   printf("checkpoint 6");
   putchar('\n'); */
   return;
}
 /**
printf("value of i is: %d\n", i);
*  printf("value stored at (r-1)th place is %c\n", *(s + 9));
* printf("address of s is %p\n", (void *)&s);
* printf("value of just s without the ampersand %p\n", s);
*   printf("address of *s is %p\n", (void *)&(*(s)));
* printf("address of *(s+0) is %p\n", (void *)&(*(s+0)));
* printf("address of *(s+r) is %p\n", (void *)&(*(s+r)));
*   printf("address of *(s+r) is %p\n", (void *)&(*(s+2)));
* rev = s;
* printf("value of rev is: %p\n", rev);
* printf("the address of rev is: %p\n", (void *)&(*rev));
*/
