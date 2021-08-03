#include "lists.h"

/**
 *add_node_end - adds a node to the end of a list
 *@head: the head of the list
 *@str: string for the new node
 *Return: pointer to the new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *lp;
list_t *tmp;
if (str == NULL)
return (NULL);
lp = malloc(sizeof(*lp) * 1);
if (lp == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
if (*head == NULL)
*head = lp;
else
{
if ((**head).next == NULL)
(**head).next = lp;
else
{
tmp = (**head).next;
while (tmp != NULL)
{
if (tmp->next != NULL)
tmp = tmp->next;
else
break;
}
tmp->next = lp;
}
}
lp->next = NULL;
lp->str = strdup(str);
lp->len = i;
return (lp);
}
