#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: pointer to d link to the head of the list
 *Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *lp;
lp = *head;
if (*head == NULL)
return;
while (*head != NULL)
{
*head = lp->next;
free(lp);
lp = *head;
}
return;
}
