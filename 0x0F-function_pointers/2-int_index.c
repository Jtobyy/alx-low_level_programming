#include "function_pointers.h"

/**
 *int_index - functin that searches for an integer
 *@array: pointer to an array
 *@size: size of the array
 *@cmp: function pointer
 *Return: -1 if no match else returns the index of
 *the first element for which the cmp function does
 *not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int v;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
v = cmp(*(array + i));
if (v != 0)
{
v = i;
break;
}
}
if (i == size)
return (-1);
return (v);
}
