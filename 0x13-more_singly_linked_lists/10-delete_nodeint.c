#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *index of a listint_t linked list.
 *@head: address to head of list
 *@index: node index
 *Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *lp;
listint_t *tmp;
listint_t *tmp2;
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
tmp2->next = tmp;
free(lp);
}
return (1);
}
