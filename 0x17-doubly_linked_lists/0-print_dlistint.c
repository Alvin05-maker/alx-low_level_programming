#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print the elements of a doubly linked list
 * @h: the head
 *
 * Return: the count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
