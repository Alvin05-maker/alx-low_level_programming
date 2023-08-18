#include "lists.h"
/**
 * add_dnodeint - add a node to the beginning of the list
 * @head: pointer to the first node
 * @n: the data to the new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return NULL;
	}
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
