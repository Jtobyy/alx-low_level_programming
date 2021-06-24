#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- checks if a random gotten
*number is positive or negative
*Return: 0
*/

void positive_or_negativ (int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
