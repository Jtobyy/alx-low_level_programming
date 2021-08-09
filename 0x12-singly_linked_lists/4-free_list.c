#include "lists.h"

/**
*free_list - frees a list
*@head: link to the head of the list
*Return: void
*/
void free_list(list_t *head)
{
list_t *lp;
lp = head;
while(head != NULL)
{
head = lp->next;
free(lp->str);
free(lp);
lp = head;
}
return;
}
