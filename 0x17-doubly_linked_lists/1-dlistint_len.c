#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns number of elements in a list
 * @h: list to chech
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int r;

	while (h != NULL)
	{
		r++;
		h = h->next;
	}
	return (r);
}
