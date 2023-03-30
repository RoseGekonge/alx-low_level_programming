#include "lists.h"

/**
 * print_list - prints all elements
 * @h: argument
 *
 * Return: elements
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	struct list_t = h;

	while (node != NULL)
	{
		printf("[%d] %s", h->len, h->str);
		count++;
		node = node->next;
	}
	return (count);
}
