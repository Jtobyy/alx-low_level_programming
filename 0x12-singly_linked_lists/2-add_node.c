#include "lists.h"

/**
 *add_node - adds a node to the beginning of a list
 *@head: the head of the list
 *@str: string for the new node
 *Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
char *p;
int i;
list_t *lp;
if (str == NULL)
return (NULL);
p = strdup(str);
i = 0;
while (p[i] != '\0')
i++;
lp = malloc(sizeof(*lp) * 1);
if (lp == NULL)
{
free(str);
return (NULL);
}
lp->next = *head;
lp->str = p;
lp->len = i;
*head = lp;
return (lp);
}
