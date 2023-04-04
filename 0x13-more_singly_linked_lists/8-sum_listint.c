#include "lists.h"

/**
 * sum_listint - adds nodes
 * @head: node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int count = 0, g = 0;
	listint_t *node = head;

	if (head == NULL)
	{
		return (0);
	}
	while (node != NULL)
	{
		g += node->n;
		count++;
		node = node->next;
	}
	return (g);
}
