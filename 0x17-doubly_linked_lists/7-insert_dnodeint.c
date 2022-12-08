#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to address of head node
 * @idx: index where node is to be inserted
 * @n: integer
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int size = 1;
	if (current == NULL)
		return (NULL);
	if (!idx)
		add_dnodeint(h, n);
	while (current->next != NULL)
	{
		++size;
		current = current->next;
	}
	if (idx > size)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	current = *h;
	while (current->next && --idx)
	{
		current = current->next;
	}
	if (current->next != NULL)
	{
		new->next = current->next;
		new->prev = current;
		current->next = new;
		new->next->prev = new;
	}
	else
		add_dnodeint_end(&current, n);
	return (new);
}
