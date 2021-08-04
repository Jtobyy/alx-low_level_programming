#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new nodeat a  given position
 *@idx: idex of the list where the new node should be added.(index from 0)
 *@head: address of head of list
 *@n: int to be  inserted
 *Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *lp;
listint_t *np;
if (*head == NULL)
return (NULL);
lp = *head;
for (i = 0; i < (idx - 1); i++)
{
lp = lp->next;
if (lp == NULL)
break;
}
if (i == (idx - 1))
{
np = malloc(sizeof(*np) * 1);
if (np == NULL)
return (NULL);
np->n = n;
np->next = lp->next;
lp->next = np;
return (lp);
}
else
return (NULL);
}
