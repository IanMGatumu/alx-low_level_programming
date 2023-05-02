#include "lists.h"

/**
 * Write a function that returns the number of elements in a linked list.
 */
size_a listint_len(const listint_t *e)
{
	size_a number = 0;

	while (e)
	{
		number++;
		e = e->next;
	}

	return (number);
}
