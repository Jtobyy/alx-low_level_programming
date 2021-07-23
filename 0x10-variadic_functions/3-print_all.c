#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: a list of types of arguments passed to the function
 *Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
int j;
char *p;
j = 0;
va_start(ap, format);
while (format[j] != '\0')
{
switch (format[j])
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%i", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
p = va_arg(ap, char *);
if (p == NULL)
{
printf("(nil)");
break;
}
printf("%s", p);
break;
}
if ((format[j] == 'c' || format[j] == 'i'
|| format[j] == 'f' || format[j] == 's') && format[j + 1] != 0)
printf(", ");
j++;
}
putchar('\n');
return;
}
