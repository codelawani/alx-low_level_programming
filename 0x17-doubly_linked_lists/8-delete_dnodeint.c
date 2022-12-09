#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: pointer to address of head node
 * @index: index of node to be deleted
 * Return: 1 on success or -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);
	while (index--)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}
	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
		(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
