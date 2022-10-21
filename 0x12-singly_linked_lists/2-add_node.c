#include "lists.h"
#include <string.h>

/**
* _strlen - Gets length of a string
* @str: string
* Return: length of string
*/

int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
	len++;

	return (len);
}

/**
* add_node - adds a node to a linked list
* @head: pointer to head of list
* @str: string in node
* Return: address of new element or null if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	
	if (n == NULL)
	return (NULL);

	n->str = strdup(str);
	n->len = _strlen(str);
	n->next = *head;
	*head = n;

	return (n);
}
