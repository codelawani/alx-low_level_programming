#include "lists.h"

/**
 * dlistint_len - gets the length of a linked list
 * @h: head of dlistint_t list
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	int len = 0;

	while (curr && ++len)
		curr = curr->next;

	return (len);
}
