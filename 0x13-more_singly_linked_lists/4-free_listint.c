#include "lists.h"

/**
 * Free list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (header)
	{
		temp = header->next;
		free(header);
		header = temp;
	}
}
