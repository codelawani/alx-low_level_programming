#include "lists.h"

/**
*
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
/*	listint_t *current;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);*/

	for (count = 0 ; count < index ; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
