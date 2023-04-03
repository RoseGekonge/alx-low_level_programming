#include "lists.h"

/**
 * free_listnt - prints all elements
 * @head: argument
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
