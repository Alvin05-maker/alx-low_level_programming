#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the first node
 *
 * Return: return nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
