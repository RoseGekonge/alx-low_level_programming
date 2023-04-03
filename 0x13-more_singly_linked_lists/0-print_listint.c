#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: argument
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	const listint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
