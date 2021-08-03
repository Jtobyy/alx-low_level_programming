#include "lists.h"

/**
 *add_node - adds a node to the beginning of a list
 *@head: the head of the list
 *@str: string for the new node
 *Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *lp;
if (str == NULL)
return (NULL);
lp = malloc(sizeof(*lp) * 1);
if (lp == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
lp->next = *head;
lp->str = strdup(str);
lp->len = i;
*head = lp;
return (lp);
}
