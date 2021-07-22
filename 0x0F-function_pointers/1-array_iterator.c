#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *on each element of an arry
 *@array: pointer to array
 *@size: size of the array
 *@action: pointer to the function to be used
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(*(array + i));
return;
}
