#include "lists.h"

/**
 * @header: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *new_nodeint(listint_t **header, const int i)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->i = i;
	new->next = *header;
	*header = new;

	return (new);
}
