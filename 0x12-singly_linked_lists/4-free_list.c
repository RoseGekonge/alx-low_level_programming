#include "lists.h"

/**
 * free_list - prints all elements
 * @head: argument
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *node;

	if (node == NULL)
	{
		exit(1);
	}
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
