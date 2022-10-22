#include "lists.h"
#include <string.h>
/**
* add_node_end - add node at end of list
* @head: pointer to head of list
* @str: string
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *lastNode;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	
	for (len = 0; str[len];)
		len++;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;


	if (*head == NULL)
	*head = newNode;

	else
	{
		lastNode = *head;

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;
	}
	return (*head);
}
