#include "lists.h"

/**
* pop_listint - deletes a node
* @head: pointer to address of head node in listint_t
* Return: data contained in deleted node
*/

int pop_listint(listint_t **head)
{
	listint_t *nextnode = NULL;
	int n = 0;

	if (!(*head))
		return (n);

	nextnode = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nextnode;

	return (n);
}
