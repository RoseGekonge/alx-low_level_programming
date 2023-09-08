#include "hash_tables.h"

/*
 * hash_table_create - creates a hash table
 * @size: size of array in the hash table
 * Return: a pointer to the hash table created
 */

hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *table;
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	table->size = size;
	table->*array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for(i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table)
}
