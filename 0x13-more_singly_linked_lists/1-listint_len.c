#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: arguments
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	const listint_t *node = h;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
