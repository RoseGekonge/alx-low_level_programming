#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: head
 * @str: element to count
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node= malloc(sizeof(list_t));

	list_t *last = *head;

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = node;
	return (node);
}
