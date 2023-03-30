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

	const list_t *node = h;

	while (node != NULL)
	{
		printf("[%d] %s\n", node->len, node->str);
		count++;
		node = node->next;
	}
	return (count);
}
