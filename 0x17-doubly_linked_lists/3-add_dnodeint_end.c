#include "lists.h"

/**
* add_dnodeint_end - adds a node at the end of a list
* @head: pointer to address of head node
* @n: integer
*Return: address of the new elements or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
		new->prev = curr;
	}

	return (new);
}
