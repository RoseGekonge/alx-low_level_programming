#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds new node at beginning of list
 * @head: double ptr to head node
 * @n: value of new node
 * Return: address of new element on success or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	if (!new_node)
		return (NULL);

	new_node->prev = *head;
	new_node->next = NULL;
	new_node->n = n;
	if (*head != NULL)
		(*head)->next = new_node;

	return (new_node);
}
