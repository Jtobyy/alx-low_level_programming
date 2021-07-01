#include "holberton.h"

/**
 *string_toupper - changes all lower case letters of a string to
 *uppercase
*@s: pointer to string
*Return: pointer to string
*/

char *string_toupper(char *s)
{
int i;
int j;
i = 0;
while (s[i] != 0)
{
i++;
}
for (j = 0; j < i; j++)
{
if (s[j] >= 97 && s[j] <= 122)
s[j] -= 32;
}
return (s);
}
