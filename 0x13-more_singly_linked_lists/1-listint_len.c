#include "lists.h"
/**
* listint_len - returns the number of elements in a linked list.
* @h: Pointer to first element of list
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t elements = 0;

	ptr = h;
	while (ptr)
	{
		elements++;
		ptr = ptr->next;
	}
	return (elements);
}
