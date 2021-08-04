#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a list
 *@head: the head of the list
 *@n: int for the new node
 *Return: pointer to the new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *lp;
listint_t *tmp;
lp = NULL;
lp = malloc(sizeof(*lp) * 1);
if (lp == NULL)
return (NULL);
lp->next = NULL;
lp->n = n;
if (*head == NULL)
*head = lp;
else
{
if ((**head).next == NULL)
(**head).next = lp;
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
tmp->next = lp;
}
}
return (lp);
}
