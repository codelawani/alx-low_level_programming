#include "lists.h"
#include <string.h>
/**
* add_node_end - add node at end of list
* @head: pointer to head of list
* @str: string
* Return: the address of the new element, or NULL if it failed
*/

list_t add_node_end(list_t **head, const char *str)
{
	*head = malloc(sizeof(list_t));
	
	if (*head == NULL)
		return (NULL);

	*head->str = strdup(str);
	*head->len = _strlen(str);
	return (*head);
}
