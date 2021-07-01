#include "holberton.h"

/**
 *leet - encodes a string into 1337
*@s: pointer to string
*Return: string capitalized
*/

char *leet(char *s)
{
int j;
int k;
char c[10];
char i[10];
c[0] = 'a';
c[1] = 'A';
c[2] = 'e';
c[3] = 'E';
c[4] = 'o';
c[5] = 'O';
c[6] = 't';
c[7] = 'T';
c[8] = 'l';
c[9] = 'L';
i[0] = '4';
i[1] = '4';
i[2] = '3';
i[3] = '3';
i[4] = '0';
i[5] = '0';
i[6] = '7';
i[7] = '7';
i[8] = '1';
i[9] = '1';
for (j = 0; s[j] != 0; j++)
{
for (k = 0; k < 10; k++)
{
if (s[j] == c[k])
s[j] = i[k];
}
}
return (s);
}
