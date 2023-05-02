#include "lists.h"

/**
 * Get node at index
 */
listint_t *nodeindex(listint_t *head, unsigned int ind)
{
	unsigned int i = 0;
	listint_t *temp = header;

	while (temp && i < ind)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

