#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a  given position
 *@idx: idex of the list where the new node should be added.(index from 0)
 *@h: address of head of list
 *@n: int to be  inserted
 *Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *lp;
dlistint_t *np;
if (*h == NULL)
return (NULL);
lp = *h;
if (idx == 0)
{
np = add_dnodeint(h, n);
return (np);
}
else if (idx == dlistint_len(*h))
{
np = add_dnodeint_end(h, n);
return (np);
}
for (i = 0; i < (idx - 1) && i <= dlistint_len(*h); i++)
{
lp = lp->next;
if (lp == NULL)
break;
}
if (i == (idx - 1))
{
np = malloc(sizeof(*np));
if (np == NULL)
return (NULL);
np->n = n;
np->next = lp->next;
(lp->next)->prev = np;
np->prev = lp;
lp->next = np;
return (np);
}
return (NULL);
}
