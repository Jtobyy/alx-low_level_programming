#include "lists.h"

/**
*free_list - frees a list
*@head: link to the head of the list
*Return: void
*/
void free_list(list_t *head)
{
list_t *tmp;
list_t *tmp2;
list_t *tmp3;
int i;
tmp3 = NULL;
if (head->next == NULL)
{
free(head);
return;
}
else if ((head->next)->next == NULL)
{
free(head->next);
free(head);
return;
}
for (i = 0; head != NULL; i++)
{
tmp = head;
while (tmp != NULL)
{
if (tmp->next == NULL)
{
free(tmp);
break;
}
else if ((tmp->next)->next == NULL)
{
free(tmp->next);
free(tmp);
break;
}
else if ((tmp->next)->next != NULL)
{
tmp2 = tmp;
tmp3 = tmp->next;
tmp = (tmp->next)->next;
}
}
if (tmp3 != NULL)
{
free(tmp3);
tmp2->next = NULL;
tmp3 = NULL;
}
}
return;
}




