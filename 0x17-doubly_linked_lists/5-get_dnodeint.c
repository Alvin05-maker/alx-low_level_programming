#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = count_nodes(head);
	size_t i;
	dlistint_t *current = head;

	if (head == NULL || index >= len)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		current =  current->next;
	}

	return (current);
}
size_t count_nodes(dlistint_t *head)
{
	int count = 0;
	dlistint_t *temp = head;

	while (head != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
