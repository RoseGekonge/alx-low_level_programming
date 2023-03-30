#include "lists.h"

/**
 * free_list - prints all elements
 * @head: argument
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *node = head;

	if (node == NULL)
	{
		exit(1);
	}
	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
}
