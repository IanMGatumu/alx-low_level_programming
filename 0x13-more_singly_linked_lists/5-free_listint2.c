#include "lists.h"

/**
 * Free
 */
void free_listint2(listint_t **header)
{
	listint_t *temp;

	if (header == NULL)
		return;

	while (*header)
	{
		temp = (*header)->next;
		free(*header);
		*header = temp;
	}

	*header = NULL;
}
