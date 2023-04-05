#include "lists.h"

/**
 * a - realloc
 * @arr: add to
 * @list: what to add
 * @num: new list size
 * Return: pointer
 */

const listint_t **a(const listint_t **arr, const listint_t *list, size_t num)
{
	size_t r = 0;
	const listint_t **temp;
	
	temp = malloc(num * sizeof(listint_t *));
	if (temp == NULL)
	{
		free(arr);
		exit (98);
	}
	while (r < num)
	{
		temp[r] = arr[r];
		r++;
	}
	temp[r] = list;
	free (arr);
	return (temp);
}

/**
 * print_listint_safe - prints
 * @head: pointer
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t k, count = 0;
	const listint_t **node = NULL;

	while (head != NULL)
	{
		for (k = 0; k < count; k++)
		{
			if (head == node[k])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(node);
				return (count);
			}
		}
		count++;
		node = a(node, head, count);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(node);
	return (count);
}
