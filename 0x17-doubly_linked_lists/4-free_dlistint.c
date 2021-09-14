#include "lists.h"

/**
*free_dlistint - frees a list
*@head: link to the head of the list
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *lp;
if (head == NULL)
return;
lp = head;
while (head != NULL)
{
head = lp->next;
free(lp);
lp = head;
}
return;
}
