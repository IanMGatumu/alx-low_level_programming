#include "lists.h"

/**
 * Sum list
 */
int sum_listint(listint_t *header)
{
	int sum = 0;
	listint_t *temp = header;

	while (temp)
	{
		sum += temp->i;
		temp = temp->next;
	}

	return (sum);
}
