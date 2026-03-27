#include "lists.h"

/**
* add_node_end - adds a new node at the ending of a linked list
* @head: adds a new node at the beginning of a linked list
* @str: string
*
* return: the address of the new element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;
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

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
