#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the funciton
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
putchar('\n');
return;
}
