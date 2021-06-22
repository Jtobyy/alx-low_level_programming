#include <stdio.h>

void print_alphabet(void);

/**
 *main: prints Holberton followed by a new line
 *Return - 1
 */

int main(void)
{
print_alphabet();
return 0;
}

/**
 *print_alphabet : a function that prints the alphabet, in lowercase,
 * followed by a new line.void print_alphabet(void)
 *Return - void
 */
void print_alphabet(void)
{
int i=97;
int j=0;
while (j < 10)
{
while (i <= 122)
{
putchar(i);
i++;
}
putchar('\n');
i = 97;
j++;
}
}
