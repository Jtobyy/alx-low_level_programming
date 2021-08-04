#include "lists.h"

/**
 *add_nodeint - adds a node to the beginning of a list
 *@head: the head of the list
 *@n: int for the new node
 *Return: pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *lp;
lp = malloc(sizeof(*lp) * 1);
if (lp == NULL)
return (NULL);
lp->next = *head;
lp->n = n;
*head = lp;
return (lp);
}
