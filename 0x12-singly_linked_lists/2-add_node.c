#include "lists.h"

/**
 * add_node - adds a new head
 * @head: head
 * @str: element to count
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	(node->str) = strdup(str);
	node->len = strlen(str);

	if ((node->str) == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = *head;
	*head = node;
	return (node);
}
