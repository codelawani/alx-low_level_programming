#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: pointer to address of head node
 * @index: index of node to be deleted
 * Return: 1 on success or -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *node = *head;

	if (*head == NULL)
		return (-1);
	if (!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (--index)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	tmp = node->next;
	if (tmp->next != NULL)
	{
		node->next = tmp->next;
		tmp->next->prev = node;
	}
	else
		node->next = NULL;
	free(tmp);
	return (1);
}
