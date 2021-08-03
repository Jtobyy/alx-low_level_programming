#include "lists.h"

/**
*free_list - frees a list
*@head: link to the head of the list
*Return: void
*/
void free_list(list_t *head)
{
list_t *tmp;
if (head == NULL)
return;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
return;
}
