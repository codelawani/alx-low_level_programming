#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to address of head node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *curr = head;

	while (curr != NULL)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
}
