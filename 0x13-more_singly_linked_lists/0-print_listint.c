#include "lists.h"
/**
* print_listint - prints all elements of a linked list
* @h: Pointer to first element of list
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t elements = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		elements++;
		ptr = ptr->next;
	}
	return (elements);
}
