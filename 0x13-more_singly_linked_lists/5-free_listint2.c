#include "lists.h"
/**
* free_listint2  - frees a list
* Pointer to first node
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp, *header;

	header = *head;
	while (header)
	{
		tmp = header->next;
		free(header);
		header = tmp;
	}
	*head = header;
}
