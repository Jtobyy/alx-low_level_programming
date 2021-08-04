#include "lists.h"

/**
 *listint_len - returns the number of elements in a list
 *@h: list
 *Return: no of elements in list
 */
size_t listint_len(const listint_t *h)
{
size_t i;
const listint_t *p;
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
