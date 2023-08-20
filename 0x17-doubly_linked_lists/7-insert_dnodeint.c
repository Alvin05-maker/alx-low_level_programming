#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the head node
 * @idx: the index to insert node
 * @n: the data to input
 *
 * Return: returns the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = count_of_nodes(&*h);
	dlistint_t *temp;
	dlistint_t *new_node;

	if (idx > size)
		return (NULL);
	else if (idx == 0)
		add_dnodeint(&*h, n);
	else if (idx == size)
		add_dnodeint_end(&*h, n);
	else
	{
		temp = *h;
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;

		while(--idx)
			temp = temp->next;
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}		
	return (new_node);
}
unsigned int count_of_nodes(dlistint_t **head)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;

	while (*head != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
