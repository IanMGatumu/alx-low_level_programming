#include "lists.h"

/**
 * Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 */
int del_listint(listint_t **header)
{
	listint_t *temp;
	int number;

	if (!header || !*header)
		return (0);

	number = (*header)->i;
	temp = (*header)->next;
	free(*head);
	*head = temp;

	return (number);
}
