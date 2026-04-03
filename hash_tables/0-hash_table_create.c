#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL if it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{	hash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	memset(ht->array, 0, sizeof(hash_node_t *) * size);
	return (ht);
}
