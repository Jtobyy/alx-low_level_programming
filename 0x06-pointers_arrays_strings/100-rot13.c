#include "holberton.h"

/**
 *rot13 - encodes a string using rot13
*@s: pointer to string
*Return: string encoded
*/
char *characters(char *c);
char *rotequi(char *i);

char *rot13(char *s)
{
int j;
int k;
char c[53];
char i[53];
characters(c);
rotequi(i);
for (j = 0; s[j] != 0; j++)
{
for (k = 0; k < 52; k++)
{
if (s[j] == i[k])
s[j] = c[k];
}
}
return (s);
}

/**
 *characters - fills array c up
 *Return: pointer to c
 */
char *characters(char *c)
{
c[0] = 'A';
c[1] = 'B';
c[2] = 'C';
c[3] = 'D';
c[4] = 'E';
c[5] = 'F';
c[6] = 'G';
c[7] = 'H';
c[8] = 'I';
c[9] = 'J';
c[10] = 'K';
c[11] = 'L';
c[12] = 'M';
c[13] = 'N';
c[14] = 'O';
c[15] = 'P';
c[16] = 'Q';
c[17] = 'R';
c[18] = 'S';
c[19] = 'T';
c[20] = 'U';
c[21] = 'V';
c[22] = 'W';
c[23] = 'X';
c[24] = 'Y';
c[25] = 'Z';
c[26] = 'a';
c[27] = 'b';
c[28] = 'c';
c[29] = 'd';
c[30] = 'e';
c[31] = 'f';
c[32] = 'g';
c[33] = 'h';
c[34] = 'i';
c[35] = 'j';
c[36] = 'k';
c[37] = 'l';
c[38] = 'm';
c[39] = 'n';
c[40] = 'o';
c[41] = 'p';
c[42] = 'q';
c[43] = 'r';
c[44] = 's';
c[45] = 't';
c[46] = 'u';
c[47] = 'v';
c[48] = 'w';
c[49] = 'x';
c[50] = 'y';
c[51] = 'z';
return (c);
}

/**
 *rotequi - fills array i up
 *Return pointer to i
 */
char *rotequi(char *i)
{
i[0] = 'N';
i[1] = 'O';
i[2] = 'P';
i[3] = 'Q';
i[4] = 'R';
i[5] = 'S';
i[6] = 'T';
i[7] = 'U';
i[8] = 'V';
i[9] = 'W';
i[10] = 'X';
i[11] = 'Y';
i[12] = 'Z';
i[13] = 'A';
i[14] = 'B';
i[15] = 'C';
i[16] = 'D';
i[17] = 'E';
i[18] = 'F';
i[19] = 'G';
i[20] = 'H';
i[21] = 'I';
i[22] = 'J';
i[23] = 'K';
i[24] = 'L';
i[25] = 'M';
i[26] = 'n';
i[27] = 'o';
i[28] = 'p';
i[29] = 'q';
i[30] = 'r';
i[31] = 's';
i[32] = 't';
i[33] = 'u';
i[34] = 'v';
i[35] = 'w';
i[36] = 'x';
i[37] = 'y';
i[38] = 'z';
i[39] = 'a';
i[40] = 'b';
i[41] = 'c';
i[42] = 'd';
i[43] = 'e';
i[44] = 'f';
i[45] = 'g';
i[46] = 'h';
i[47] = 'i';
i[48] = 'j';
i[49] = 'k';
i[50] = 'l';
i[51] = 'm';
 return i;
}
