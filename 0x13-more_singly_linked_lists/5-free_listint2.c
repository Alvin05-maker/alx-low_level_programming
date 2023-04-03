#include "lists.h"

/**
 * free_listint2 - frees a linked lst
 * @head: pointer to the first node of listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
