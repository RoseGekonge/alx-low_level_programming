#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - adds a new head
 * @head: current head
 * @n: data to add in the head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;
	if (*head == NULL)
		return (NULL);
	else {
		(*head)->prev = new_head;
		*head = new_head;
		return (new_head);
	}
}
