#include "lists.h"

/**
* delete_nodeint_at_index - delete node at index
* @head: pointer to address of first node
* @index: index of deletion
* Return: 1 or -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current = *head;

	if (*head == NULL)
		return(-1);
	else if (!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
	while (--index)
	{
		current = current->next;
	}
	if (current->next == NULL)
		return (-1);
	tmp = current->next;
	current->next = current->next->next;
	free(tmp);
	}
	return (1);
}
