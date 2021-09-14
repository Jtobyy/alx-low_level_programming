#include "lists.h"

size_t dlistint_len7(const dlistint_t *h);

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
}
if (index == dlistint_len7(*head) - 1)
{
tmp2->next = NULL;
free(lp);
return (1);
}
else if (i == index)
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


/**
 *dlistint_len7 - returns the length of a list
 *@h: list
 *Return: no of elements in list
 */
size_t dlistint_len7(const dlistint_t *h)
{
size_t i;
const dlistint_t *p;
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
