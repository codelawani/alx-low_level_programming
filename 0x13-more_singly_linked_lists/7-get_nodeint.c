#include "lists.h"

/**
* get_nodeint_at_index - gets node at an index
* @head: pointer to first node
* @index: index of node
* Return: pointer to node or NULL if not found
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0 ; count < index ; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
