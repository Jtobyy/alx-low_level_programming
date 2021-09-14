#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data(n) of
 *a dlistint_t linked list
 *@head: the head of the list
 *Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
int i;
dlistint_t *tmp;
i = 0;
if (head == NULL)
return (0);
i += (head->n);
tmp = head->next;
while (tmp != NULL)
{
i += (tmp->n);
tmp = tmp->next;
}
return (i);
}

