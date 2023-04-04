#include "lists.h"

/**
 * pop_listint - delete a head node
 * @head: argument
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int r;
	listint_t *node;

	if (head == NULL)
	{
		return (0);
	}

	r = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (r);
}
