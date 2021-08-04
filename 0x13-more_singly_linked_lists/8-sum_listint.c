#include "lists.h"

/**
 *sum_listint - sums the element of a list
 *@head: pointer to head of list
 *Return: sum of list's elements
 */
int sum_listint(listint_t *head)
{
size_t i;
const listint_t *p;
i = 0;
if (head == NULL)
return (0);
p = head;
while (p != NULL)
{
i += p->n;
p = p->next;
}
return (i);
}
