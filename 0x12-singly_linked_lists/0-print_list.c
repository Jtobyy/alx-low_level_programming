#include "lists.h"

/**
 *print_list - prints the element of a list
 *@h: list
 *Return: no of elements in list
 */
size_t print_list(const list_t *h)
{
size_t i;
const list_t *p;
i = 0;
if (h == NULL)
return (0);
p = h;
while (p != NULL)
{
if (p->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%u]", p->len);
printf("%s\n",  p->str);
}
i++;
p = p->next;
}
return (i);
}
