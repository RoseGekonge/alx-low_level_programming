#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: list to print
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h);
{
	while (h != NULL){
		print("%d", h->n);
		h = h->next
	}
}
