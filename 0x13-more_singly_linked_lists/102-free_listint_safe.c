#include "lists.h"

/**
 * free_listint_safe - frees listint_t list
 * @h: pointer
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	int r;
	size_t k = 0;
	listint_t *node;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		r = *h - (*h)->next;
		if (r > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			k++;
		}
		else
		{
			free(*h);
			*h = NULL;
			k++;
			break;
		}
	}
	*h = NULL;
	return (k);
}
