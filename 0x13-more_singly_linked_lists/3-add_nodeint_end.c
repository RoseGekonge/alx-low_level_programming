#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head
 * @n: element
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	listint_t *last = *head;

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
