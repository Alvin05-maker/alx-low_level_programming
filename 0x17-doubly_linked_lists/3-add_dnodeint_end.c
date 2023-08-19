#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to the first node of a list
 * @n: data to the new node
 *
 * Return: returns the address of the last node or the NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node =  malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
