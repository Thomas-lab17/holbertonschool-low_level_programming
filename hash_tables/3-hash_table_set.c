#include "hash_tables.h"

/**
 * string_duplicate - duplicates a string into newly allocated memory
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
static char *string_duplicate(const char *str)
{
	char *dup;
	size_t len;
	size_t i;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key (must not be empty)
 * @value: value to store (may be empty)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *new_node;
	char *dup_key;
	char *dup_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
		*key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			dup_value = string_duplicate(value);
			if (dup_value == NULL)
				return (0);

			free(node->value);
			node->value = dup_value;
			return (1);
		}
		node = node->next;
	}

	dup_key = string_duplicate(key);
	if (dup_key == NULL)
		return (0);
	dup_value = string_duplicate(value);
	if (dup_value == NULL)
	{
		free(dup_key);
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_key);
		free(dup_value);
		return (0);
	}

	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

