#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: pointer to address of head node
 * @index: index of node to be deleted
 * Return: 1 on success or -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delnode, *node = *head;

	if (*head == NULL)
		return (-1);
	if (!index)
	{
		delnode = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->next->prev = NULL;
		free(delnode);
		return (1);
	}
	while (--index)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	delnode = node->next;
	delnode->prev = NULL;
	if (delnode->next != NULL)
	{
		node->next = delnode->next;
		delnode->next->prev = node;
	}
	else
		node->next = NULL;
	delnode->next = NULL;
	free(delnode);
	return (1);
}
