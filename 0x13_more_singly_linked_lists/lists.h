#ifndef MORE_SINGLY_LINKED_LIST_H
#define MORE_SINGLY_LINKED_LIST_H

#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
