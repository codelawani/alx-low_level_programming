#include "lists.h"

/**
* free_list - frees a list
* @head: pointer to head of list
*/

void free_list(list_t *head)
{
	ptr = head;
	list_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
