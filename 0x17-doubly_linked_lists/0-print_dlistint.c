#include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	int count = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		count++;
		curr = curr->next;
	}
	return (count);
}
