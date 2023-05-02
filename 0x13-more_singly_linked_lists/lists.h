#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Alx project - singly linked list node structures
 */
typedef struct listint
{
	int i;
	struct listint *next;
} listint;

size_t print_listint(const listint *h);
size_t listint_len(const listint *h);
listint *add_nodeint(listint **head, const int i);
listint *add_nodeint_end(listint **head, const int i);
void free_listint(listint *head);
void free_listint2(listint **head);
int pop_listint(listint **head);
listint *get_nodeint_at_index(listint *head, unsigned int index);
int sum_listint(listint *head);
listint *insert_nodeint_at_index(listint **head, unsigned int idx, int i);
int delete_nodeint_at_index(listint **head, unsigned int index);
listint *reverse_listint(listint **head);
size_t print_listint_safe(const listint *head);
size_t free_listint_safe(listint **h);
listint *find_listint_loop(listint *head);

#endif
