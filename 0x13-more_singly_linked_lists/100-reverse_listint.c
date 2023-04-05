#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: node
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL;
	listint_t *after = NULL;

	if (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = start;
		start = *head;
		*head = after;
	}

	*head = start;
	return (*head);
}
