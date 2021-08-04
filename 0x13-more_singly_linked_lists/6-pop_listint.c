#include "lists.h"

/**
 *pop_listint - removes the head of a list and retur ns its value
 *@head: address of head of list
 *Return: value of int in head
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *p;
if (*head == NULL)
return (0);
p = (*head)->next;
n = (*head)->n;
free(*head);
*head = p;
return (n);
}
