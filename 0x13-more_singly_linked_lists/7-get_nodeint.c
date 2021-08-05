#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linkedlist.
 *@head: head of list
 *@index: nth node index
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *lp;
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
