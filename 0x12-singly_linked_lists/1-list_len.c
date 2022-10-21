#include "lists.h"

/**
* list_len - returns number of elements in a list
* @h: pointer to linked list
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
