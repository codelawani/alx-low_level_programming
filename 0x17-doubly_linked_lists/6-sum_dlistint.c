#include "lists.h"
/**
 * sum_dlistint - sums up all data(n) contained dlistint_t list
 * @head: pointer to head of linked list
 * Return: sum or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
