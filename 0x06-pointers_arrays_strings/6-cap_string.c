#include "holberton.h"

/**
*cap_string - capitalizes all words of string
*@s: pointer to string
*Return: string capitalized
*/

char *cap_string(char *s)
{
int i;
int j;
i = 0;
while (s[i] != 0)
i++;
for (j = 0; j < i; j++)
{
if (s[j - 1] == ',' || s[j - 1] == ';' || s[j - 1] == '.' ||
s[j - 1] == '!' || s[j - 1] == '?' || s[j - 1] == '"' ||
s[j - 1] == '(' || s[j - 1] == ')' || s[j - 1] == '{' ||
s[j - 1] == '}' || s[j - 1] == ' ' || s[j - 1] == '\t' ||
s[j - 1] == '\n')
{
if (s[j] >= 97 && s[j] <= 122)
s[j] -= 32;
}
}
return (s);
}
