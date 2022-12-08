#include "lists.h"

/**
 * add_dnodeint - adds a node to a list
 * @head: pointer to address of head of list
 * @n: integer
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
