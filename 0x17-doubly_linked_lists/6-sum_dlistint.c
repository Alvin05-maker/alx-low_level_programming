#include "lists.h"
/**
 * sum_dlistint - return the sum of all data of a doubly linked list
 *
 * @head: pointer to the head node
 *
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
