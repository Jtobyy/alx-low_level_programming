#include "lists.h"

/**
 *print_dlistint - prints the element of a list
 *@h: list
 *Return: no of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;
const dlistint_t *p;
i = 0;
if (h == NULL)
return (0);
p = h;
while (p != NULL)
{
printf("%u\n", p->n);
i++;
p = p->next;
}
return (i);
}
