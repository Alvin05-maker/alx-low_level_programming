#include "lists.h"

/**
 * dlistint_len - prints the no of elements in a list
 * @h: the head
 *
 * Return: the number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *len = h;
	int count = 0;

	while (len != NULL)
	{
		count++;
		len = len->next;
	}
	return (count);
}
