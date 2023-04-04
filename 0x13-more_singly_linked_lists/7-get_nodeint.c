#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to node
 * @index: position of node
 * Return: null or n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int r;
	listint_t *node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < index; r++)
	{
		node = node->next;
	}
	return (node);
}
