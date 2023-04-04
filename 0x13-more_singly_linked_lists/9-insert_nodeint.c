#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at the nth position
 * @head: node
 * @idx: index position to insert
 * @n: what to add
 * Return: adress
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int count = 0;
	unsigned int r = 0;

	listint_t *node = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	while (*head != NULL)
	{
		if (idx == 0)
		{
			temp->next = *head;
			*head = temp;
			return (temp);
		}
		if ((r + 1)== idx)
		{
			temp->n = n;
			temp->next = node->next;
			node->next = temp;
			return (temp);
		}
		else
		{
			node = node->next;
			r++;
			count++;
		}
	}
	return (NULL);
}
