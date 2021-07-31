#include "lists.h"

/**
 *list_len - prints the element of a list
 *@h: list
 *Return: no of elements in list
 */
size_t list_len(const list_t *h)
{
size_t i;
const list_t *p;
i = 0;
if (h == NULL)
return (0);
p = h;
while (p != NULL)
{
i++;
p = p->next;
}
return (i);
}
