#include "lists.h"

/**
* sum_listint - sums all data of a listint_t linked list
* @head: pointer to first node
* Return: sum or 0 is list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
