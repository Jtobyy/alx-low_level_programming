#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name: name
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL && f == NULL)
return;
if (name == NULL)
{
name = malloc(sizeof(*name));
name[0] = '\0';
}
if (f == NULL)
return;
(*f)(name);
return;
}
