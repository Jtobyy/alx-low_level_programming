#include "lists.h"

/**
 *free_listint - frees a list
 *@head: link to the head of the list
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *lp;
lp = head;
while (head != NULL)
{
head = lp->next;
free(lp);
lp = head;
}
return;
}
