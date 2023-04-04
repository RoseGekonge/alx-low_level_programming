#include "lists.h"

/**
 * free_listint2 - frees list and sets the head to NULL
 * @head: argument
 * Return: count
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = (*head)->next;
		free(node);
		*head = node;
	}
	*head = NULL;
}
