#include "lists.h"

/**
 *add_dnodeint - adds a node to the beginning of a list
 *@head: the head of the list
 *@n: value of node
 *Return: pointer to the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *lp;
lp = malloc(sizeof(*lp));
if (lp == NULL)
return (NULL);
lp->n = n;
lp->next = *head;
lp->prev = NULL;
if (*head == NULL)
*head = lp;
else
{
(*head)->prev = lp;
*head = lp;
}
return (lp);
}
