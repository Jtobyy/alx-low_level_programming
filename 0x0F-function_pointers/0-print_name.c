#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name: name
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
{
name = malloc(sizeof(*name));
name[0] = '\0';
}
if (f == NULL)
{
free(name);
return;
}
(*f)(name);
return;
}
