#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t g = 0;
	while (node)
	{
		g++;
		printf("%d\n", h->n);
		node = node->next;
	}
	return (g);
}
