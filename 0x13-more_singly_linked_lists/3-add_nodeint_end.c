#include "lists.h"
/**
* add_nodeint_end - adds node at list ending
* @head: pointer to head of node
* @n: integer stored in node
* Return: address of new node or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/*
*	listint_t *current = *head;
*	while (current->next != NULL)
*	{
*		current = current->next;
*	}
*	current->next = malloc(sizeof(listint_t));
*	current->next->n = n;
*	current->next->next = NULL;
*
*	return (current->next);
*/

	listint_t *lastnode,  *new = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
			lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new;
	}

	return (new);
}
