#include "lists.h"

/**
 *print_listint - print the elements of a list
 *@h: list header
 *Return: number of elments in list
 */
size_t print_listint(const listint_t *h)
{
size_t i;
const listint_t *p;
i = 0;
if (h == NULL)
{
printf("(nil)\n");
return (0);
}
p = h;
while (p != NULL)
{
printf("%u\n", p->n);
i++;
p = p->next;
}
return (i);
}
