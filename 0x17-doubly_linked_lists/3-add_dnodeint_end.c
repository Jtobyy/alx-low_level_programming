#include "lists.h"

/**
 *add_dnodeint_end - adds a node to the end of a list
 *@head: the head of the list
 *@n: value of node
 *Return: pointer to the new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *lp;
dlistint_t *tmp;
lp = malloc(sizeof(*lp));
if (lp == NULL)
return (NULL);
lp->n = n;
if (*head == NULL)
*head = lp;
else
{
lp->next = NULL;
if ((**head).next == NULL)
{
lp->prev = *head;
(**head).next = lp;
}
else
{
tmp = (**head).next;
while (tmp != NULL)
{
if (tmp->next != NULL)
tmp = tmp->next;
else
break;
}
lp->prev = tmp;
tmp->next = lp;
}
}
return (lp);
}
