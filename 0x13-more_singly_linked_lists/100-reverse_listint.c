#include "lists.h"

/**
 *reverse_listint -  reverses a listint_t linked list.
 *@head: address of list's head
 *Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp;
listint_t *tmp2 __attribute__((unused));
tmp = NULL;
if (*head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
if (((*head)->next)->next == NULL)
{
tmp = (*head)->next;
(*head)->next = NULL;
tmp->next = *head;
*head = tmp;
return (*head);
}
tmp = (*head)->next;
(*head)->next = NULL;
tmp2 = tmp->next;
tmp->next = *head;
*head = tmp2->next;
if (*head != NULL)
{
while (*head != NULL)
{
tmp2->next = tmp;
tmp = (*head)->next;
(*head)->next = tmp2;
(*head) = tmp;
}
return (*head);
}
else
{
*head = tmp->next;
return (*head);
}
}
