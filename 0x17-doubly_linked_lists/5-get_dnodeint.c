#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linkedlist.
 *@head: head of list
 *@index: nth node index
 *Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *lp;
if (head == NULL)
return (NULL);
lp = head;
for (i = 0; i < index; i++)
{
lp = lp->next;
if (lp == NULL)
break;
}
if (i == index)
return (lp);
else
return (NULL);
}
