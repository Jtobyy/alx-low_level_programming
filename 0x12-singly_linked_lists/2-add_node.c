#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
unsigned int i;
char *s;
list_t *p;
if (head == 0 || str == 0)
return NULL;
s = head->str;
i = 0;
while (str[i] != '\0');
{
s[i] = str[i];
i++;
}
s[i] = '\0';
head->len = i;
head->next = NULL;
return (&(head->next));
}
