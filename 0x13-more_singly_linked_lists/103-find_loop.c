#include "lists.h"

/**
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *node = head;

	while (node && temp && temp->next)
	{
		temp = temp->next->next;
		node = node->next;
		if (temp == node)
		{
			node = head;
			while (node != temp)
			{
				node = node->next;
				temp = temp->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
