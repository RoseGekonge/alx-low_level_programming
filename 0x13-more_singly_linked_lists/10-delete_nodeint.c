#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: node
 * @index: position of node
 * Return: 1 0r -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *node = *head;
	listint_t *temp = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (r = 0; (r + 1) < index; r++)
	{
		if (!node || !(node->next))
		{
			return (-1);
		}

		node = node->next;
	}
	temp = node->next;
	node->next = temp->next;
	free(temp);
	return (1);
}
