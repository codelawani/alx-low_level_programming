#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to address of head node
 * @idx: index where node is to be inserted
 * @n: integer
 * Return: address of new node or NULL on failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	
	if (h == NULL)
		return (NULL);
	if (current == NULL || !idx)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	current = *h;
	while (current->next && --idx)
	{
		current = current->next;
	}
	if (idx > 0)
		return (NULL);
	if (current->next != NULL)
		new->next = current->next;
	new->prev = current;
	current->next = new;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
