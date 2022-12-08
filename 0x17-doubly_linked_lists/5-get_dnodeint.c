#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at an index
 * @head: pointer to head of linked list
 * @index: index of node to be returned
 * Return: nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;

	while (index--)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
	}

	return (curr);
}