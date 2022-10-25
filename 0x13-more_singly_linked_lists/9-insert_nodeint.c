#include "lists.h"

/**
* insert_nodeint_at_index - insert node at an index
* @head: pointer to address of first node
* @idx: index of inserrtion point
* @n: integer to be stored as value
* Return: pointer to new node or null if failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		current = *head;
		idx--;
		while (--idx)
		{
			if (current == NULL || current->next == NULL)
				return (NULL);
			current = current->next;
		}

		new->next = current->next;
		current->next  = new;
	}
	return (new);
}
