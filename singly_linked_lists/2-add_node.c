#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
* @head: adds a new node at the beginning of a linked list
* @str: string
*
* return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
