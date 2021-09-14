#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index
 *index of a listint_t linked list.
 *@head: address to head of list
 *@index: node index
 *Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *lp;
dlistint_t *tmp;
dlistint_t *tmp2;
if (*head == NULL)
return (-1);
lp = *head;
if (index == 0)
{
*head = (*head)->next;
free(lp);
return (1);
}
for (i = 0; i < index; i++)
{
tmp2 = lp;
lp = lp->next;
if (lp == NULL)
break;
}
if (i == index)
{
tmp = lp->next;
tmp->prev = tmp2;
tmp2->next = tmp;
free(lp);
return (1);
}
else
return (-1);
}
