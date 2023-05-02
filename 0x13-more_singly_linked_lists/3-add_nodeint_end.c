/**
 * Add node at the end
 */
listint_t *nodeint_final(listint_t **head, const int i)
{
	listint_t *new;
	listint_t *temp = *header;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->i = i;
	new->next = NULL;

	if (*header == NULL)
	{
		*header = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
