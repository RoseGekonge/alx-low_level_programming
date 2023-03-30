#include "lists.h"

/**
 * list_len - prints all elements
 * @h: argument
 *
 * Return: elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	const list_t *node = h;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
